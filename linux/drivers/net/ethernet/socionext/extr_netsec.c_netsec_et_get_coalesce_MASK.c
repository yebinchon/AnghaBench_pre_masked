
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_coalesce {int dummy; } ;
struct netsec_priv {struct ethtool_coalesce et_coalesce; } ;
struct net_device {int dummy; } ;


 struct netsec_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
      struct ethtool_coalesce *VAR_1)
{
 struct netsec_priv *VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->et_coalesce;

 return 0;
}
