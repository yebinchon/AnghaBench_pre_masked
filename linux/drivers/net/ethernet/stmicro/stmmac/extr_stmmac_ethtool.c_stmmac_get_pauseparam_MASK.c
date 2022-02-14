
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmmac_priv {int phylink; int ioaddr; TYPE_1__* hw; } ;
struct rgmii_adv {int pause; } ;
struct net_device {int dummy; } ;
struct ethtool_pauseparam {int autoneg; } ;
struct TYPE_2__ {scalar_t__ pcs; } ;


 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_pauseparam*) ;
 int FUNC_2 (struct stmmac_priv*,int ,struct rgmii_adv*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0,
        struct ethtool_pauseparam *VAR_1)
{
 struct stmmac_priv *VAR_2 = FUNC_0(VAR_0);
 struct rgmii_adv VAR_3;

 if (VAR_2->hw->pcs && !FUNC_2(VAR_2, VAR_2->ioaddr, &VAR_3)) {
  VAR_1->autoneg = 1;
  if (!VAR_3.pause)
   return;
 } else {
  FUNC_1(VAR_2->phylink, VAR_1);
 }
}
