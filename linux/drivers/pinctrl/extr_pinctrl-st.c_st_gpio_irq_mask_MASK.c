
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_gpio_bank {scalar_t__ base; } ;
struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 struct st_gpio_bank* FUNC_1 (struct gpio_chip*) ;
 struct gpio_chip* FUNC_2 (struct irq_data*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct gpio_chip *VAR_2 = FUNC_2(VAR_1);
 struct st_gpio_bank *VAR_3 = FUNC_1(VAR_2);

 FUNC_3(FUNC_0(VAR_1->hwirq), VAR_3->base + VAR_0);
}
