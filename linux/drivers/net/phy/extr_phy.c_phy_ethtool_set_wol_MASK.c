
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {TYPE_1__* drv; } ;
struct ethtool_wolinfo {int dummy; } ;
struct TYPE_2__ {int (* set_wol ) (struct phy_device*,struct ethtool_wolinfo*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct phy_device*,struct ethtool_wolinfo*) ;

int FUNC_1(struct phy_device *VAR_1, struct ethtool_wolinfo *VAR_2)
{
 if (VAR_1->drv && VAR_1->drv->set_wol)
  return VAR_1->drv->set_wol(VAR_1, VAR_2);

 return -VAR_0;
}
