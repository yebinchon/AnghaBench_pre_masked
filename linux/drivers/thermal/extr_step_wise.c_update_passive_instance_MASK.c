
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int passive; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct thermal_zone_device *VAR_2,
    enum thermal_trip_type VAR_3, int VAR_4)
{




 if (VAR_3 == VAR_1 || VAR_3 == VAR_0)
  VAR_2->passive += VAR_4;
}
