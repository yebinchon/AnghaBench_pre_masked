
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* tzp; } ;
struct TYPE_2__ {int offset; } ;



int FUNC_0(struct thermal_zone_device *VAR_0)
{
 if (VAR_0 && VAR_0->tzp)
  return VAR_0->tzp->offset;
 return 0;
}
