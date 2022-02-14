
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ phydev; } ;
struct mv643xx_eth_private {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int FUNC_0 (struct mv643xx_eth_private*,struct ethtool_link_ksettings*) ;
 int FUNC_1 (struct mv643xx_eth_private*,struct ethtool_link_ksettings*) ;
 struct mv643xx_eth_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int
FUNC_3(struct net_device *VAR_0,
          struct ethtool_link_ksettings *VAR_1)
{
 struct mv643xx_eth_private *VAR_2 = FUNC_2(VAR_0);

 if (VAR_0->phydev)
  return FUNC_0(VAR_2, VAR_1);
 else
  return FUNC_1(VAR_2, VAR_1);
}
