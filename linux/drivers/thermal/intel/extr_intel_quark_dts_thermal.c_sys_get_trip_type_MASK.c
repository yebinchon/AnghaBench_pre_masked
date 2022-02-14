
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int dummy; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_2,
  int VAR_3, enum thermal_trip_type *VAR_4)
{
 if (VAR_3)
  *VAR_4 = VAR_1;
 else
  *VAR_4 = VAR_0;

 return 0;
}
