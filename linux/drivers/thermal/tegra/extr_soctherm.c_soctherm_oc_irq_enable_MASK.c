
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soctherm_oc_irq_chip_data {int irq_enable; } ;
struct irq_data {int hwirq; } ;


 int FUNC_0 (int ) ;
 struct soctherm_oc_irq_chip_data* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct soctherm_oc_irq_chip_data *VAR_1 = FUNC_1(VAR_0);

 VAR_1->irq_enable |= FUNC_0(VAR_0->hwirq);
}
