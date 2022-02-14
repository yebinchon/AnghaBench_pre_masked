
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_omap_dmtimer_chip {int mutex; int dm_timer; TYPE_1__* pdata; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
struct TYPE_2__ {int (* stop ) (int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 struct pwm_omap_dmtimer_chip* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static void FUNC_4(struct pwm_chip *VAR_0,
         struct pwm_device *VAR_1)
{
 struct pwm_omap_dmtimer_chip *VAR_2 = FUNC_3(VAR_0);

 FUNC_0(&VAR_2->mutex);
 VAR_2->pdata->stop(VAR_2->dm_timer);
 FUNC_1(&VAR_2->mutex);
}
