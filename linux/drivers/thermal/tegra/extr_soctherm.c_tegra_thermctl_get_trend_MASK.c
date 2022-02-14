
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int last_temperature; int temperature; TYPE_1__* ops; } ;
struct tegra_thermctl_zone {struct thermal_zone_device* tz; } ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;
struct TYPE_2__ {int (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct thermal_zone_device*,int,int*) ;

__attribute__((used)) static int FUNC_2(void *VAR_4, int VAR_5,
        enum thermal_trend *VAR_6)
{
 struct tegra_thermctl_zone *VAR_7 = VAR_4;
 struct thermal_zone_device *VAR_8 = VAR_7->tz;
 int VAR_9, VAR_10, VAR_11, VAR_12;

 if (!VAR_8)
  return -VAR_0;

 VAR_12 = VAR_8->ops->get_trip_temp(VAR_7->tz, VAR_5, &VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_10 = FUNC_0(VAR_8->temperature);
 VAR_11 = FUNC_0(VAR_8->last_temperature);

 if (VAR_10 > VAR_9) {
  if (VAR_10 >= VAR_11)
   *VAR_6 = VAR_2;
  else
   *VAR_6 = VAR_3;
 } else if (VAR_10 < VAR_9) {
  *VAR_6 = VAR_1;
 } else {
  *VAR_6 = VAR_3;
 }

 return 0;
}
