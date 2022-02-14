
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {unsigned int base; } ;


 int FUNC_0 (unsigned int) ;

__attribute__((used)) static void FUNC_1(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 FUNC_0(VAR_0->base + VAR_1);
}
