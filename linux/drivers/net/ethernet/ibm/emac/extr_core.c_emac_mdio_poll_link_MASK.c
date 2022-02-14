
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct mii_phy {struct net_device* dev; } ;
struct emac_instance {TYPE_2__* phy_dev; TYPE_1__* ofdev; } ;
struct TYPE_4__ {int link; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct net_device*) ;
 struct emac_instance* FUNC_2 (struct net_device*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(struct mii_phy *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 struct emac_instance *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_3(VAR_2->phy_dev);
 if (VAR_3) {
  FUNC_0(&VAR_2->ofdev->dev, "link update failed (%d).", VAR_3);
  return FUNC_1(VAR_1);
 }

 return VAR_2->phy_dev->link;
}
