
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; } ;
struct thermal_cooling_device {int type; } ;
struct tegra_tsensor_group {int name; int id; } ;
struct tegra_soctherm {TYPE_2__* throt_cfgs; } ;
struct soctherm_throt_cfg {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct thermal_cooling_device* cdev; int init; } ;
struct TYPE_3__ {scalar_t__ (* get_crit_temp ) (struct thermal_zone_device*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int ) ;
 struct tegra_soctherm* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*,int ,...) ;
 struct soctherm_throt_cfg* FUNC_3 (struct tegra_soctherm*,int ) ;
 int FUNC_4 (struct thermal_zone_device*,int*,int*) ;
 scalar_t__ FUNC_5 (struct thermal_zone_device*,struct thermal_cooling_device*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (struct thermal_zone_device*,int*) ;
 int FUNC_7 (struct device*,struct tegra_tsensor_group const*,int) ;
 int FUNC_8 (struct device*,struct tegra_tsensor_group const*,struct soctherm_throt_cfg*,int) ;
 int FUNC_9 (struct tegra_soctherm*,int ) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_4,
          const struct tegra_tsensor_group *VAR_5,
          struct thermal_zone_device *VAR_6)
{
 struct tegra_soctherm *VAR_7 = FUNC_1(VAR_4);
 struct soctherm_throt_cfg *VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12;


 VAR_11 = FUNC_9(VAR_7, VAR_5->id);
 if (VAR_3 == VAR_11)
  if (VAR_6->ops->get_crit_temp(VAR_6, &VAR_11))
   VAR_11 = VAR_2;

 VAR_12 = FUNC_7(VAR_4, VAR_5, VAR_11);
 if (VAR_12) {
  FUNC_0(VAR_4, "thermtrip: %s: error during enable\n", VAR_5->name);
  return VAR_12;
 }

 FUNC_2(VAR_4, "thermtrip: will shut down when %s reaches %d mC\n",
   VAR_5->name, VAR_11);

 VAR_12 = FUNC_4(VAR_6, &VAR_10, &VAR_11);
 if (VAR_12) {
  FUNC_2(VAR_4, "throttrip: %s: missing hot temperature\n",
    VAR_5->name);
  return 0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  struct thermal_cooling_device *VAR_13;

  if (!VAR_7->throt_cfgs[VAR_9].init)
   continue;

  VAR_13 = VAR_7->throt_cfgs[VAR_9].cdev;
  if (FUNC_5(VAR_6, VAR_13, VAR_10))
   VAR_8 = FUNC_3(VAR_7, VAR_13->type);
  else
   continue;

  VAR_12 = FUNC_8(VAR_4, VAR_5, VAR_8, VAR_11);
  if (VAR_12) {
   FUNC_0(VAR_4, "throttrip: %s: error during enable\n",
    VAR_5->name);
   return VAR_12;
  }

  FUNC_2(VAR_4,
    "throttrip: will throttle when %s reaches %d mC\n",
    VAR_5->name, VAR_11);
  break;
 }

 if (VAR_9 == VAR_1)
  FUNC_2(VAR_4, "throttrip: %s: missing throttle cdev\n",
    VAR_5->name);

 return 0;
}
