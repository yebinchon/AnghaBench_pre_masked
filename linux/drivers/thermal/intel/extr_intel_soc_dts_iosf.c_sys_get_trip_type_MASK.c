
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct intel_soc_dts_sensor_entry* devdata; } ;
struct intel_soc_dts_sensor_entry {int* trip_types; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;



__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_0,
        int VAR_1, enum thermal_trip_type *VAR_2)
{
 struct intel_soc_dts_sensor_entry *VAR_3;

 VAR_3 = VAR_0->devdata;

 *VAR_2 = VAR_3->trip_types[VAR_1];

 return 0;
}
