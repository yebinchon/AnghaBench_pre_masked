
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int trips; int temperature; TYPE_1__* ops; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_2__ {int (* get_trip_type ) (struct thermal_zone_device*,int,int*) ;int (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;} ;


 int FUNC_0 (struct thermal_zone_device*,int,int*) ;
 int FUNC_1 (struct thermal_zone_device*,int,int*) ;
 int FUNC_2 (struct thermal_zone_device*,int,int) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;
 enum thermal_trip_type VAR_3;

 if (VAR_0->trips == 0 || !VAR_0->ops->get_trip_temp)
  return 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->trips; VAR_1++) {
  VAR_0->ops->get_trip_temp(VAR_0, VAR_1, &VAR_2);
  if (VAR_0->temperature < VAR_2)
   break;
 }





 if (VAR_1 > 0) {
  VAR_0->ops->get_trip_type(VAR_0, VAR_1 - 1, &VAR_3);
  FUNC_2(VAR_0, VAR_1 - 1, VAR_3);
 }

 return VAR_1;
}
