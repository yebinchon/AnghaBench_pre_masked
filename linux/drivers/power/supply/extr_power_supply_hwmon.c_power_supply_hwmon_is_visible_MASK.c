
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int u32 ;
struct power_supply_hwmon {int psy; int props; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static umode_t FUNC_5(const void *VAR_0,
          enum hwmon_sensor_types VAR_1,
          u32 VAR_2, int VAR_3)
{
 const struct power_supply_hwmon *VAR_4 = VAR_0;
 int VAR_5;


 if (FUNC_0(VAR_1, VAR_2))
  return 0444;

 VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0 || !FUNC_4(VAR_5, VAR_4->props))
  return 0;

 if (FUNC_3(VAR_4->psy, VAR_5) > 0 &&
     FUNC_1(VAR_1, VAR_2))
  return 0644;

 return 0444;
}
