
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct int34x_thermal_zone {int aux_trip_nr; int crt_trip_id; int hot_trip_id; int psv_trip_id; TYPE_2__* act_trips; TYPE_1__* adev; int psv_temp; int hot_temp; int crt_temp; } ;
struct TYPE_4__ {int valid; int id; int temp; } ;
struct TYPE_3__ {int handle; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *) ;

int FUNC_1(struct int34x_thermal_zone *VAR_1)
{
 int VAR_2 = VAR_1->aux_trip_nr;
 int VAR_3;

 VAR_1->crt_trip_id = -1;
 if (!FUNC_0(VAR_1->adev->handle, "_CRT",
          &VAR_1->crt_temp))
  VAR_1->crt_trip_id = VAR_2++;

 VAR_1->hot_trip_id = -1;
 if (!FUNC_0(VAR_1->adev->handle, "_HOT",
          &VAR_1->hot_temp))
  VAR_1->hot_trip_id = VAR_2++;

 VAR_1->psv_trip_id = -1;
 if (!FUNC_0(VAR_1->adev->handle, "_PSV",
          &VAR_1->psv_temp))
  VAR_1->psv_trip_id = VAR_2++;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  char VAR_4[5] = { '_', 'A', 'C', '0' + VAR_3, '\0' };

  if (FUNC_0(VAR_1->adev->handle,
     VAR_4,
     &VAR_1->act_trips[VAR_3].temp))
   break;

  VAR_1->act_trips[VAR_3].id = VAR_2++;
  VAR_1->act_trips[VAR_3].valid = 1;
 }

 return VAR_2;
}
