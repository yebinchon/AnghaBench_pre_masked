
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_gpio_bank {int dummy; } ;
struct gpio_chip {unsigned int base; } ;


 int FUNC_0 (struct stm32_gpio_bank*,unsigned int,int) ;
 struct stm32_gpio_bank* FUNC_1 (struct gpio_chip*) ;
 int FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct gpio_chip *VAR_0,
 unsigned VAR_1, int VAR_2)
{
 struct stm32_gpio_bank *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_1, VAR_2);
 FUNC_2(VAR_0->base + VAR_1);

 return 0;
}
