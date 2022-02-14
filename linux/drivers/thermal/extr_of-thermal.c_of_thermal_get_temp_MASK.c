
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct __thermal_zone {int sensor_data; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_temp ) (int ,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int*) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_1,
          int *VAR_2)
{
 struct __thermal_zone *VAR_3 = VAR_1->devdata;

 if (!VAR_3->ops->get_temp)
  return -VAR_0;

 return VAR_3->ops->get_temp(VAR_3->sensor_data, VAR_2);
}
