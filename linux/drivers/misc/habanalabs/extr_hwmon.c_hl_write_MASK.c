
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hl_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int VAR_1 ;
 struct hl_device* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct hl_device*) ;
 int FUNC_2 (struct hl_device*,int,int ,long) ;




__attribute__((used)) static int FUNC_3(struct device *VAR_2, enum hwmon_sensor_types VAR_3,
   u32 VAR_4, int VAR_5, long VAR_6)
{
 struct hl_device *VAR_7 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_7))
  return -VAR_1;

 switch (VAR_3) {
 case 130:
  switch (VAR_4) {
  case 128:
  case 129:
   break;
  default:
   return -VAR_0;
  }
  FUNC_2(VAR_7, VAR_5, VAR_4, VAR_6);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
