
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ptp_qoriq_registers {TYPE_1__* alarm_regs; } ;
struct ptp_qoriq {int (* write ) (int *,int) ;scalar_t__ tclk_period; struct ptp_qoriq_registers regs; } ;
struct TYPE_2__ {int tmr_alarm1_h; int tmr_alarm1_l; } ;


 unsigned long long FUNC_0 (int,unsigned long) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct ptp_qoriq*) ;

__attribute__((used)) static void FUNC_4(struct ptp_qoriq *VAR_0)
{
 struct ptp_qoriq_registers *VAR_1 = &VAR_0->regs;
 u64 VAR_2;
 u32 VAR_3, VAR_4;

 VAR_2 = FUNC_3(VAR_0) + 1500000000ULL;
 VAR_2 = FUNC_0(VAR_2, 1000000000UL) * 1000000000ULL;
 VAR_2 -= VAR_0->tclk_period;
 VAR_4 = VAR_2 >> 32;
 VAR_3 = VAR_2 & 0xffffffff;
 VAR_0->write(&VAR_1->alarm_regs->tmr_alarm1_l, VAR_3);
 VAR_0->write(&VAR_1->alarm_regs->tmr_alarm1_h, VAR_4);
}
