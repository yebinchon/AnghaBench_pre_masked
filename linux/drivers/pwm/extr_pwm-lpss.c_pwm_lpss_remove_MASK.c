
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; int * pwms; } ;
struct pwm_lpss_chip {TYPE_2__ chip; TYPE_1__* info; } ;
struct TYPE_3__ {int npwm; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(struct pwm_lpss_chip *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->info->npwm; VAR_1++) {
  if (FUNC_1(&VAR_0->chip.pwms[VAR_1]))
   FUNC_0(VAR_0->chip.dev);
 }
 return FUNC_2(&VAR_0->chip);
}
