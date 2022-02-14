
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int trips; int device; TYPE_1__* ops; } ;
struct power_allocator_params {int trip_switch_on; int trip_max_desired_temperature; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_2__ {int (* get_trip_type ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct thermal_zone_device*,int,int*) ;

__attribute__((used)) static void FUNC_2(struct thermal_zone_device *VAR_3,
          struct power_allocator_params *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 bool VAR_8;

 VAR_8 = 0;
 VAR_6 = VAR_0;
 VAR_7 = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_3->trips; VAR_5++) {
  enum thermal_trip_type VAR_9;
  int VAR_10;

  VAR_10 = VAR_3->ops->get_trip_type(VAR_3, VAR_5, &VAR_9);
  if (VAR_10) {
   FUNC_0(&VAR_3->device,
     "Failed to get trip point %d type: %d\n", VAR_5,
     VAR_10);
   continue;
  }

  if (VAR_9 == VAR_2) {
   if (!VAR_8) {
    VAR_4->trip_switch_on = VAR_5;
    VAR_8 = 1;
   } else {
    VAR_7 = VAR_5;
   }
  } else if (VAR_9 == VAR_1) {
   VAR_6 = VAR_5;
  } else {
   break;
  }
 }

 if (VAR_7 != VAR_0) {
  VAR_4->trip_max_desired_temperature = VAR_7;
 } else if (VAR_8) {
  VAR_4->trip_max_desired_temperature = VAR_4->trip_switch_on;
  VAR_4->trip_switch_on = VAR_0;
 } else {
  VAR_4->trip_switch_on = VAR_0;
  VAR_4->trip_max_desired_temperature = VAR_6;
 }
}
