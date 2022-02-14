
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; } ;
struct ethtool_wolinfo {int dummy; } ;
struct TYPE_2__ {int (* get_wol ) (struct phy_device*,struct ethtool_wolinfo*) ;} ;


 int FUNC_0 (struct phy_device*,struct ethtool_wolinfo*) ;

void FUNC_1(struct phy_device *VAR_0, struct ethtool_wolinfo *VAR_1)
{
 if (VAR_0->drv && VAR_0->drv->get_wol)
  VAR_0->drv->get_wol(VAR_0, VAR_1);
}
