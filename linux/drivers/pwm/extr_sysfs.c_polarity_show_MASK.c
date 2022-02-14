
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int polarity; } ;
struct pwm_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;




 struct pwm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pwm_device const*,struct pwm_state*) ;
 int FUNC_2 (char*,char*,char const*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 const struct pwm_device *VAR_3 = FUNC_0(VAR_0);
 const char *VAR_4 = "unknown";
 struct pwm_state VAR_5;

 FUNC_1(VAR_3, &VAR_5);

 switch (VAR_5.polarity) {
 case 128:
  VAR_4 = "normal";
  break;

 case 129:
  VAR_4 = "inversed";
  break;
 }

 return FUNC_2(VAR_2, "%s\n", VAR_4);
}
