
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct st_thermal_sensor* devdata; } ;
struct st_thermal_sensor {TYPE_1__* cdata; struct device* dev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int crit_temp; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_1,
        int VAR_2, int *VAR_3)
{
 struct st_thermal_sensor *VAR_4 = VAR_1->devdata;
 struct device *VAR_5 = VAR_4->dev;

 switch (VAR_2) {
 case 0:
  *VAR_3 = FUNC_1(VAR_4->cdata->crit_temp);
  break;
 default:
  FUNC_0(VAR_5, "Invalid trip point\n");
  return -VAR_0;
 }

 return 0;
}
