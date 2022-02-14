
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct i40e_hw {int partition_id; int port; } ;
struct i40e_pf {scalar_t__ wol_en; struct i40e_hw hw; } ;
struct i40e_netdev_priv {TYPE_1__* vsi; } ;
struct ethtool_wolinfo {void* wolopts; void* supported; } ;
struct TYPE_2__ {struct i40e_pf* back; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (struct i40e_hw*,int ,int*) ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
    struct ethtool_wolinfo *VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_2(VAR_2);
 struct i40e_pf *VAR_5 = VAR_4->vsi->back;
 struct i40e_hw *VAR_6 = &VAR_5->hw;
 u16 VAR_7;


 FUNC_1(VAR_6, VAR_0, &VAR_7);
 if ((FUNC_0(VAR_6->port) & VAR_7) || (VAR_6->partition_id != 1)) {
  VAR_3->supported = 0;
  VAR_3->wolopts = 0;
 } else {
  VAR_3->supported = VAR_1;
  VAR_3->wolopts = (VAR_5->wol_en ? VAR_1 : 0);
 }
}
