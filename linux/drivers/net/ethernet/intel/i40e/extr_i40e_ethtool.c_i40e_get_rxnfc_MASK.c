
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
struct i40e_vsi {int rss_size; struct i40e_pf* back; } ;
struct i40e_pf {int fdir_pf_active_filters; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct ethtool_rxnfc {int cmd; int data; int rule_cnt; } ;


 int VAR_0 ;





 int FUNC_0 (struct i40e_pf*,struct ethtool_rxnfc*,int *) ;
 int FUNC_1 (struct i40e_pf*,struct ethtool_rxnfc*) ;
 int FUNC_2 (struct i40e_pf*) ;
 int FUNC_3 (struct i40e_pf*,struct ethtool_rxnfc*) ;
 struct i40e_netdev_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1, struct ethtool_rxnfc *VAR_2,
     u32 *VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_4(VAR_1);
 struct i40e_vsi *VAR_5 = VAR_4->vsi;
 struct i40e_pf *VAR_6 = VAR_5->back;
 int VAR_7 = -VAR_0;

 switch (VAR_2->cmd) {
 case 128:
  VAR_2->data = VAR_5->rss_size;
  VAR_7 = 0;
  break;
 case 129:
  VAR_7 = FUNC_3(VAR_6, VAR_2);
  break;
 case 131:
  VAR_2->rule_cnt = VAR_6->fdir_pf_active_filters;

  VAR_2->data = FUNC_2(VAR_6);
  VAR_7 = 0;
  break;
 case 130:
  VAR_7 = FUNC_1(VAR_6, VAR_2);
  break;
 case 132:
  VAR_7 = FUNC_0(VAR_6, VAR_2, VAR_3);
  break;
 default:
  break;
 }

 return VAR_7;
}
