
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int nvmupd_state; } ;
struct i40e_pf {TYPE_2__ hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct TYPE_3__ {struct i40e_pf* back; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 struct i40e_netdev_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct i40e_pf*,int ,struct net_device*,char*) ;

__attribute__((used)) static u64 FUNC_3(struct net_device *VAR_2, u64 *VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_1(VAR_2);
 struct i40e_pf *VAR_5 = VAR_4->vsi->back;

 FUNC_2(VAR_5, VAR_1, VAR_2, "eeprom test\n");
 *VAR_3 = FUNC_0(&VAR_5->hw);


 VAR_5->hw.nvmupd_state = VAR_0;

 return *VAR_3;
}
