
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {struct int34x_thermal_zone* devdata; } ;
struct int34x_thermal_zone {int aux_trip_nr; int crt_trip_id; int hot_trip_id; int psv_trip_id; TYPE_2__* act_trips; TYPE_1__* override_ops; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_4__ {int id; scalar_t__ valid; } ;
struct TYPE_3__ {int (* get_trip_type ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct thermal_zone_device*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_6,
      int VAR_7,
      enum thermal_trip_type *VAR_8)
{
 struct int34x_thermal_zone *VAR_9 = VAR_6->devdata;
 int VAR_10;

 if (VAR_9->override_ops && VAR_9->override_ops->get_trip_type)
  return VAR_9->override_ops->get_trip_type(VAR_6, VAR_7, VAR_8);

 if (VAR_7 < VAR_9->aux_trip_nr)
  *VAR_8 = VAR_5;
 else if (VAR_7 == VAR_9->crt_trip_id)
  *VAR_8 = VAR_3;
 else if (VAR_7 == VAR_9->hot_trip_id)
  *VAR_8 = VAR_4;
 else if (VAR_7 == VAR_9->psv_trip_id)
  *VAR_8 = VAR_5;
 else {
  for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
   if (VAR_9->act_trips[VAR_10].valid &&
       VAR_9->act_trips[VAR_10].id == VAR_7) {
    *VAR_8 = VAR_2;
    break;
   }
  }
  if (VAR_10 == VAR_1)
   return -VAR_0;
 }

 return 0;
}
