
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_lpss_chip {scalar_t__ regs; int * saved_ctrl; TYPE_1__* info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int npwm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct pwm_lpss_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;

int FUNC_2(struct device *VAR_2)
{
 struct pwm_lpss_chip *VAR_3 = FUNC_0(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->info->npwm; VAR_4++)
  VAR_3->saved_ctrl[VAR_4] = FUNC_1(VAR_3->regs + VAR_4 * VAR_1 + VAR_0);

 return 0;
}
