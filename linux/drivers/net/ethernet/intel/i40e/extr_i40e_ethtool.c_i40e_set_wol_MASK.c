
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct i40e_hw {int partition_id; int port; } ;
struct i40e_pf {size_t lan_vsi; int wol_en; TYPE_1__* pdev; struct i40e_vsi** vsi; struct i40e_hw hw; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct ethtool_wolinfo {int wolopts; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct i40e_pf*) ;
 int FUNC_3 (struct i40e_hw*,int ,int*) ;
 struct i40e_netdev_priv* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3, struct ethtool_wolinfo *VAR_4)
{
 struct i40e_netdev_priv *VAR_5 = FUNC_4(VAR_3);
 struct i40e_pf *VAR_6 = VAR_5->vsi->back;
 struct i40e_vsi *VAR_7 = VAR_5->vsi;
 struct i40e_hw *VAR_8 = &VAR_6->hw;
 u16 VAR_9;


 if (VAR_8->partition_id != 1) {
  FUNC_2(VAR_6);
  return -VAR_0;
 }

 if (VAR_7 != VAR_6->vsi[VAR_6->lan_vsi])
  return -VAR_0;


 FUNC_3(VAR_8, VAR_1, &VAR_9);
 if (FUNC_0(VAR_8->port) & VAR_9)
  return -VAR_0;


 if (VAR_4->wolopts & ~VAR_2)
  return -VAR_0;


 if (VAR_6->wol_en != !!VAR_4->wolopts) {
  VAR_6->wol_en = !!VAR_4->wolopts;
  FUNC_1(&VAR_6->pdev->dev, VAR_6->wol_en);
 }

 return 0;
}
