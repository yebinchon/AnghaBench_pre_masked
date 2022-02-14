
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int num_tx_queues; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct TYPE_2__ {int partition_id; } ;
struct i40e_pf {size_t lan_vsi; TYPE_1__ hw; struct i40e_vsi** vsi; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct i40e_netdev_priv* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = FUNC_0(VAR_3);
 struct i40e_vsi *VAR_5 = VAR_4->vsi;
 struct i40e_pf *VAR_6 = VAR_5->back;
 int VAR_7;

 if (VAR_5 == VAR_6->vsi[VAR_6->lan_vsi] && VAR_6->hw.partition_id == 1)
  VAR_7 = VAR_0;
 else
  VAR_7 = VAR_2;
 VAR_7 += VAR_1 * 2 * VAR_3->num_tx_queues;

 return VAR_7;
}
