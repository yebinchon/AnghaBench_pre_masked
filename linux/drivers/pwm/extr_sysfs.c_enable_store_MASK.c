
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int enabled; } ;
struct pwm_export {int lock; struct pwm_device* pwm; } ;
struct pwm_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pwm_export* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pwm_device*,struct pwm_state*) ;
 int FUNC_5 (struct pwm_device*,struct pwm_state*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct pwm_export *VAR_5 = FUNC_0(VAR_1);
 struct pwm_device *VAR_6 = VAR_5->pwm;
 struct pwm_state VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_1(VAR_3, 0, &VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_2(&VAR_5->lock);

 FUNC_5(VAR_6, &VAR_7);

 switch (VAR_8) {
 case 0:
  VAR_7.enabled = 0;
  break;
 case 1:
  VAR_7.enabled = 1;
  break;
 default:
  VAR_9 = -VAR_0;
  goto unlock;
 }

 VAR_9 = FUNC_4(VAR_6, &VAR_7);

unlock:
 FUNC_3(&VAR_5->lock);
 return VAR_9 ? : VAR_4;
}
