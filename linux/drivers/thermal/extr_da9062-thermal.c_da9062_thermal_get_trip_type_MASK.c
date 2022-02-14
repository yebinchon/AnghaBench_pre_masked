
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct da9062_thermal* devdata; } ;
struct da9062_thermal {int dev; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_2,
     int VAR_3,
     enum thermal_trip_type *VAR_4)
{
 struct da9062_thermal *VAR_5 = VAR_2->devdata;

 switch (VAR_3) {
 case 0:
  *VAR_4 = VAR_1;
  break;
 default:
  FUNC_0(VAR_5->dev,
   "Driver does not support more than 1 trip-wire\n");
  return -VAR_0;
 }

 return 0;
}
