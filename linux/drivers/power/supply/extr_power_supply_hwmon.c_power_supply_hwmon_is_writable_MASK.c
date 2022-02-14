
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static bool FUNC_0(enum hwmon_sensor_types VAR_7,
        u32 VAR_8)
{
 switch (VAR_7) {
 case 129:
  return VAR_8 == VAR_2 ||
         VAR_8 == VAR_1;
 case 130:
  return VAR_8 == VAR_0;
 case 128:
  return VAR_8 == VAR_3 ||
         VAR_8 == VAR_5 ||
         VAR_8 == VAR_6 ||
         VAR_8 == VAR_4;
 default:
  return 0;
 }
}
