
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sirfsoc_gpio_chip {int dummy; } ;
struct sirfsoc_gpio_bank {int dummy; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sirfsoc_gpio_chip*,struct sirfsoc_gpio_bank*,int) ;
 struct sirfsoc_gpio_chip* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 struct sirfsoc_gpio_bank* FUNC_3 (struct sirfsoc_gpio_chip*,int) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_2(VAR_1);
 struct sirfsoc_gpio_chip *VAR_3 = FUNC_1(VAR_2);
 struct sirfsoc_gpio_bank *VAR_4 = FUNC_3(VAR_3, VAR_1->hwirq);

 FUNC_0(VAR_3, VAR_4, VAR_1->hwirq % VAR_0);
}
