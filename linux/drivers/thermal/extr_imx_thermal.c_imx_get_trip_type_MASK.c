
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_3, int VAR_4,
        enum thermal_trip_type *VAR_5)
{
 *VAR_5 = (VAR_4 == VAR_0) ? VAR_2 :
          VAR_1;
 return 0;
}
