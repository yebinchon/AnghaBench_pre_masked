
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwm_state {int duty_cycle; } ;
struct pwm_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct pwm_device* FUNC_0 (struct device*) ;
 int FUNC_1 (struct pwm_device const*,struct pwm_state*) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
          struct device_attribute *VAR_1,
          char *VAR_2)
{
 const struct pwm_device *VAR_3 = FUNC_0(VAR_0);
 struct pwm_state VAR_4;

 FUNC_1(VAR_3, &VAR_4);

 return FUNC_2(VAR_2, "%u\n", VAR_4.duty_cycle);
}
