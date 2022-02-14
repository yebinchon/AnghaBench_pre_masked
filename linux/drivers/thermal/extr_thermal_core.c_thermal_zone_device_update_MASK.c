
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int notify_event; int trips; TYPE_1__* ops; } ;
typedef enum thermal_notify_event { ____Placeholder_thermal_notify_event } thermal_notify_event ;
struct TYPE_2__ {int get_temp; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct thermal_zone_device*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct thermal_zone_device*) ;
 int FUNC_3 (struct thermal_zone_device*) ;

void FUNC_4(struct thermal_zone_device *VAR_1,
    enum thermal_notify_event VAR_2)
{
 int VAR_3;

 if (FUNC_0(&VAR_0))
  return;

 if (!VAR_1->ops->get_temp)
  return;

 FUNC_3(VAR_1);

 FUNC_2(VAR_1);

 VAR_1->notify_event = VAR_2;

 for (VAR_3 = 0; VAR_3 < VAR_1->trips; VAR_3++)
  FUNC_1(VAR_1, VAR_3);
}
