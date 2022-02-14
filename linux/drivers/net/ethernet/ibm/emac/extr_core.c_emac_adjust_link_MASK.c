
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct phy_device {int advertising; int asym_pause; int pause; int duplex; int speed; int autoneg; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int advertising; int asym_pause; int pause; int duplex; int speed; int autoneg; } ;
struct emac_instance {TYPE_1__ phy; struct phy_device* phy_dev; } ;


 int FUNC_0 (int *,int ) ;
 struct emac_instance* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct emac_instance *VAR_1 = FUNC_1(VAR_0);
 struct phy_device *VAR_2 = VAR_1->phy_dev;

 VAR_1->phy.autoneg = VAR_2->autoneg;
 VAR_1->phy.speed = VAR_2->speed;
 VAR_1->phy.duplex = VAR_2->duplex;
 VAR_1->phy.pause = VAR_2->pause;
 VAR_1->phy.asym_pause = VAR_2->asym_pause;
 FUNC_0(&VAR_1->phy.advertising,
      VAR_2->advertising);
}
