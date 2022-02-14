
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct power_supply_battery_ocv_table {int ocv; int capacity; } ;



int FUNC_0(struct power_supply_battery_ocv_table *VAR_0,
    int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2 > VAR_0[VAR_3].ocv)
   break;

 if (VAR_3 > 0 && VAR_3 < VAR_1) {
  VAR_5 = (VAR_0[VAR_3 - 1].capacity - VAR_0[VAR_3].capacity) *
   (VAR_2 - VAR_0[VAR_3].ocv);
  VAR_5 /= VAR_0[VAR_3 - 1].ocv - VAR_0[VAR_3].ocv;
  VAR_4 = VAR_5 + VAR_0[VAR_3].capacity;
 } else if (VAR_3 == 0) {
  VAR_4 = VAR_0[0].capacity;
 } else {
  VAR_4 = VAR_0[VAR_1 - 1].capacity;
 }

 return VAR_4;
}
