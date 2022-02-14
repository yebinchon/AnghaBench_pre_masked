
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0,
       enum hwmon_sensor_types VAR_1,
       u32 VAR_2, int VAR_3,
       const char **VAR_4)
{
 *VAR_4 = VAR_3 ? "temp" : "temp ambient";
 return 0;
}
