
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sih_agent {int imr_change_pending; scalar_t__ irq_base; int imr; } ;
struct irq_data {scalar_t__ irq; } ;


 int FUNC_0 (scalar_t__) ;
 struct sih_agent* FUNC_1 (struct irq_data*) ;

__attribute__((used)) static void FUNC_2(struct irq_data *VAR_0)
{
 struct sih_agent *VAR_1 = FUNC_1(VAR_0);

 VAR_1->imr |= FUNC_0(VAR_0->irq - VAR_1->irq_base);
 VAR_1->imr_change_pending = 1;
}
