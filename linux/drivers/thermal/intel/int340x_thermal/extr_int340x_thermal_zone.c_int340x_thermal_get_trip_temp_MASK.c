
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thermal_zone_device {struct int34x_thermal_zone* devdata; } ;
struct int34x_thermal_zone {int aux_trip_nr; int* aux_trips; int crt_trip_id; int crt_temp; int psv_trip_id; int psv_temp; int hot_trip_id; int hot_temp; TYPE_2__* act_trips; TYPE_1__* override_ops; } ;
struct TYPE_4__ {int id; int temp; scalar_t__ valid; } ;
struct TYPE_3__ {int (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct thermal_zone_device*,int,int*) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_2,
      int VAR_3, int *VAR_4)
{
 struct int34x_thermal_zone *VAR_5 = VAR_2->devdata;
 int VAR_6;

 if (VAR_5->override_ops && VAR_5->override_ops->get_trip_temp)
  return VAR_5->override_ops->get_trip_temp(VAR_2, VAR_3, VAR_4);

 if (VAR_3 < VAR_5->aux_trip_nr)
  *VAR_4 = VAR_5->aux_trips[VAR_3];
 else if (VAR_3 == VAR_5->crt_trip_id)
  *VAR_4 = VAR_5->crt_temp;
 else if (VAR_3 == VAR_5->psv_trip_id)
  *VAR_4 = VAR_5->psv_temp;
 else if (VAR_3 == VAR_5->hot_trip_id)
  *VAR_4 = VAR_5->hot_temp;
 else {
  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (VAR_5->act_trips[VAR_6].valid &&
       VAR_5->act_trips[VAR_6].id == VAR_3) {
    *VAR_4 = VAR_5->act_trips[VAR_6].temp;
    break;
   }
  }
  if (VAR_6 == VAR_1)
   return -VAR_0;
 }

 return 0;
}
