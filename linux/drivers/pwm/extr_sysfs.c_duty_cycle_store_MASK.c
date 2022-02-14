
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {unsigned int duty_cycle; } ;
struct pwm_export {int lock; struct pwm_device* pwm; } ;
struct pwm_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct pwm_export* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pwm_device*,struct pwm_state*) ;
 int FUNC_5 (struct pwm_device*,struct pwm_state*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
    struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct pwm_export *VAR_4 = FUNC_0(VAR_0);
 struct pwm_device *VAR_5 = VAR_4->pwm;
 struct pwm_state VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_2, 0, &VAR_7);
 if (VAR_8)
  return VAR_8;

 FUNC_2(&VAR_4->lock);
 FUNC_5(VAR_5, &VAR_6);
 VAR_6.duty_cycle = VAR_7;
 VAR_8 = FUNC_4(VAR_5, &VAR_6);
 FUNC_3(&VAR_4->lock);

 return VAR_8 ? : VAR_3;
}
