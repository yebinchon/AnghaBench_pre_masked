
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_chip {int dummy; } ;
struct platform_device {int dummy; } ;
struct cros_ec_pwm_device {struct pwm_chip chip; } ;


 struct cros_ec_pwm_device* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct pwm_chip*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct cros_ec_pwm_device *VAR_1 = FUNC_0(VAR_0);
 struct pwm_chip *VAR_2 = &VAR_1->chip;

 return FUNC_1(VAR_2);
}
