
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct st_thermal_sensor* devdata; } ;
struct st_thermal_sensor {struct device* dev; } ;
struct device {int dummy; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_2,
    int VAR_3, enum thermal_trip_type *VAR_4)
{
 struct st_thermal_sensor *VAR_5 = VAR_2->devdata;
 struct device *VAR_6 = VAR_5->dev;

 switch (VAR_3) {
 case 0:
  *VAR_4 = VAR_1;
  break;
 default:
  FUNC_0(VAR_6, "invalid trip point\n");
  return -VAR_0;
 }

 return 0;
}
