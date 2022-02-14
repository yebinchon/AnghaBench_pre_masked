
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int temperature; int device; TYPE_1__* ops; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_2__ {int (* notify ) (struct thermal_zone_device*,int,int) ;int (* get_trip_temp ) (struct thermal_zone_device*,int,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct thermal_zone_device*,int,int*) ;
 int FUNC_5 (struct thermal_zone_device*,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct thermal_zone_device*,int,int) ;

__attribute__((used)) static void FUNC_8(struct thermal_zone_device *VAR_3,
      int VAR_4, enum thermal_trip_type VAR_5)
{
 int VAR_6;

 VAR_3->ops->get_trip_temp(VAR_3, VAR_4, &VAR_6);


 if (VAR_6 <= 0 || VAR_3->temperature < VAR_6)
  return;

 FUNC_7(VAR_3, VAR_4, VAR_5);

 if (VAR_3->ops->notify)
  VAR_3->ops->notify(VAR_3, VAR_4, VAR_5);

 if (VAR_5 == VAR_0) {
  FUNC_0(&VAR_3->device,
     "critical temperature reached (%d C), shutting down\n",
     VAR_3->temperature / 1000);
  FUNC_1(&VAR_2);
  if (!VAR_1) {




   FUNC_6();
   FUNC_3(1);
   VAR_1 = 1;
  }
  FUNC_2(&VAR_2);
 }
}
