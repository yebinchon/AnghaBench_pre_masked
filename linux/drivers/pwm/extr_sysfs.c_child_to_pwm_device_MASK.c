
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_export {struct pwm_device* pwm; } ;
struct pwm_device {int dummy; } ;
struct device {int dummy; } ;


 struct pwm_export* FUNC_0 (struct device*) ;

__attribute__((used)) static struct pwm_device *FUNC_1(struct device *VAR_0)
{
 struct pwm_export *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->pwm;
}
