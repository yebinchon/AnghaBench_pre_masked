
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct __thermal_zone {int sensor_data; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_emul_temp ) (int ,int) ;} ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_0,
        int VAR_1)
{
 struct __thermal_zone *VAR_2 = VAR_0->devdata;

 return VAR_2->ops->set_emul_temp(VAR_2->sensor_data, VAR_1);
}
