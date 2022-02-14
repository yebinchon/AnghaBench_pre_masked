
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct netdev_queue {unsigned long trans_start; } ;
struct net_device {unsigned int num_tx_queues; scalar_t__ watchdog_timeo; } ;
struct i40e_vsi {unsigned int num_queue_pairs; int seid; struct i40e_ring** tx_rings; struct i40e_pf* back; } ;
struct i40e_ring {unsigned int queue_index; int tail; int next_to_use; int next_to_clean; TYPE_2__* vsi; TYPE_1__* q_vector; scalar_t__ desc; } ;
struct i40e_pf {int tx_timeout_recovery_level; int flags; int state; scalar_t__ tx_timeout_last_recovery; int hw; int tx_timeout_count; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct TYPE_4__ {scalar_t__ base_vector; } ;
struct TYPE_3__ {scalar_t__ v_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct i40e_ring*) ;
 int FUNC_2 (struct i40e_pf*) ;
 scalar_t__ VAR_7 ;
 int FUNC_3 (struct net_device*,char*) ;
 struct netdev_queue* FUNC_4 (struct net_device*,unsigned int) ;
 int FUNC_5 (struct net_device*,char*,...) ;
 struct i40e_netdev_priv* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_14(struct net_device *VAR_8)
{
 struct i40e_netdev_priv *VAR_9 = FUNC_6(VAR_8);
 struct i40e_vsi *VAR_10 = VAR_9->vsi;
 struct i40e_pf *VAR_11 = VAR_10->back;
 struct i40e_ring *VAR_12 = ((void*)0);
 unsigned int VAR_13, VAR_14 = 0;
 u32 VAR_15, VAR_16;

 VAR_11->tx_timeout_count++;


 for (VAR_13 = 0; VAR_13 < VAR_8->num_tx_queues; VAR_13++) {
  struct netdev_queue *VAR_17;
  unsigned long VAR_18;

  VAR_17 = FUNC_4(VAR_8, VAR_13);
  VAR_18 = VAR_17->trans_start;
  if (FUNC_7(VAR_17) &&
      FUNC_12(VAR_7,
          (VAR_18 + VAR_8->watchdog_timeo))) {
   VAR_14 = VAR_13;
   break;
  }
 }

 if (VAR_13 == VAR_8->num_tx_queues) {
  FUNC_5(VAR_8, "tx_timeout: no netdev hung queue found\n");
 } else {

  for (VAR_13 = 0; VAR_13 < VAR_10->num_queue_pairs; VAR_13++) {
   if (VAR_10->tx_rings[VAR_13] && VAR_10->tx_rings[VAR_13]->desc) {
    if (VAR_14 ==
        VAR_10->tx_rings[VAR_13]->queue_index) {
     VAR_12 = VAR_10->tx_rings[VAR_13];
     break;
    }
   }
  }
 }

 if (FUNC_12(VAR_7, (VAR_11->tx_timeout_last_recovery + VAR_0*20)))
  VAR_11->tx_timeout_recovery_level = 1;
 else if (FUNC_13(VAR_7,
        (VAR_11->tx_timeout_last_recovery + VAR_8->watchdog_timeo)))
  return;


 if (FUNC_11(VAR_6, VAR_11->state))
  return;

 if (VAR_12) {
  VAR_15 = FUNC_1(VAR_12);

  if (VAR_11->flags & VAR_1)
   VAR_16 = FUNC_8(&VAR_11->hw,
        FUNC_0(VAR_12->q_vector->v_idx +
      VAR_12->vsi->base_vector - 1));
  else
   VAR_16 = FUNC_8(&VAR_11->hw, VAR_2);

  FUNC_5(VAR_8, "tx_timeout: VSI_seid: %d, Q %d, NTC: 0x%x, HWB: 0x%x, NTU: 0x%x, TAIL: 0x%x, INT: 0x%x\n",
       VAR_10->seid, VAR_14, VAR_12->next_to_clean,
       VAR_15, VAR_12->next_to_use,
       FUNC_9(VAR_12->tail), VAR_16);
 }

 VAR_11->tx_timeout_last_recovery = VAR_7;
 FUNC_5(VAR_8, "tx_timeout recovery level %d, hung_queue %d\n",
      VAR_11->tx_timeout_recovery_level, VAR_14);

 switch (VAR_11->tx_timeout_recovery_level) {
 case 1:
  FUNC_10(VAR_5, VAR_11->state);
  break;
 case 2:
  FUNC_10(VAR_3, VAR_11->state);
  break;
 case 3:
  FUNC_10(VAR_4, VAR_11->state);
  break;
 default:
  FUNC_3(VAR_8, "tx_timeout recovery unsuccessful\n");
  break;
 }

 FUNC_2(VAR_11);
 VAR_11->tx_timeout_recovery_level++;
}
