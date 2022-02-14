
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct pch_thermal_device* devdata; } ;
struct pch_thermal_device {int crt_trip_id; int hot_trip_id; int psv_trip_id; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_4, int VAR_5,
        enum thermal_trip_type *VAR_6)
{
 struct pch_thermal_device *VAR_7 = VAR_4->devdata;

 if (VAR_7->crt_trip_id == VAR_5)
  *VAR_6 = VAR_1;
 else if (VAR_7->hot_trip_id == VAR_5)
  *VAR_6 = VAR_2;
 else if (VAR_7->psv_trip_id == VAR_5)
  *VAR_6 = VAR_3;
 else
  return -VAR_0;

 return 0;
}
