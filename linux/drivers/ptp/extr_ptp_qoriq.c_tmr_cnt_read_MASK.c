
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ptp_qoriq_registers {TYPE_1__* ctrl_regs; } ;
struct ptp_qoriq {int (* read ) (int *) ;struct ptp_qoriq_registers regs; } ;
struct TYPE_2__ {int tmr_cnt_h; int tmr_cnt_l; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static u64 FUNC_2(struct ptp_qoriq *VAR_0)
{
 struct ptp_qoriq_registers *VAR_1 = &VAR_0->regs;
 u64 VAR_2;
 u32 VAR_3, VAR_4;

 VAR_3 = VAR_0->read(&VAR_1->ctrl_regs->tmr_cnt_l);
 VAR_4 = VAR_0->read(&VAR_1->ctrl_regs->tmr_cnt_h);
 VAR_2 = ((u64) VAR_4) << 32;
 VAR_2 |= VAR_3;
 return VAR_2;
}
