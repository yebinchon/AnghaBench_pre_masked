
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {struct pch_thermal_device* devdata; } ;
struct pch_thermal_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_temp ) (struct pch_thermal_device*,int*) ;} ;


 int FUNC_0 (struct pch_thermal_device*,int*) ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_0, int *VAR_1)
{
 struct pch_thermal_device *VAR_2 = VAR_0->devdata;

 return VAR_2->ops->get_temp(VAR_2, VAR_1);
}
