
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {scalar_t__ is_c45; TYPE_1__* drv; } ;
struct TYPE_2__ {int (* aneg_done ) (struct phy_device*) ;} ;


 int FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;

int FUNC_3(struct phy_device *VAR_0)
{
 if (VAR_0->drv && VAR_0->drv->aneg_done)
  return VAR_0->drv->aneg_done(VAR_0);
 else if (VAR_0->is_c45)
  return FUNC_1(VAR_0);
 else
  return FUNC_0(VAR_0);
}
