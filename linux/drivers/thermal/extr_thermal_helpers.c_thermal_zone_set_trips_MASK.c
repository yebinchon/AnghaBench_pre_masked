
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int trips; int temperature; int prev_low_trip; int prev_high_trip; int lock; int device; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_trips ) (struct thermal_zone_device*,int,int) ;int (* get_trip_hyst ) (struct thermal_zone_device*,int,int*) ;int (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct thermal_zone_device*,int,int*) ;
 int FUNC_5 (struct thermal_zone_device*,int,int*) ;
 int FUNC_6 (struct thermal_zone_device*,int,int) ;

void FUNC_7(struct thermal_zone_device *VAR_1)
{
 int VAR_2 = -VAR_0;
 int VAR_3 = VAR_0;
 int VAR_4, VAR_5;
 int VAR_6, VAR_7;

 FUNC_2(&VAR_1->lock);

 if (!VAR_1->ops->set_trips || !VAR_1->ops->get_trip_hyst)
  goto exit;

 for (VAR_6 = 0; VAR_6 < VAR_1->trips; VAR_6++) {
  int VAR_8;

  VAR_1->ops->get_trip_temp(VAR_1, VAR_6, &VAR_4);
  VAR_1->ops->get_trip_hyst(VAR_1, VAR_6, &VAR_5);

  VAR_8 = VAR_4 - VAR_5;

  if (VAR_8 < VAR_1->temperature && VAR_8 > VAR_2)
   VAR_2 = VAR_8;

  if (VAR_4 > VAR_1->temperature && VAR_4 < VAR_3)
   VAR_3 = VAR_4;
 }


 if (VAR_1->prev_low_trip == VAR_2 && VAR_1->prev_high_trip == VAR_3)
  goto exit;

 VAR_1->prev_low_trip = VAR_2;
 VAR_1->prev_high_trip = VAR_3;

 FUNC_0(&VAR_1->device,
  "new temperature boundaries: %d < x < %d\n", VAR_2, VAR_3);





 VAR_7 = VAR_1->ops->set_trips(VAR_1, VAR_2, VAR_3);
 if (VAR_7)
  FUNC_1(&VAR_1->device, "Failed to set trips: %d\n", VAR_7);

exit:
 FUNC_3(&VAR_1->lock);
}
