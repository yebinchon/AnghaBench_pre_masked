
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; } ;
struct thermal_cooling_device {int type; } ;
struct tegra_tsensor_group {int id; } ;
struct tegra_thermctl_zone {struct device* dev; struct tegra_tsensor_group* sg; struct tegra_soctherm* ts; struct thermal_zone_device* tz; } ;
struct tegra_soctherm {TYPE_2__* throt_cfgs; } ;
struct soctherm_throt_cfg {int dummy; } ;
struct device {int dummy; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_4__ {struct thermal_cooling_device* cdev; int init; } ;
struct TYPE_3__ {int (* get_trip_type ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct soctherm_throt_cfg* FUNC_0 (struct tegra_soctherm*,int ) ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*,struct thermal_cooling_device*,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct thermal_zone_device*,int,int*) ;
 int FUNC_3 (struct device*,struct tegra_tsensor_group const*,int) ;
 int FUNC_4 (struct device*,struct tegra_tsensor_group const*,struct soctherm_throt_cfg*,int) ;
 scalar_t__ FUNC_5 (struct tegra_soctherm*,int ) ;

__attribute__((used)) static int FUNC_6(void *VAR_5, int VAR_6, int VAR_7)
{
 struct tegra_thermctl_zone *VAR_8 = VAR_5;
 struct thermal_zone_device *VAR_9 = VAR_8->tz;
 struct tegra_soctherm *VAR_10 = VAR_8->ts;
 const struct tegra_tsensor_group *VAR_11 = VAR_8->sg;
 struct device *VAR_12 = VAR_8->dev;
 enum thermal_trip_type VAR_13;
 int VAR_14;

 if (!VAR_9)
  return -VAR_0;

 VAR_14 = VAR_9->ops->get_trip_type(VAR_9, VAR_6, &VAR_13);
 if (VAR_14)
  return VAR_14;

 if (VAR_13 == VAR_1) {





  if (VAR_4 == FUNC_5(VAR_10, VAR_11->id))
   return FUNC_3(VAR_12, VAR_11, VAR_7);
  else
   return 0;

 } else if (VAR_13 == VAR_2) {
  int VAR_15;

  for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++) {
   struct thermal_cooling_device *VAR_16;
   struct soctherm_throt_cfg *VAR_17;

   if (!VAR_10->throt_cfgs[VAR_15].init)
    continue;

   VAR_16 = VAR_10->throt_cfgs[VAR_15].cdev;
   if (FUNC_1(VAR_9, VAR_16, VAR_6))
    VAR_17 = FUNC_0(VAR_10, VAR_16->type);
   else
    continue;

   return FUNC_4(VAR_12, VAR_11, VAR_17, VAR_7);
  }
 }

 return 0;
}
