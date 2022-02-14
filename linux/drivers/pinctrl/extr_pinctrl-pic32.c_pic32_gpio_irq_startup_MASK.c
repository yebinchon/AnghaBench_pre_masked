
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_data {int hwirq; } ;
struct gpio_chip {int dummy; } ;


 struct gpio_chip* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (struct gpio_chip*,int ) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static unsigned int FUNC_3(struct irq_data *VAR_0)
{
 struct gpio_chip *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, VAR_0->hwirq);
 FUNC_2(VAR_0);

 return 0;
}
