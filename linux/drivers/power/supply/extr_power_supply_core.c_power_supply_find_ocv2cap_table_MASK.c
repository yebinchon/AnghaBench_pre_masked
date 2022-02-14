
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct power_supply_battery_ocv_table {int dummy; } ;
struct power_supply_battery_info {int* ocv_table_size; struct power_supply_battery_ocv_table** ocv_table; scalar_t__* ocv_temp; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__) ;

struct power_supply_battery_ocv_table *
FUNC_1(struct power_supply_battery_info *VAR_2,
    int VAR_3, int *VAR_4)
{
 int VAR_5 = VAR_0, VAR_6;
 u8 VAR_7, VAR_8 = 0;

 if (!VAR_2->ocv_table[0])
  return ((void*)0);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = FUNC_0(VAR_2->ocv_temp[VAR_7] - VAR_3);

  if (VAR_6 < VAR_5) {
   VAR_5 = VAR_6;
   VAR_8 = VAR_7;
  }
 }

 *VAR_4 = VAR_2->ocv_table_size[VAR_8];
 return VAR_2->ocv_table[VAR_8];
}
