
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;
struct nmk_gpio_chip {struct gpio_chip chip; } ;


 struct nmk_gpio_chip* FUNC_0 (unsigned int) ;

__attribute__((used)) static struct gpio_chip *FUNC_1(unsigned VAR_0)
{
 struct nmk_gpio_chip *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return &VAR_1->chip;
 return ((void*)0);
}
