
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct thermal_zone_device {int type; int temperature; int notify_event; int lock; TYPE_1__ device; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,char**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct thermal_zone_device *VAR_2, int VAR_3)
{
 char *VAR_4[5];
 int VAR_5;

 FUNC_3(&VAR_2->lock);
 VAR_4[0] = FUNC_0(VAR_0, "NAME=%s", VAR_2->type);
 VAR_4[1] = FUNC_0(VAR_0, "TEMP=%d", VAR_2->temperature);
 VAR_4[2] = FUNC_0(VAR_0, "TRIP=%d", VAR_3);
 VAR_4[3] = FUNC_0(VAR_0, "EVENT=%d", VAR_2->notify_event);
 VAR_4[4] = ((void*)0);
 FUNC_2(&VAR_2->device.kobj, VAR_1, VAR_4);
 for (VAR_5 = 0; VAR_5 < 4; ++VAR_5)
  FUNC_1(VAR_4[VAR_5]);
 FUNC_4(&VAR_2->lock);
 return 0;
}
