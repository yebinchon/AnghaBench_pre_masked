
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {long intval; } ;
typedef int u32 ;
struct power_supply_hwmon {struct power_supply* psy; } ;
struct power_supply {int dummy; } ;
struct device {int dummy; } ;
typedef enum hwmon_sensor_types { ____Placeholder_hwmon_sensor_types } hwmon_sensor_types ;


 long FUNC_0 (long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (long,int,long*) ;
 struct power_supply_hwmon* FUNC_2 (struct device*) ;



 int FUNC_3 (struct power_supply*,int,union power_supply_propval*) ;
 int FUNC_4 (int,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct device *VAR_2, enum hwmon_sensor_types VAR_3,
   u32 VAR_4, int VAR_5, long *VAR_6)
{
 struct power_supply_hwmon *VAR_7 = FUNC_2(VAR_2);
 struct power_supply *VAR_8 = VAR_7->psy;
 union power_supply_propval VAR_9;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_4(VAR_3, VAR_4, VAR_5);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = FUNC_3(VAR_8, VAR_11, &VAR_9);
 if (VAR_10)
  return VAR_10;

 switch (VAR_3) {





 case 130:
 case 129:
  VAR_9.intval = FUNC_0(VAR_9.intval, 1000);
  break;



 case 128:
  if (FUNC_1(VAR_9.intval, 100,
           &VAR_9.intval))
   return -VAR_1;
  break;
 default:
  return -VAR_0;
 }

 *VAR_6 = VAR_9.intval;

 return 0;
}
