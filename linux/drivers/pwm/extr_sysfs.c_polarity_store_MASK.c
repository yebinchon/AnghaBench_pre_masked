
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int polarity; } ;
struct pwm_export {int lock; struct pwm_device* pwm; } ;
struct pwm_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
typedef enum pwm_polarity { ____Placeholder_pwm_polarity } pwm_polarity ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pwm_export* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pwm_device*,struct pwm_state*) ;
 int FUNC_4 (struct pwm_device*,struct pwm_state*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
         struct device_attribute *VAR_4,
         const char *VAR_5, size_t VAR_6)
{
 struct pwm_export *VAR_7 = FUNC_0(VAR_3);
 struct pwm_device *VAR_8 = VAR_7->pwm;
 enum pwm_polarity VAR_9;
 struct pwm_state VAR_10;
 int VAR_11;

 if (FUNC_5(VAR_5, "normal"))
  VAR_9 = VAR_2;
 else if (FUNC_5(VAR_5, "inversed"))
  VAR_9 = VAR_1;
 else
  return -VAR_0;

 FUNC_1(&VAR_7->lock);
 FUNC_4(VAR_8, &VAR_10);
 VAR_10.polarity = VAR_9;
 VAR_11 = FUNC_3(VAR_8, &VAR_10);
 FUNC_2(&VAR_7->lock);

 return VAR_11 ? : VAR_6;
}
