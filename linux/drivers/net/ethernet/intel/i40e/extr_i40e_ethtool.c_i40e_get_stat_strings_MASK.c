
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct net_device {unsigned int num_tx_queues; } ;
struct i40e_vsi {struct i40e_pf* back; } ;
struct TYPE_2__ {int partition_id; } ;
struct i40e_pf {size_t lan_vsi; TYPE_1__ hw; struct i40e_vsi** vsi; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int **,int ,...) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct i40e_netdev_priv* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_10, u8 *VAR_11)
{
 struct i40e_netdev_priv *VAR_12 = FUNC_3(VAR_10);
 struct i40e_vsi *VAR_13 = VAR_12->vsi;
 struct i40e_pf *VAR_14 = VAR_13->back;
 unsigned int VAR_15;
 u8 *VAR_16 = VAR_11;

 FUNC_1(&VAR_11, VAR_4);

 FUNC_1(&VAR_11, VAR_3);

 for (VAR_15 = 0; VAR_15 < VAR_10->num_tx_queues; VAR_15++) {
  FUNC_1(&VAR_11, VAR_6,
          "tx", VAR_15);
  FUNC_1(&VAR_11, VAR_6,
          "rx", VAR_15);
 }

 if (VAR_13 != VAR_14->vsi[VAR_14->lan_vsi] || VAR_14->hw.partition_id != 1)
  goto check_data_pointer;

 FUNC_1(&VAR_11, VAR_8);

 for (VAR_15 = 0; VAR_15 < VAR_1; VAR_15++)
  FUNC_1(&VAR_11, VAR_9, VAR_15);

 FUNC_1(&VAR_11, VAR_7);

 for (VAR_15 = 0; VAR_15 < VAR_2; VAR_15++)
  FUNC_1(&VAR_11, VAR_5, VAR_15);

check_data_pointer:
 FUNC_0(VAR_11 - VAR_16 != FUNC_2(VAR_10) * VAR_0,
    "stat strings count mismatch!");
}
