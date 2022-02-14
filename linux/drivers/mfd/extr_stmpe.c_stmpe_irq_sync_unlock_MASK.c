
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct stmpe_variant_info {int num_irqs; } ;
struct stmpe {scalar_t__* ier; scalar_t__* oldier; int irq_lock; int * regs; struct stmpe_variant_info* variant; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 struct stmpe* FUNC_1 (struct irq_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct stmpe*,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct irq_data *VAR_1)
{
 struct stmpe *VAR_2 = FUNC_1(VAR_1);
 struct stmpe_variant_info *VAR_3 = VAR_2->variant;
 int VAR_4 = FUNC_0(VAR_3->num_irqs, 8);
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  u8 VAR_6 = VAR_2->ier[VAR_5];
  u8 VAR_7 = VAR_2->oldier[VAR_5];

  if (VAR_6 == VAR_7)
   continue;

  VAR_2->oldier[VAR_5] = VAR_6;
  FUNC_3(VAR_2, VAR_2->regs[VAR_0 + VAR_5], VAR_6);
 }

 FUNC_2(&VAR_2->irq_lock);
}
