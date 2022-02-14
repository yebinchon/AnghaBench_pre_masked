
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_of_device_ops {scalar_t__ set_emul_temp; scalar_t__ set_trips; } ;
struct thermal_zone_device {int lock; TYPE_1__* ops; struct __thermal_zone* devdata; } ;
struct device_node {int name; } ;
struct __thermal_zone {void* sensor_data; struct thermal_zone_of_device_ops const* ops; } ;
struct TYPE_2__ {int set_emul_temp; int set_trips; int get_trend; int get_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct thermal_zone_device* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct thermal_zone_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct thermal_zone_device* FUNC_4 (int ) ;

__attribute__((used)) static struct thermal_zone_device *
FUNC_5(struct device_node *VAR_6,
      struct device_node *VAR_7, void *VAR_8,
      const struct thermal_zone_of_device_ops *VAR_9)
{
 struct thermal_zone_device *VAR_10;
 struct __thermal_zone *VAR_11;

 VAR_10 = FUNC_4(VAR_6->name);
 if (FUNC_1(VAR_10))
  return FUNC_0(-VAR_1);

 VAR_11 = VAR_10->devdata;

 if (!VAR_9)
  return FUNC_0(-VAR_0);

 FUNC_2(&VAR_10->lock);
 VAR_11->ops = VAR_9;
 VAR_11->sensor_data = VAR_8;

 VAR_10->ops->get_temp = VAR_2;
 VAR_10->ops->get_trend = VAR_3;





 if (VAR_9->set_trips)
  VAR_10->ops->set_trips = VAR_5;

 if (VAR_9->set_emul_temp)
  VAR_10->ops->set_emul_temp = VAR_4;

 FUNC_3(&VAR_10->lock);

 return VAR_10;
}
