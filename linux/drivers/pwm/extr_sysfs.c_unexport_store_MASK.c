
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_chip {unsigned int npwm; int * pwms; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pwm_chip* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int ,unsigned int*) ;
 int FUNC_2 (struct device*,int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
         struct device_attribute *VAR_2,
         const char *VAR_3, size_t VAR_4)
{
 struct pwm_chip *VAR_5 = FUNC_0(VAR_1);
 unsigned int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 0, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6 >= VAR_5->npwm)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_1, &VAR_5->pwms[VAR_6]);

 return VAR_7 ? : VAR_4;
}
