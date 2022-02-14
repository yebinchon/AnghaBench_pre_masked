
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stm32_gpio_bank {int fwnode; } ;
struct irq_fwspec {int param_count; unsigned int* param; int fwnode; } ;
struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 struct stm32_gpio_bank* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct irq_fwspec*) ;

__attribute__((used)) static int FUNC_2(struct gpio_chip *VAR_1, unsigned int VAR_2)
{
 struct stm32_gpio_bank *VAR_3 = FUNC_0(VAR_1);
 struct irq_fwspec VAR_4;

 VAR_4.fwnode = VAR_3->fwnode;
 VAR_4.param_count = 2;
 VAR_4.param[0] = VAR_2;
 VAR_4.param[1] = VAR_0;

 return FUNC_1(&VAR_4);
}
