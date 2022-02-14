
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int temperature; int passive; int device; TYPE_1__* ops; struct power_allocator_params* governor_data; } ;
struct power_allocator_params {int trip_max_desired_temperature; int trip_switch_on; } ;
struct TYPE_2__ {int (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;} ;


 int FUNC_0 (struct thermal_zone_device*,int) ;
 int FUNC_1 (struct thermal_zone_device*) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct power_allocator_params*) ;
 int FUNC_4 (struct thermal_zone_device*,int,int*) ;
 int FUNC_5 (struct thermal_zone_device*,int,int*) ;

__attribute__((used)) static int FUNC_6(struct thermal_zone_device *VAR_0, int VAR_1)
{
 int VAR_2;
 int VAR_3, VAR_4;
 struct power_allocator_params *VAR_5 = VAR_0->governor_data;





 if (VAR_1 != VAR_5->trip_max_desired_temperature)
  return 0;

 VAR_2 = VAR_0->ops->get_trip_temp(VAR_0, VAR_5->trip_switch_on,
         &VAR_3);
 if (!VAR_2 && (VAR_0->temperature < VAR_3)) {
  VAR_0->passive = 0;
  FUNC_3(VAR_5);
  FUNC_1(VAR_0);
  return 0;
 }

 VAR_0->passive = 1;

 VAR_2 = VAR_0->ops->get_trip_temp(VAR_0, VAR_5->trip_max_desired_temperature,
    &VAR_4);
 if (VAR_2) {
  FUNC_2(&VAR_0->device,
    "Failed to get the maximum desired temperature: %d\n",
    VAR_2);
  return VAR_2;
 }

 return FUNC_0(VAR_0, VAR_4);
}
