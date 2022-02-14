
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dummy; } ;
struct i40e_vsi {int dummy; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct i40e_vsi*,int const*) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1, const u8 *VAR_2)
{
 struct i40e_netdev_priv *VAR_3 = FUNC_1(VAR_1);
 struct i40e_vsi *VAR_4 = VAR_3->vsi;

 if (FUNC_0(VAR_4, VAR_2))
  return 0;
 else
  return -VAR_0;
}
