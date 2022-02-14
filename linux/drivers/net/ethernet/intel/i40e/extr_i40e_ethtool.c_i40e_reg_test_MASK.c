
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct i40e_pf {int hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_2__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct i40e_pf*,int ,struct net_device*,char*) ;

__attribute__((used)) static u64 FUNC_3(struct net_device *VAR_1, u64 *VAR_2)
{
 struct i40e_netdev_priv *VAR_3 = FUNC_1(VAR_1);
 struct i40e_pf *VAR_4 = VAR_3->vsi->back;

 FUNC_2(VAR_4, VAR_0, VAR_1, "register test\n");
 *VAR_2 = FUNC_0(&VAR_4->hw);

 return *VAR_2;
}
