
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct ingenic_gpio_chip {int dummy; } ;
struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 struct ingenic_gpio_chip* FUNC_0 (struct gpio_chip*) ;
 int FUNC_1 (struct ingenic_gpio_chip*,int ,int ,int) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_2(VAR_1);
 struct ingenic_gpio_chip *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3, VAR_0, VAR_1->hwirq, 0);
}
