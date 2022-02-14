
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct i40e_vsi {int dummy; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int FUNC_0 (struct i40e_vsi*) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;

int FUNC_2(struct net_device *VAR_0)
{
 struct i40e_netdev_priv *VAR_1 = FUNC_1(VAR_0);
 struct i40e_vsi *VAR_2 = VAR_1->vsi;

 FUNC_0(VAR_2);

 return 0;
}
