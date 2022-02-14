
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {int lock; TYPE_1__* ops; struct __thermal_zone* devdata; } ;
struct device {int dummy; } ;
struct __thermal_zone {int * sensor_data; int * ops; } ;
struct TYPE_2__ {int * set_emul_temp; int * get_trend; int * get_temp; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct device *VAR_0,
           struct thermal_zone_device *VAR_1)
{
 struct __thermal_zone *VAR_2;

 if (!VAR_0 || !VAR_1 || !VAR_1->devdata)
  return;

 VAR_2 = VAR_1->devdata;


 if (!VAR_2)
  return;

 FUNC_0(&VAR_1->lock);
 VAR_1->ops->get_temp = ((void*)0);
 VAR_1->ops->get_trend = ((void*)0);
 VAR_1->ops->set_emul_temp = ((void*)0);

 VAR_2->ops = ((void*)0);
 VAR_2->sensor_data = ((void*)0);
 FUNC_1(&VAR_1->lock);
}
