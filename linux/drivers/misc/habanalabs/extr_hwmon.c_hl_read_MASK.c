
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
 long FUNC_2 (struct hl_device*,int,int ) ;
 long FUNC_3 (struct hl_device*,int,int ) ;
 long FUNC_4 (struct hl_device*,int,int ) ;
 long FUNC_5 (struct hl_device*,int,int ) ;
 long FUNC_6 (struct hl_device*,int,int ) ;
__attribute__((used)) static int FUNC_7(struct device *VAR_2, enum hwmon_sensor_types VAR_3,
   u32 VAR_4, int VAR_5, long *VAR_6)
{
 struct hl_device *VAR_7 = FUNC_0(VAR_2);

 if (FUNC_1(VAR_7))
  return -VAR_1;

 switch (VAR_3) {
 case 133:
  switch (VAR_4) {
  case 130:
  case 129:
  case 132:
  case 128:
  case 131:
   break;
  default:
   return -VAR_0;
  }

  *VAR_6 = FUNC_5(VAR_7, VAR_5, VAR_4);
  break;
 case 140:
  switch (VAR_4) {
  case 139:
  case 137:
  case 138:
   break;
  default:
   return -VAR_0;
  }

  *VAR_6 = FUNC_6(VAR_7, VAR_5, VAR_4);
  break;
 case 148:
  switch (VAR_4) {
  case 147:
  case 145:
  case 146:
   break;
  default:
   return -VAR_0;
  }

  *VAR_6 = FUNC_2(VAR_7, VAR_5, VAR_4);
  break;
 case 144:
  switch (VAR_4) {
  case 143:
  case 141:
  case 142:
   break;
  default:
   return -VAR_0;
  }
  *VAR_6 = FUNC_3(VAR_7, VAR_5, VAR_4);
  break;
 case 136:
  switch (VAR_4) {
  case 134:
  case 135:
   break;
  default:
   return -VAR_0;
  }
  *VAR_6 = FUNC_4(VAR_7, VAR_5, VAR_4);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
