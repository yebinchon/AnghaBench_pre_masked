
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(enum hwmon_sensor_types VAR_1,
          u32 VAR_2, int VAR_3)
{
 switch (VAR_1) {
 case 129:
  return FUNC_1(VAR_2);
 case 130:
  return FUNC_0(VAR_2);
 case 128:
  return FUNC_2(VAR_2, VAR_3);
 default:
  return -VAR_0;
 }
}
