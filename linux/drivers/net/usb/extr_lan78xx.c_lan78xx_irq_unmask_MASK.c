
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_domain_data {int irqenable; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ) ;
 struct irq_domain_data* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (struct irq_data*) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_0)
{
 struct irq_domain_data *VAR_1 = FUNC_1(VAR_0);

 VAR_1->irqenable |= FUNC_0(FUNC_2(VAR_0));
}
