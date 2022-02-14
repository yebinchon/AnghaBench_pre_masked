
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_pf {int dummy; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct ethtool_rxnfc {int cmd; } ;


 int VAR_0 ;



 int FUNC_0 (struct i40e_vsi*,struct ethtool_rxnfc*) ;
 int FUNC_1 (struct i40e_vsi*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct i40e_pf*,struct ethtool_rxnfc*) ;
 struct i40e_netdev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2)
{
 struct i40e_netdev_priv *VAR_3 = FUNC_3(VAR_1);
 struct i40e_vsi *VAR_4 = VAR_3->vsi;
 struct i40e_pf *VAR_5 = VAR_4->back;
 int VAR_6 = -VAR_0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_6 = FUNC_2(VAR_5, VAR_2);
  break;
 case 129:
  VAR_6 = FUNC_0(VAR_4, VAR_2);
  break;
 case 130:
  VAR_6 = FUNC_1(VAR_4, VAR_2);
  break;
 default:
  break;
 }

 return VAR_6;
}
