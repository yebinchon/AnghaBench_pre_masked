
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {size_t hwirq; } ;
struct gpio_chip {int dummy; } ;
struct gb_gpio_line {int masked; int masked_pending; } ;
struct gb_gpio_controller {struct gb_gpio_line* lines; } ;


 struct gb_gpio_controller* FUNC_0 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_1(VAR_0);
 struct gb_gpio_controller *VAR_2 = FUNC_0(VAR_1);
 struct gb_gpio_line *VAR_3 = &VAR_2->lines[VAR_0->hwirq];

 VAR_3->masked = 0;
 VAR_3->masked_pending = 1;
}
