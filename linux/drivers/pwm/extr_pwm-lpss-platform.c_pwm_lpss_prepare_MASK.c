
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_lpss_chip {TYPE_1__* info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {scalar_t__ other_devices_aml_touches_pwm_regs; } ;


 struct pwm_lpss_chip* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0)
{
 struct pwm_lpss_chip *VAR_1 = FUNC_0(VAR_0);





 if (VAR_1->info->other_devices_aml_touches_pwm_regs)
  return 0;

 return 1;
}
