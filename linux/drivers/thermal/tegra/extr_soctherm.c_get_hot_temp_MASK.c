
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_2__ {int (* get_trip_type ) (struct thermal_zone_device*,int,int*) ;int (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thermal_zone_device*) ;
 int FUNC_1 (struct thermal_zone_device*,int,int*) ;
 int FUNC_2 (struct thermal_zone_device*,int,int*) ;

__attribute__((used)) static int FUNC_3(struct thermal_zone_device *VAR_2, int *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 enum thermal_trip_type VAR_8;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 <= 0)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  VAR_7 = VAR_2->ops->get_trip_type(VAR_2, VAR_6, &VAR_8);
  if (VAR_7)
   return -VAR_0;
  if (VAR_8 == VAR_1) {
   VAR_7 = VAR_2->ops->get_trip_temp(VAR_2, VAR_6, VAR_4);
   if (!VAR_7)
    *VAR_3 = VAR_6;

   return VAR_7;
  }
 }

 return -VAR_0;
}
