
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; int trips_disabled; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_2__ {int (* get_trip_type ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thermal_zone_device*,int,int) ;
 int FUNC_1 (struct thermal_zone_device*,int) ;
 int FUNC_2 (struct thermal_zone_device*) ;
 int FUNC_3 (struct thermal_zone_device*,int,int*) ;
 scalar_t__ FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct thermal_zone_device *VAR_2, int VAR_3)
{
 enum thermal_trip_type VAR_4;


 if (FUNC_4(VAR_3, &VAR_2->trips_disabled))
  return;

 VAR_2->ops->get_trip_type(VAR_2, VAR_3, &VAR_4);

 if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
  FUNC_0(VAR_2, VAR_3, VAR_4);
 else
  FUNC_1(VAR_2, VAR_3);




 FUNC_2(VAR_2);
}
