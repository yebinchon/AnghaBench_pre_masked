
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct mii_phy {int advertising; int autoneg; struct net_device* dev; } ;
struct emac_instance {int phy_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct mii_phy*,int ) ;
 struct emac_instance* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_1, u32 VAR_2)
{
 struct net_device *VAR_3 = VAR_1->dev;
 struct emac_instance *VAR_4 = FUNC_1(VAR_3);

 VAR_1->autoneg = VAR_0;
 VAR_1->advertising = VAR_2;
 return FUNC_0(VAR_1, VAR_4->phy_dev);
}
