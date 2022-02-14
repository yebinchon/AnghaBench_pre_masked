
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {int dev_addr; } ;
struct i40e_vsi {int dummy; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 scalar_t__ FUNC_0 (int const*,int ) ;
 int FUNC_1 (struct i40e_vsi*,int const*) ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0, const u8 *VAR_1)
{
 struct i40e_netdev_priv *VAR_2 = FUNC_2(VAR_0);
 struct i40e_vsi *VAR_3 = VAR_2->vsi;






 if (FUNC_0(VAR_1, VAR_0->dev_addr))
  return 0;

 FUNC_1(VAR_3, VAR_1);

 return 0;
}
