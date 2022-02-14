
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct pch_thermal_device* devdata; } ;
struct pch_thermal_device {int crt_trip_id; int crt_temp; int hot_trip_id; int hot_temp; int psv_trip_id; int psv_temp; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_1, int VAR_2, int *VAR_3)
{
 struct pch_thermal_device *VAR_4 = VAR_1->devdata;

 if (VAR_4->crt_trip_id == VAR_2)
  *VAR_3 = VAR_4->crt_temp;
 else if (VAR_4->hot_trip_id == VAR_2)
  *VAR_3 = VAR_4->hot_temp;
 else if (VAR_4->psv_trip_id == VAR_2)
  *VAR_3 = VAR_4->psv_temp;
 else
  return -VAR_0;

 return 0;
}
