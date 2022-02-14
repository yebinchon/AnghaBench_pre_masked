
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ocp_en; int sd_800mA_ocp_thd; } ;
struct TYPE_3__ {int ocp_glitch; int interrupt_en; } ;
struct rtsx_pcr {TYPE_2__ option; TYPE_1__ hw_param; int reg_pm_ctrl3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rtsx_pcr*) ;

void FUNC_1(struct rtsx_pcr *VAR_4)
{
 FUNC_0(VAR_4);

 VAR_4->reg_pm_ctrl3 = VAR_1;

 VAR_4->option.ocp_en = 1;
 if (VAR_4->option.ocp_en)
  VAR_4->hw_param.interrupt_en |= VAR_3;
 VAR_4->hw_param.ocp_glitch = VAR_2;
 VAR_4->option.sd_800mA_ocp_thd = VAR_0;

}
