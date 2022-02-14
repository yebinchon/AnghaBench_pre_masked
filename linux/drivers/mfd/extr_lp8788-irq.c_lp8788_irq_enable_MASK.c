
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lp8788_irq_data {int* enabled; } ;
struct irq_data {size_t hwirq; } ;


 struct lp8788_irq_data* FUNC_0 (struct irq_data*) ;

__attribute__((used)) static void FUNC_1(struct irq_data *VAR_0)
{
 struct lp8788_irq_data *VAR_1 = FUNC_0(VAR_0);

 VAR_1->enabled[VAR_0->hwirq] = 1;
}
