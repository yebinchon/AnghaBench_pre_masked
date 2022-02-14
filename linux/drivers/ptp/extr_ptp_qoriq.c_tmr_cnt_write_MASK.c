
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ptp_qoriq_registers {TYPE_1__* ctrl_regs; } ;
struct ptp_qoriq {int (* write ) (int *,int) ;struct ptp_qoriq_registers regs; } ;
struct TYPE_2__ {int tmr_cnt_h; int tmr_cnt_l; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(struct ptp_qoriq *VAR_0, u64 VAR_1)
{
 struct ptp_qoriq_registers *VAR_2 = &VAR_0->regs;
 u32 VAR_3 = VAR_1 >> 32;
 u32 VAR_4 = VAR_1 & 0xffffffff;

 VAR_0->write(&VAR_2->ctrl_regs->tmr_cnt_l, VAR_4);
 VAR_0->write(&VAR_2->ctrl_regs->tmr_cnt_h, VAR_3);
}
