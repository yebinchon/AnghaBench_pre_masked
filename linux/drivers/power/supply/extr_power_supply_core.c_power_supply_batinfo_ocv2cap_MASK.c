
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_battery_ocv_table {int dummy; } ;
struct power_supply_battery_info {int dummy; } ;


 int VAR_0 ;
 struct power_supply_battery_ocv_table* FUNC_0 (struct power_supply_battery_info*,int,int*) ;
 int FUNC_1 (struct power_supply_battery_ocv_table*,int,int) ;

int FUNC_2(struct power_supply_battery_info *VAR_1,
     int VAR_2, int VAR_3)
{
 struct power_supply_battery_ocv_table *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_1, VAR_3, &VAR_5);
 if (!VAR_4)
  return -VAR_0;

 return FUNC_1(VAR_4, VAR_5, VAR_2);
}
