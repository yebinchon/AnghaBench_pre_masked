
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct gpio_chip {int owner; } ;


 int FUNC_0 (struct gpio_chip*,int ) ;
 struct gpio_chip* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1, VAR_0->hwirq);
 FUNC_2(VAR_1->owner);
}
