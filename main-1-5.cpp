#include <iostream>

extern int count_evens(int number);

int main() {
    int number = 10;

    std::cout << "There are " << count_evens(number) << " even numbers between number 1 and " << number << std::endl;
    return 0;
}