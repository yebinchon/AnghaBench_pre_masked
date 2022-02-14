
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int emul_temperature; int trips; int lock; TYPE_1__* ops; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_2__ {int (* get_temp ) (struct thermal_zone_device*,int*) ;int (* get_trip_type ) (struct thermal_zone_device*,int,int*) ;int (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct thermal_zone_device*,int*) ;
 int FUNC_5 (struct thermal_zone_device*,int,int*) ;
 int FUNC_6 (struct thermal_zone_device*,int,int*) ;

int FUNC_7(struct thermal_zone_device *VAR_4, int *VAR_5)
{
 int VAR_6 = -VAR_1;
 int VAR_7;
 int VAR_8 = VAR_2;
 enum thermal_trip_type VAR_9;

 if (!VAR_4 || FUNC_1(VAR_4) || !VAR_4->ops->get_temp)
  goto exit;

 FUNC_2(&VAR_4->lock);

 VAR_6 = VAR_4->ops->get_temp(VAR_4, VAR_5);

 if (FUNC_0(VAR_0) && VAR_4->emul_temperature) {
  for (VAR_7 = 0; VAR_7 < VAR_4->trips; VAR_7++) {
   VAR_6 = VAR_4->ops->get_trip_type(VAR_4, VAR_7, &VAR_9);
   if (!VAR_6 && VAR_9 == VAR_3) {
    VAR_6 = VAR_4->ops->get_trip_temp(VAR_4, VAR_7,
      &VAR_8);
    break;
   }
  }






  if (!VAR_6 && *VAR_5 < VAR_8)
   *VAR_5 = VAR_4->emul_temperature;
 }

 FUNC_3(&VAR_4->lock);
exit:
 return VAR_6;
}
