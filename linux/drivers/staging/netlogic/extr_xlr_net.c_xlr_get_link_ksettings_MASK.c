
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlr_net_priv {int dummy; } ;
struct phy_device {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;


 int VAR_0 ;
 struct xlr_net_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct phy_device*,struct ethtool_link_ksettings*) ;
 struct phy_device* FUNC_2 (struct xlr_net_priv*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_1,
      struct ethtool_link_ksettings *VAR_2)
{
 struct xlr_net_priv *VAR_3 = FUNC_0(VAR_1);
 struct phy_device *VAR_4 = FUNC_2(VAR_3);

 if (!VAR_4)
  return -VAR_0;

 FUNC_1(VAR_4, VAR_2);

 return 0;
}
