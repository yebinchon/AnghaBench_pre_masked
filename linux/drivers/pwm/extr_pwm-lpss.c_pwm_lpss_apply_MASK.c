
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pwm_state {int period; int duty_cycle; scalar_t__ enabled; } ;
struct pwm_lpss_chip {TYPE_1__* info; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dev; } ;
struct TYPE_2__ {int bypass; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pwm_device*) ;
 int FUNC_3 (struct pwm_device*,int) ;
 int FUNC_4 (struct pwm_device*) ;
 int FUNC_5 (struct pwm_lpss_chip*,struct pwm_device*,int ,int ) ;
 int FUNC_6 (struct pwm_device*) ;
 int FUNC_7 (struct pwm_device*) ;
 int FUNC_8 (struct pwm_device*,int) ;
 struct pwm_lpss_chip* FUNC_9 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_10(struct pwm_chip *VAR_1, struct pwm_device *VAR_2,
     const struct pwm_state *VAR_3)
{
 struct pwm_lpss_chip *VAR_4 = FUNC_9(VAR_1);
 int VAR_5;

 if (VAR_3->enabled) {
  if (!FUNC_2(VAR_2)) {
   FUNC_0(VAR_1->dev);
   VAR_5 = FUNC_4(VAR_2);
   if (VAR_5) {
    FUNC_1(VAR_1->dev);
    return VAR_5;
   }
   FUNC_5(VAR_4, VAR_2, VAR_3->duty_cycle, VAR_3->period);
   FUNC_3(VAR_2, VAR_4->info->bypass == 0);
   VAR_5 = FUNC_7(VAR_2);
   if (VAR_5) {
    FUNC_1(VAR_1->dev);
    return VAR_5;
   }
   FUNC_3(VAR_2, VAR_4->info->bypass == 1);
  } else {
   VAR_5 = FUNC_4(VAR_2);
   if (VAR_5)
    return VAR_5;
   FUNC_5(VAR_4, VAR_2, VAR_3->duty_cycle, VAR_3->period);
   return FUNC_7(VAR_2);
  }
 } else if (FUNC_2(VAR_2)) {
  FUNC_8(VAR_2, FUNC_6(VAR_2) & ~VAR_0);
  FUNC_1(VAR_1->dev);
 }

 return 0;
}
