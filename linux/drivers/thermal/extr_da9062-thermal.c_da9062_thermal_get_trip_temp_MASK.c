
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct da9062_thermal* devdata; } ;
struct da9062_thermal {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_1,
     int VAR_2,
     int *VAR_3)
{
 struct da9062_thermal *VAR_4 = VAR_1->devdata;

 switch (VAR_2) {
 case 0:
  *VAR_3 = FUNC_0(125);
  break;
 default:
  FUNC_1(VAR_4->dev,
   "Driver does not support more than 1 trip-wire\n");
  return -VAR_0;
 }

 return 0;
}
