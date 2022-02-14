
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct __thermal_zone {int sensor_data; TYPE_1__* ops; } ;
typedef enum thermal_trend { ____Placeholder_thermal_trend } thermal_trend ;
struct TYPE_2__ {int (* get_trend ) (int ,int,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_1, int VAR_2,
    enum thermal_trend *VAR_3)
{
 struct __thermal_zone *VAR_4 = VAR_1->devdata;

 if (!VAR_4->ops->get_trend)
  return -VAR_0;

 return VAR_4->ops->get_trend(VAR_4->sensor_data, VAR_2, VAR_3);
}
