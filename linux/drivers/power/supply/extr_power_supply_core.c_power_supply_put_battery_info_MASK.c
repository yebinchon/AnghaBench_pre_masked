
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_battery_info {scalar_t__* ocv_table; } ;
struct power_supply {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__) ;

void FUNC_1(struct power_supply *VAR_1,
       struct power_supply_battery_info *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->ocv_table[VAR_3])
   FUNC_0(&VAR_1->dev, VAR_2->ocv_table[VAR_3]);
 }
}
