
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ocp_en; int sd_800mA_ocp_thd; int ltr_l1off_snooze_sspwrgate; int ltr_l1off_sspwrgate; } ;
struct TYPE_3__ {int ocp_glitch; int interrupt_en; } ;
struct rtsx_pcr {TYPE_2__ option; TYPE_1__ hw_param; int * ops; int reg_pm_ctrl3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct rtsx_pcr*) ;
 int VAR_6 ;

void FUNC_1(struct rtsx_pcr *VAR_7)
{
 FUNC_0(VAR_7);
 VAR_7->option.ltr_l1off_sspwrgate = VAR_1;
 VAR_7->option.ltr_l1off_snooze_sspwrgate =
  VAR_0;

 VAR_7->reg_pm_ctrl3 = VAR_3;
 VAR_7->ops = &VAR_6;

 VAR_7->option.ocp_en = 1;
 if (VAR_7->option.ocp_en)
  VAR_7->hw_param.interrupt_en |= VAR_5;
 VAR_7->hw_param.ocp_glitch = VAR_4;
 VAR_7->option.sd_800mA_ocp_thd = VAR_2;

}
