
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpu_pwm_device {scalar_t__ duty; scalar_t__ period; } ;
struct pwm_device {int dummy; } ;
struct pwm_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tpu_pwm_device* FUNC_0 (struct pwm_device*) ;
 int FUNC_1 (struct tpu_pwm_device*,int ) ;
 int FUNC_2 (struct tpu_pwm_device*) ;
 int FUNC_3 (struct tpu_pwm_device*) ;

__attribute__((used)) static int FUNC_4(struct pwm_chip *VAR_2, struct pwm_device *VAR_3)
{
 struct tpu_pwm_device *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;





 if (VAR_4->duty == 0 || VAR_4->duty == VAR_4->period) {
  FUNC_1(VAR_4, VAR_4->duty ?
    VAR_0 : VAR_1);
  FUNC_3(VAR_4);
 }

 return 0;
}
