
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptp_qoriq_registers {TYPE_1__* fiper_regs; } ;
struct ptp_qoriq {int tmr_fiper2; int (* write ) (int *,int ) ;int tmr_fiper1; struct ptp_qoriq_registers regs; } ;
struct TYPE_2__ {int tmr_fiper2; int tmr_fiper1; } ;


 int FUNC_0 (struct ptp_qoriq*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(struct ptp_qoriq *VAR_0)
{
 struct ptp_qoriq_registers *VAR_1 = &VAR_0->regs;

 FUNC_0(VAR_0);
 VAR_0->write(&VAR_1->fiper_regs->tmr_fiper1, VAR_0->tmr_fiper1);
 VAR_0->write(&VAR_1->fiper_regs->tmr_fiper2, VAR_0->tmr_fiper2);
}
