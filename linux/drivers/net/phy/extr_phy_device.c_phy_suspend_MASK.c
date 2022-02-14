
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct phy_driver {int (* suspend ) (struct phy_device*) ;} ;
struct TYPE_3__ {int driver; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;
struct phy_device {int suspended; scalar_t__ drv; struct net_device* attached_dev; TYPE_2__ mdio; } ;
struct net_device {scalar_t__ wol_enabled; } ;
struct ethtool_wolinfo {scalar_t__ wolopts; int cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct phy_device*,struct ethtool_wolinfo*) ;
 int FUNC_1 (struct phy_device*) ;
 struct phy_driver* FUNC_2 (int ) ;

int FUNC_3(struct phy_device *VAR_2)
{
 struct phy_driver *VAR_3 = FUNC_2(VAR_2->mdio.dev.driver);
 struct net_device *VAR_4 = VAR_2->attached_dev;
 struct ethtool_wolinfo VAR_5 = { .cmd = VAR_1 };
 int VAR_6 = 0;


 FUNC_0(VAR_2, &VAR_5);
 if (VAR_5.wolopts || (VAR_4 && VAR_4->wol_enabled))
  return -VAR_0;

 if (VAR_2->drv && VAR_3->suspend)
  VAR_6 = VAR_3->suspend(VAR_2);

 if (VAR_6)
  return VAR_6;

 VAR_2->suspended = 1;

 return VAR_6;
}
