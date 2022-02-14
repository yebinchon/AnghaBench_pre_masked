
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {scalar_t__ temperature; scalar_t__ last_temperature; TYPE_1__* ops; scalar_t__ emul_temperature; } ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;
struct TYPE_2__ {scalar_t__ (* get_trend ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct thermal_zone_device*,int,int*) ;

int FUNC_1(struct thermal_zone_device *VAR_3, int VAR_4)
{
 enum thermal_trend VAR_5;

 if (VAR_3->emul_temperature || !VAR_3->ops->get_trend ||
     VAR_3->ops->get_trend(VAR_3, VAR_4, &VAR_5)) {
  if (VAR_3->temperature > VAR_3->last_temperature)
   VAR_5 = VAR_1;
  else if (VAR_3->temperature < VAR_3->last_temperature)
   VAR_5 = VAR_0;
  else
   VAR_5 = VAR_2;
 }

 return VAR_5;
}
