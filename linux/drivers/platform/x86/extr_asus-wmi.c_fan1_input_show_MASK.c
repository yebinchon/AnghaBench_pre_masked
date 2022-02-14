
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_wmi {int fan_type; int fan_pwm_mode; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct asus_wmi*,int,int*) ;
 int FUNC_1 (struct asus_wmi*,int ,int*) ;
 struct asus_wmi* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_3,
     struct device_attribute *VAR_4,
     char *VAR_5)
{
 struct asus_wmi *VAR_6 = FUNC_2(VAR_3);
 int VAR_7;
 int VAR_8;

 switch (VAR_6->fan_type) {
 case 128:
  VAR_8 = FUNC_1(VAR_6, VAR_1,
         &VAR_7);
  if (VAR_8 < 0)
   return VAR_8;

  VAR_7 &= 0xffff;
  break;

 case 129:

  if (VAR_6->fan_pwm_mode == VAR_0)
   return -VAR_2;

  VAR_8 = FUNC_0(VAR_6, 1, &VAR_7);
  if (VAR_8) {
   FUNC_3("reading fan speed failed: %d\n", VAR_8);
   return -VAR_2;
  }
  break;

 default:
  return -VAR_2;
 }

 return FUNC_4(VAR_5, "%d\n", VAR_7 < 0 ? -1 : VAR_7*100);
}
