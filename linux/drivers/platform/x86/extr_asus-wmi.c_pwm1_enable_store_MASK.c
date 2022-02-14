
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asus_wmi {scalar_t__ fan_type; int fan_pwm_mode; } ;
typedef int ssize_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct asus_wmi*) ;
 int FUNC_1 (int ,int,int*) ;
 struct asus_wmi* FUNC_2 (struct device*) ;
 int FUNC_3 (char const*,int,int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_5,
        struct device_attribute *VAR_6,
        const char *VAR_7, size_t VAR_8)
{
 struct asus_wmi *VAR_9 = FUNC_2(VAR_5);
 int VAR_10 = 0;
 int VAR_11;
 int VAR_12;
 int VAR_13;
 u32 VAR_14;

 VAR_13 = FUNC_3(VAR_7, 10, &VAR_11);
 if (VAR_13)
  return VAR_13;

 if (VAR_9->fan_type == VAR_4) {
  switch (VAR_11) {
  case 129:
   VAR_12 = 1;
   break;
  case 130:
   VAR_12 = 0;
   break;
  default:
   return -VAR_1;
  }

  VAR_13 = FUNC_1(VAR_0,
         VAR_12, &VAR_14);
  if (VAR_13)
   return VAR_13;

  if (VAR_14 != 1)
   return -VAR_2;
 } else if (VAR_9->fan_type == VAR_3) {
  switch (VAR_11) {
  case 128:
   break;

  case 130:
   VAR_10 = FUNC_0(VAR_9);
   if (VAR_10)
    return VAR_10;
   break;

  default:
   return -VAR_1;
  }
 }

 VAR_9->fan_pwm_mode = VAR_11;
 return VAR_8;
}
