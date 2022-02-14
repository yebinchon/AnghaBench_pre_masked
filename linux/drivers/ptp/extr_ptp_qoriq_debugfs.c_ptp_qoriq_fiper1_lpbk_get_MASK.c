
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ptp_qoriq_registers {TYPE_1__* ctrl_regs; } ;
struct ptp_qoriq {int (* read ) (int *) ;struct ptp_qoriq_registers regs; } ;
struct TYPE_2__ {int tmr_ctrl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(void *VAR_1, u64 *VAR_2)
{
 struct ptp_qoriq *VAR_3 = VAR_1;
 struct ptp_qoriq_registers *VAR_4 = &VAR_3->regs;
 u32 VAR_5;

 VAR_5 = VAR_3->read(&VAR_4->ctrl_regs->tmr_ctrl);
 *VAR_2 = VAR_5 & VAR_0 ? 1 : 0;

 return 0;
}
