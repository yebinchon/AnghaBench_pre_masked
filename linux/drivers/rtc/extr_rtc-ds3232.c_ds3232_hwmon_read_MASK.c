
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;
 int FUNC_0 (struct device*,long*) ;


__attribute__((used)) static int FUNC_1(struct device *VAR_1,
        enum hwmon_sensor_types VAR_2,
        u32 VAR_3, int VAR_4, long *VAR_5)
{
 int VAR_6;

 switch (VAR_3) {
 case 128:
  VAR_6 = FUNC_0(VAR_1, VAR_5);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
