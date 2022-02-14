
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


 int VAR_0 ;
 struct stmmac_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_pauseparam*) ;
 int FUNC_2 (struct stmmac_priv*,int ,struct rgmii_adv*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_1,
        struct ethtool_pauseparam *VAR_2)
{
 struct stmmac_priv *VAR_3 = FUNC_0(VAR_1);
 struct rgmii_adv VAR_4;

 if (VAR_3->hw->pcs && !FUNC_2(VAR_3, VAR_3->ioaddr, &VAR_4)) {
  VAR_2->autoneg = 1;
  if (!VAR_4.pause)
   return -VAR_0;
  return 0;
 } else {
  return FUNC_1(VAR_3->phylink, VAR_2);
 }
}
