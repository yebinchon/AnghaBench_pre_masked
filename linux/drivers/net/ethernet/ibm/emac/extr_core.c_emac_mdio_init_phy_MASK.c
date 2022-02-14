
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct mii_phy {struct net_device* dev; } ;
struct emac_instance {int phy_dev; } ;


 struct emac_instance* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mii_phy *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 struct emac_instance *VAR_2 = FUNC_0(VAR_1);

 FUNC_2(VAR_2->phy_dev);
 return FUNC_1(VAR_2->phy_dev);
}
