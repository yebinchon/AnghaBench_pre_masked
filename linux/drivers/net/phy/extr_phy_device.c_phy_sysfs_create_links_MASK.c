
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kobj; } ;
struct TYPE_4__ {TYPE_2__ dev; } ;
struct phy_device {int sysfs_links; TYPE_1__ mdio; struct net_device* attached_dev; } ;
struct TYPE_6__ {int kobj; } ;
struct net_device {TYPE_3__ dev; } ;


 int FUNC_0 (TYPE_3__*,char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,char*) ;
 int FUNC_3 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_4(struct phy_device *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->attached_dev;
 int VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = FUNC_2(&VAR_0->mdio.dev.kobj, &VAR_1->dev.kobj,
    "attached_dev");
 if (VAR_2)
  return;

 VAR_2 = FUNC_3(&VAR_1->dev.kobj,
           &VAR_0->mdio.dev.kobj,
           "phydev");
 if (VAR_2) {
  FUNC_0(&VAR_1->dev, "could not add device link to %s err %d\n",
   FUNC_1(&VAR_0->mdio.dev.kobj),
   VAR_2);



 }

 VAR_0->sysfs_links = 1;
}
