
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ops; int hardware_power_control; } ;
struct b43_wldev {TYPE_2__ phy; } ;
struct TYPE_3__ {int (* supports_hwpctl ) (struct b43_wldev*) ;} ;


 int FUNC_0 (struct b43_wldev*) ;

bool FUNC_1(struct b43_wldev *VAR_0)
{
 if (!VAR_0->phy.hardware_power_control)
  return 0;
 if (!VAR_0->phy.ops->supports_hwpctl)
  return 0;
 return VAR_0->phy.ops->supports_hwpctl(VAR_0);
}
