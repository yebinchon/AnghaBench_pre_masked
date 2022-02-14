
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {TYPE_1__* driver; int kobj; } ;
struct TYPE_10__ {TYPE_6__ dev; struct mii_bus* bus; } ;
struct phy_device {TYPE_2__ mdio; int * phylink; struct net_device* attached_dev; scalar_t__ sysfs_links; } ;
struct TYPE_13__ {TYPE_4__* parent; int kobj; } ;
struct net_device {TYPE_5__ dev; int * phydev; } ;
struct module {int dummy; } ;
struct mii_bus {struct module* owner; } ;
struct TYPE_15__ {int attr; } ;
struct TYPE_12__ {TYPE_3__* driver; } ;
struct TYPE_11__ {struct module* owner; } ;
struct TYPE_9__ {struct module* owner; } ;


 TYPE_8__ VAR_0 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (struct module*) ;
 int FUNC_2 (struct phy_device*,int) ;
 scalar_t__ FUNC_3 (struct phy_device*) ;
 scalar_t__ FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,char*) ;

void FUNC_10(struct phy_device *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->attached_dev;
 struct module *VAR_3 = ((void*)0);
 struct mii_bus *VAR_4;

 if (VAR_1->sysfs_links) {
  if (VAR_2)
   FUNC_9(&VAR_2->dev.kobj, "phydev");
  FUNC_9(&VAR_1->mdio.dev.kobj, "attached_dev");
 }

 if (!VAR_1->attached_dev)
  FUNC_8(&VAR_1->mdio.dev.kobj,
      &VAR_0.attr);

 FUNC_6(VAR_1);
 if (VAR_2) {
  VAR_1->attached_dev->phydev = ((void*)0);
  VAR_1->attached_dev = ((void*)0);
 }
 VAR_1->phylink = ((void*)0);

 FUNC_5(VAR_1);

 FUNC_1(VAR_1->mdio.dev.driver->owner);






 if (FUNC_3(VAR_1) ||
     FUNC_4(VAR_1))
  FUNC_0(&VAR_1->mdio.dev);





 VAR_4 = VAR_1->mdio.bus;

 FUNC_7(&VAR_1->mdio.dev);
 if (VAR_2)
  VAR_3 = VAR_2->dev.parent->driver->owner;
 if (VAR_3 != VAR_4->owner)
  FUNC_1(VAR_4->owner);


 FUNC_2(VAR_1, 1);
}
