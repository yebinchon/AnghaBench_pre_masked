
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pwm_omap_dmtimer_chip {int chip; int mutex; int dm_timer; TYPE_2__* pdata; TYPE_1__* dm_timer_pdev; } ;
struct platform_device {int dummy; } ;
struct TYPE_4__ {int (* free ) (int ) ;int (* stop ) (int ) ;} ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *) ;
 struct pwm_omap_dmtimer_chip* FUNC_1 (struct platform_device*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct pwm_omap_dmtimer_chip *VAR_1 = FUNC_1(VAR_0);

 if (FUNC_2(&VAR_1->dm_timer_pdev->dev))
  VAR_1->pdata->stop(VAR_1->dm_timer);

 VAR_1->pdata->free(VAR_1->dm_timer);

 FUNC_0(&VAR_1->mutex);

 return FUNC_3(&VAR_1->chip);
}
