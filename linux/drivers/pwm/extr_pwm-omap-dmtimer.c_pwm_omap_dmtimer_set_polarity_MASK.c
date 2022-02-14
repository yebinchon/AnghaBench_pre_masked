
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_omap_dmtimer_chip {int mutex; int dm_timer; TYPE_1__* pdata; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;
struct TYPE_2__ {int (* set_pwm ) (int ,int,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int,int,int ) ;
 struct pwm_omap_dmtimer_chip* FUNC_3 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_2,
      struct pwm_device *VAR_3,
      enum pwm_polarity VAR_4)
{
 struct pwm_omap_dmtimer_chip *VAR_5 = FUNC_3(VAR_2);





 FUNC_0(&VAR_5->mutex);
 VAR_5->pdata->set_pwm(VAR_5->dm_timer,
         VAR_4 == VAR_1,
         1,
         VAR_0);
 FUNC_1(&VAR_5->mutex);

 return 0;
}
