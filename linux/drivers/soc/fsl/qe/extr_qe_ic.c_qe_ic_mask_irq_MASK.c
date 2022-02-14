
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qe_ic {int regs; } ;
struct irq_data {int dummy; } ;
struct TYPE_2__ {int mask; int mask_reg; } ;


 unsigned int FUNC_0 (struct irq_data*) ;
 int FUNC_1 () ;
 struct qe_ic* FUNC_2 (struct irq_data*) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_2)
{
 struct qe_ic *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4 = FUNC_0(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_5(&VAR_1, VAR_5);

 VAR_6 = FUNC_3(VAR_3->regs, VAR_0[VAR_4].mask_reg);
 FUNC_4(VAR_3->regs, VAR_0[VAR_4].mask_reg,
      VAR_6 & ~VAR_0[VAR_4].mask);
 FUNC_1();

 FUNC_6(&VAR_1, VAR_5);
}
