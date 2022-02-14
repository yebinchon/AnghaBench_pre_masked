
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int devices_in_package; } ;
struct phy_device {TYPE_2__ c45_ids; scalar_t__ is_c45; TYPE_1__* drv; } ;
struct TYPE_3__ {int (* config_aneg ) (struct phy_device*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct phy_device*) ;
 int FUNC_3 (struct phy_device*) ;

__attribute__((used)) static int FUNC_4(struct phy_device *VAR_0)
{
 if (VAR_0->drv->config_aneg)
  return VAR_0->drv->config_aneg(VAR_0);




 if (VAR_0->is_c45 && !(VAR_0->c45_ids.devices_in_package & FUNC_0(0)))
  return FUNC_1(VAR_0);

 return FUNC_2(VAR_0);
}
