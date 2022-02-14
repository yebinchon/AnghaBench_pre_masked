
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sxgbe_priv_data {int dummy; } ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int cmd; } ;


 int VAR_0 ;

 struct sxgbe_priv_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct sxgbe_priv_data*,struct ethtool_rxnfc*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2)
{
 struct sxgbe_priv_data *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = -VAR_0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_4 = FUNC_1(VAR_3, VAR_2);
  break;
 default:
  break;
 }

 return VAR_4;
}
