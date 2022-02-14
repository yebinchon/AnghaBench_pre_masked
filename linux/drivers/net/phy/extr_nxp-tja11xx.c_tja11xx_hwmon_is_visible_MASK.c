
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef scalar_t__ u32 ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static umode_t FUNC_0(const void *VAR_4,
     enum hwmon_sensor_types VAR_5,
     u32 VAR_6, int VAR_7)
{
 if (VAR_5 == VAR_0 && VAR_6 == VAR_1)
  return 0444;

 if (VAR_5 == VAR_2 && VAR_6 == VAR_3)
  return 0444;

 return 0;
}
