
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thermal_zone_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_crit_temp ) (struct thermal_zone_device*,int*) ;} ;


 int FUNC_0 (struct thermal_zone_device*,int*) ;

__attribute__((used)) static bool FUNC_1(struct thermal_zone_device *VAR_0)
{
 int VAR_1;
 return VAR_0->ops->get_crit_temp && !VAR_0->ops->get_crit_temp(VAR_0, &VAR_1);
}
