
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ptp_qoriq_registers {TYPE_1__* ctrl_regs; } ;
struct ptp_qoriq {int irq; int base; int clock; int (* write ) (int *,int ) ;struct ptp_qoriq_registers regs; } ;
struct TYPE_2__ {int tmr_ctrl; int tmr_temask; } ;


 int FUNC_0 (int ,struct ptp_qoriq*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ptp_qoriq*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;

void FUNC_6(struct ptp_qoriq *VAR_0)
{
 struct ptp_qoriq_registers *VAR_1 = &VAR_0->regs;

 VAR_0->write(&VAR_1->ctrl_regs->tmr_temask, 0);
 VAR_0->write(&VAR_1->ctrl_regs->tmr_ctrl, 0);

 FUNC_3(VAR_0);
 FUNC_2(VAR_0->clock);
 FUNC_1(VAR_0->base);
 FUNC_0(VAR_0->irq, VAR_0);
}
