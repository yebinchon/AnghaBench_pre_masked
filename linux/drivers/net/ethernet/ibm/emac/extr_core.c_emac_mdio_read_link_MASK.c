
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct phy_device {int asym_pause; int pause; int duplex; int speed; } ;
struct net_device {int dummy; } ;
struct mii_phy {int asym_pause; int pause; int duplex; int speed; struct net_device* dev; } ;
struct emac_instance {struct phy_device* phy_dev; } ;


 struct emac_instance* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*) ;

__attribute__((used)) static int FUNC_2(struct mii_phy *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 struct emac_instance *VAR_2 = FUNC_0(VAR_1);
 struct phy_device *VAR_3 = VAR_2->phy_dev;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_0->speed = VAR_3->speed;
 VAR_0->duplex = VAR_3->duplex;
 VAR_0->pause = VAR_3->pause;
 VAR_0->asym_pause = VAR_3->asym_pause;
 return 0;
}
