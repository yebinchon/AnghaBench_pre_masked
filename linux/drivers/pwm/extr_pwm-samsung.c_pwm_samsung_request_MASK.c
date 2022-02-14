
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output_mask; } ;
struct samsung_pwm_chip {TYPE_1__ variant; } ;
struct samsung_pwm_channel {int dummy; } ;
struct pwm_device {int hwpwm; } ;
struct pwm_chip {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int ) ;
 struct samsung_pwm_channel* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pwm_device*,struct samsung_pwm_channel*) ;
 struct samsung_pwm_chip* FUNC_4 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_5(struct pwm_chip *VAR_3, struct pwm_device *VAR_4)
{
 struct samsung_pwm_chip *VAR_5 = FUNC_4(VAR_3);
 struct samsung_pwm_channel *VAR_6;

 if (!(VAR_5->variant.output_mask & FUNC_0(VAR_4->hwpwm))) {
  FUNC_1(VAR_3->dev,
   "tried to request PWM channel %d without output\n",
   VAR_4->hwpwm);
  return -VAR_0;
 }

 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 FUNC_3(VAR_4, VAR_6);

 return 0;
}
