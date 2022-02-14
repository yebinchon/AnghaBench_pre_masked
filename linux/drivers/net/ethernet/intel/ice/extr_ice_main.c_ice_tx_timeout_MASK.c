
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct netdev_queue {unsigned long trans_start; } ;
struct net_device {size_t num_tx_queues; scalar_t__ watchdog_timeo; } ;
struct ice_vsi {size_t num_txq; int state; int vsi_num; int * txq_map; struct ice_ring** tx_rings; struct ice_pf* back; } ;
struct ice_ring {int q_index; int next_to_use; int next_to_clean; TYPE_1__* q_vector; scalar_t__ desc; } ;
struct ice_hw {int dummy; } ;
struct ice_pf {int tx_timeout_recovery_level; int state; scalar_t__ tx_timeout_last_recovery; struct ice_hw hw; int tx_timeout_count; } ;
struct ice_netdev_priv {struct ice_vsi* vsi; } ;
struct TYPE_2__ {int reg_idx; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct ice_pf*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct net_device*,char*) ;
 struct netdev_queue* FUNC_4 (struct net_device*,size_t) ;
 int FUNC_5 (struct net_device*,char*,...) ;
 struct ice_netdev_priv* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct netdev_queue*) ;
 size_t FUNC_8 (struct ice_hw*,int ) ;
 int FUNC_9 (int ,int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_12(struct net_device *VAR_10)
{
 struct ice_netdev_priv *VAR_11 = FUNC_6(VAR_10);
 struct ice_ring *VAR_12 = ((void*)0);
 struct ice_vsi *VAR_13 = VAR_11->vsi;
 struct ice_pf *VAR_14 = VAR_13->back;
 int VAR_15 = -1;
 u32 VAR_16;

 VAR_14->tx_timeout_count++;


 for (VAR_16 = 0; VAR_16 < VAR_10->num_tx_queues; VAR_16++) {
  unsigned long VAR_17;
  struct netdev_queue *VAR_18;

  VAR_18 = FUNC_4(VAR_10, VAR_16);
  VAR_17 = VAR_18->trans_start;
  if (FUNC_7(VAR_18) &&
      FUNC_10(VAR_9,
          VAR_17 + VAR_10->watchdog_timeo)) {
   VAR_15 = VAR_16;
   break;
  }
 }

 if (VAR_16 == VAR_10->num_tx_queues)
  FUNC_5(VAR_10, "tx_timeout: no netdev hung queue found\n");
 else

  for (VAR_16 = 0; VAR_16 < VAR_13->num_txq; VAR_16++)
   if (VAR_13->tx_rings[VAR_16] && VAR_13->tx_rings[VAR_16]->desc)
    if (VAR_15 == VAR_13->tx_rings[VAR_16]->q_index) {
     VAR_12 = VAR_13->tx_rings[VAR_16];
     break;
    }




 if (FUNC_10(VAR_9, (VAR_14->tx_timeout_last_recovery + VAR_0 * 20)))
  VAR_14->tx_timeout_recovery_level = 1;
 else if (FUNC_11(VAR_9, (VAR_14->tx_timeout_last_recovery +
           VAR_10->watchdog_timeo)))
  return;

 if (VAR_12) {
  struct ice_hw *VAR_19 = &VAR_14->hw;
  u32 VAR_20, VAR_21 = 0;

  VAR_20 = (FUNC_8(VAR_19, FUNC_1(VAR_13->txq_map[VAR_15])) &
   VAR_1) >> VAR_2;

  VAR_21 = FUNC_8(VAR_19, FUNC_0(VAR_12->q_vector->reg_idx));

  FUNC_5(VAR_10, "tx_timeout: VSI_num: %d, Q %d, NTC: 0x%x, HW_HEAD: 0x%x, NTU: 0x%x, INT: 0x%x\n",
       VAR_13->vsi_num, VAR_15, VAR_12->next_to_clean,
       VAR_20, VAR_12->next_to_use, VAR_21);
 }

 VAR_14->tx_timeout_last_recovery = VAR_9;
 FUNC_5(VAR_10, "tx_timeout recovery level %d, hung_queue %d\n",
      VAR_14->tx_timeout_recovery_level, VAR_15);

 switch (VAR_14->tx_timeout_recovery_level) {
 case 1:
  FUNC_9(VAR_7, VAR_14->state);
  break;
 case 2:
  FUNC_9(VAR_3, VAR_14->state);
  break;
 case 3:
  FUNC_9(VAR_5, VAR_14->state);
  break;
 default:
  FUNC_3(VAR_10, "tx_timeout recovery unsuccessful, device is in unrecoverable state.\n");
  FUNC_9(VAR_4, VAR_14->state);
  FUNC_9(VAR_6, VAR_13->state);
  FUNC_9(VAR_8, VAR_14->state);
  break;
 }

 FUNC_2(VAR_14);
 VAR_14->tx_timeout_recovery_level++;
}
