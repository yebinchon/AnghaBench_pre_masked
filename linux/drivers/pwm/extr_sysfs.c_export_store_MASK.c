
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_device {int dummy; } ;
struct pwm_chip {unsigned int npwm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pwm_device*) ;
 int FUNC_1 (struct pwm_device*) ;
 struct pwm_chip* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int ,unsigned int*) ;
 int FUNC_4 (struct device*,struct pwm_device*) ;
 int FUNC_5 (struct pwm_device*) ;
 struct pwm_device* FUNC_6 (struct pwm_chip*,unsigned int,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3, size_t VAR_4)
{
 struct pwm_chip *VAR_5 = FUNC_2(VAR_1);
 struct pwm_device *VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 VAR_8 = FUNC_3(VAR_3, 0, &VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_7 >= VAR_5->npwm)
  return -VAR_0;

 VAR_6 = FUNC_6(VAR_5, VAR_7, "sysfs");
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_8 = FUNC_4(VAR_1, VAR_6);
 if (VAR_8 < 0)
  FUNC_5(VAR_6);

 return VAR_8 ? : VAR_4;
}
