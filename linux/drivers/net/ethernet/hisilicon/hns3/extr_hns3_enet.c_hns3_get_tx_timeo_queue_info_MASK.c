
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct netdev_queue {unsigned long trans_start; } ;
struct net_device {int num_tx_queues; scalar_t__ watchdog_timeo; } ;
struct napi_struct {int state; } ;
struct hns3_nic_priv {int tx_timeout_count; TYPE_1__* ring_data; } ;
struct hns3_mac_stats {int rx_pause_cnt; int tx_pause_cnt; } ;
struct TYPE_8__ {int tx_busy; int restart_queue; int tx_err_cnt; int seg_pkt_cnt; int sw_err_cnt; int io_err_cnt; int tx_bytes; int tx_pkts; } ;
struct hns3_enet_ring {TYPE_6__* tqp_vector; TYPE_5__* tqp; TYPE_2__ stats; int next_to_clean; int next_to_use; } ;
struct hnae3_handle {TYPE_4__* ae_algo; } ;
struct TYPE_12__ {int mask_addr; struct napi_struct napi; } ;
struct TYPE_11__ {scalar_t__ io_base; } ;
struct TYPE_10__ {TYPE_3__* ops; } ;
struct TYPE_9__ {int (* get_mac_stats ) (struct hnae3_handle*,struct hns3_mac_stats*) ;} ;
struct TYPE_7__ {struct hns3_enet_ring* ring; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 struct hnae3_handle* FUNC_0 (struct net_device*) ;
 int VAR_10 ;
 struct netdev_queue* FUNC_1 (struct net_device*,int) ;
 int FUNC_2 (struct net_device*,char*,int,...) ;
 struct hns3_nic_priv* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct netdev_queue*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct hnae3_handle*,struct hns3_mac_stats*) ;
 scalar_t__ FUNC_8 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_9(struct net_device *VAR_11)
{
 struct hns3_nic_priv *VAR_12 = FUNC_3(VAR_11);
 struct hnae3_handle *VAR_13 = FUNC_0(VAR_11);
 struct hns3_enet_ring *VAR_14 = ((void*)0);
 struct napi_struct *VAR_15;
 int VAR_16 = 0;
 int VAR_17, VAR_18;
 int VAR_19, VAR_20;
 int VAR_21, VAR_22;
 int VAR_23, VAR_24;
 int VAR_25, VAR_26;
 int VAR_27;


 for (VAR_27 = 0; VAR_27 < VAR_11->num_tx_queues; VAR_27++) {
  struct netdev_queue *VAR_28;
  unsigned long VAR_29;

  VAR_28 = FUNC_1(VAR_11, VAR_27);
  VAR_29 = VAR_28->trans_start;
  if (FUNC_4(VAR_28) &&
      FUNC_8(VAR_10,
          (VAR_29 + VAR_11->watchdog_timeo))) {
   VAR_16 = VAR_27;
   break;
  }
 }

 if (VAR_27 == VAR_11->num_tx_queues) {
  FUNC_2(VAR_11,
       "no netdev TX timeout queue found, timeout count: %llu\n",
       VAR_12->tx_timeout_count);
  return 0;
 }

 VAR_12->tx_timeout_count++;

 VAR_14 = VAR_12->ring_data[VAR_16].ring;
 VAR_15 = &VAR_14->tqp_vector->napi;

 FUNC_2(VAR_11,
      "tx_timeout count: %llu, queue id: %d, SW_NTU: 0x%x, SW_NTC: 0x%x, napi state: %lu\n",
      VAR_12->tx_timeout_count, VAR_16, VAR_14->next_to_use,
      VAR_14->next_to_clean, VAR_15->state);

 FUNC_2(VAR_11,
      "tx_pkts: %llu, tx_bytes: %llu, io_err_cnt: %llu, sw_err_cnt: %llu\n",
      VAR_14->stats.tx_pkts, VAR_14->stats.tx_bytes,
      VAR_14->stats.io_err_cnt, VAR_14->stats.sw_err_cnt);

 FUNC_2(VAR_11,
      "seg_pkt_cnt: %llu, tx_err_cnt: %llu, restart_queue: %llu, tx_busy: %llu\n",
      VAR_14->stats.seg_pkt_cnt, VAR_14->stats.tx_err_cnt,
      VAR_14->stats.restart_queue, VAR_14->stats.tx_busy);




 if (VAR_13->ae_algo->ops->get_mac_stats) {
  struct hns3_mac_stats VAR_30;

  VAR_13->ae_algo->ops->get_mac_stats(VAR_13, &VAR_30);
  FUNC_2(VAR_11, "tx_pause_cnt: %llu, rx_pause_cnt: %llu\n",
       VAR_30.tx_pause_cnt, VAR_30.rx_pause_cnt);
 }

 VAR_17 = FUNC_6(VAR_14->tqp->io_base +
    VAR_6);
 VAR_18 = FUNC_6(VAR_14->tqp->io_base +
    VAR_8);
 VAR_19 = FUNC_6(VAR_14->tqp->io_base +
    VAR_5);
 VAR_20 = FUNC_6(VAR_14->tqp->io_base +
    VAR_7);
 VAR_21 = FUNC_6(VAR_14->tqp->io_base +
    VAR_3);
 VAR_22 = FUNC_6(VAR_14->tqp->io_base +
    VAR_4);
 VAR_23 = FUNC_6(VAR_14->tqp->io_base +
          VAR_2);
 VAR_24 = FUNC_6(VAR_14->tqp->io_base +
          VAR_1);
 VAR_25 = FUNC_6(VAR_14->tqp->io_base + VAR_0);
 VAR_26 = FUNC_6(VAR_14->tqp->io_base + VAR_9);

 FUNC_2(VAR_11,
      "BD_NUM: 0x%x HW_HEAD: 0x%x, HW_TAIL: 0x%x, BD_ERR: 0x%x, INT: 0x%x\n",
      VAR_23, VAR_17, VAR_18, VAR_24,
      FUNC_5(VAR_14->tqp_vector->mask_addr));
 FUNC_2(VAR_11,
      "RING_EN: 0x%x, TC: 0x%x, FBD_NUM: 0x%x FBD_OFT: 0x%x, EBD_NUM: 0x%x, EBD_OFT: 0x%x\n",
      VAR_25, VAR_26, VAR_19, VAR_20, VAR_21, VAR_22);

 return 1;
}
