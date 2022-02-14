
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int * ethtool_ops; } ;
struct i40e_pf {int state; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_2__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i40e_netdev_priv* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct net_device *VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_0(VAR_3);
 struct i40e_pf *VAR_5 = VAR_4->vsi->back;

 if (!FUNC_1(VAR_0, VAR_5->state))
  VAR_3->ethtool_ops = &VAR_1;
 else
  VAR_3->ethtool_ops = &VAR_2;
}
