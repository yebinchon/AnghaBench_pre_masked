
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;
struct ep93xx_priv {int mii; } ;


 int FUNC_0 (int *,struct ethtool_link_ksettings*) ;
 struct ep93xx_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         struct ethtool_link_ksettings *VAR_1)
{
 struct ep93xx_priv *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->mii, VAR_1);

 return 0;
}
