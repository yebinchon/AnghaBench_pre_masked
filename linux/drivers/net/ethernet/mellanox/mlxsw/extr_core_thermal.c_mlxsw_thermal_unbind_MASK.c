
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct mlxsw_thermal* devdata; } ;
struct thermal_cooling_device {int dummy; } ;
struct mlxsw_thermal {TYPE_1__* bus_info; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*) ;
 scalar_t__ FUNC_1 (struct mlxsw_thermal*,struct thermal_cooling_device*) ;
 int FUNC_2 (struct thermal_zone_device*,int,struct thermal_cooling_device*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_1,
    struct thermal_cooling_device *VAR_2)
{
 struct mlxsw_thermal *VAR_3 = VAR_1->devdata;
 struct device *VAR_4 = VAR_3->bus_info->dev;
 int VAR_5;
 int VAR_6;


 if (FUNC_1(VAR_3, VAR_2) < 0)
  return 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_6 = FUNC_2(VAR_1, VAR_5, VAR_2);
  if (VAR_6 < 0) {
   FUNC_0(VAR_4, "Failed to unbind cooling device\n");
   return VAR_6;
  }
 }
 return 0;
}
