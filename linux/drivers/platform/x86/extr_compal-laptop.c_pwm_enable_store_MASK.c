
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct compal_data {long pwm_enable; int curr_pwm; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct compal_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char const*,int,long*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct compal_data *VAR_5 = FUNC_0(VAR_1);
 long VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_3, 10, &VAR_6);
 if (VAR_7)
  return VAR_7;
 if (VAR_6 < 0)
  return -VAR_0;

 VAR_5->pwm_enable = VAR_6;

 switch (VAR_6) {
 case 0:
  FUNC_3();
  FUNC_4(255);
  break;
 case 1:
  FUNC_3();
  FUNC_4(VAR_5->curr_pwm);
  break;
 default:
  FUNC_2();
  break;
 }

 return VAR_4;
}
