
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;


 int VAR_1 ;




__attribute__((used)) static umode_t
FUNC_0(const void *VAR_2, enum hwmon_sensor_types VAR_3, u32 VAR_4,
       int VAR_5)
{
 if (VAR_3 == VAR_1) {
  switch (VAR_4) {
  case 129:
  case 130:
  case 128:
   return 0444;
  }
 } else if (VAR_3 == VAR_0) {
  switch (VAR_4) {
  case 132:
  case 131:
   return 0444;
  }
 }
 return 0;
}
