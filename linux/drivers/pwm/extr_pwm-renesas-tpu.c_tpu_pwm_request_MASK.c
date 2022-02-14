
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpu_pwm_device {scalar_t__ channel; int timer_on; scalar_t__ duty; scalar_t__ period; scalar_t__ prescaler; int polarity; struct tpu_device* tpu; } ;
struct tpu_device {int dummy; } ;
struct pwm_device {scalar_t__ hwpwm; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct tpu_pwm_device* FUNC_0 (int,int ) ;
 int FUNC_1 (struct pwm_device*,struct tpu_pwm_device*) ;
 struct tpu_device* FUNC_2 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_3(struct pwm_chip *VAR_5, struct pwm_device *VAR_6)
{
 struct tpu_device *VAR_7 = FUNC_2(VAR_5);
 struct tpu_pwm_device *VAR_8;

 if (VAR_6->hwpwm >= VAR_4)
  return -VAR_0;

 VAR_8 = FUNC_0(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;

 VAR_8->tpu = VAR_7;
 VAR_8->channel = VAR_6->hwpwm;
 VAR_8->polarity = VAR_3;
 VAR_8->prescaler = 0;
 VAR_8->period = 0;
 VAR_8->duty = 0;

 VAR_8->timer_on = 0;

 FUNC_1(VAR_6, VAR_8);

 return 0;
}
