
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct virtchnl_vsi_queue_config_info {int num_queue_pairs; int vsi_id; struct virtchnl_queue_pair_info* qpair; } ;
struct TYPE_13__ {int queue_id; int max_pkt_size; int databuffer_size; int dma_ring_addr; int ring_len; int vsi_id; } ;
struct TYPE_11__ {int queue_id; int dma_ring_addr; int ring_len; int vsi_id; } ;
struct virtchnl_queue_pair_info {TYPE_6__ rxq; TYPE_4__ txq; } ;
struct iavf_adapter {int num_active_queues; scalar_t__ current_op; int flags; int aq_required; TYPE_7__* rx_rings; TYPE_5__* tx_rings; TYPE_3__* vsi_res; TYPE_2__* netdev; TYPE_1__* pdev; } ;
struct TYPE_14__ {int rx_buf_len; int dma; int count; } ;
struct TYPE_12__ {int dma; int count; } ;
struct TYPE_10__ {int vsi_id; } ;
struct TYPE_9__ {scalar_t__ mtu; } ;
struct TYPE_8__ {int dev; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (struct iavf_adapter*,scalar_t__,int *,size_t) ;
 int FUNC_4 (struct virtchnl_vsi_queue_config_info*) ;
 struct virtchnl_vsi_queue_config_info* FUNC_5 (size_t,int ) ;
 int VAR_10 ;
 size_t FUNC_6 (struct virtchnl_vsi_queue_config_info*,int ,int) ;

void FUNC_7(struct iavf_adapter *VAR_11)
{
 struct virtchnl_vsi_queue_config_info *VAR_12;
 struct virtchnl_queue_pair_info *VAR_13;
 int VAR_14 = VAR_11->num_active_queues;
 int VAR_15, VAR_16 = VAR_4;
 size_t VAR_17;

 if (VAR_11->current_op != VAR_9) {

  FUNC_2(&VAR_11->pdev->dev, "Cannot configure queues, command %d pending\n",
   VAR_11->current_op);
  return;
 }
 VAR_11->current_op = VAR_8;
 VAR_17 = FUNC_6(VAR_12, VAR_10, VAR_14);
 VAR_12 = FUNC_5(VAR_17, VAR_1);
 if (!VAR_12)
  return;


 if (!(VAR_11->flags & VAR_3) &&
     (VAR_11->netdev->mtu <= VAR_0))
  VAR_16 = VAR_5 - VAR_7;

 VAR_12->vsi_id = VAR_11->vsi_res->vsi_id;
 VAR_12->num_queue_pairs = VAR_14;
 VAR_13 = VAR_12->qpair;



 for (VAR_15 = 0; VAR_15 < VAR_14; VAR_15++) {
  VAR_13->txq.vsi_id = VAR_12->vsi_id;
  VAR_13->txq.queue_id = VAR_15;
  VAR_13->txq.ring_len = VAR_11->tx_rings[VAR_15].count;
  VAR_13->txq.dma_ring_addr = VAR_11->tx_rings[VAR_15].dma;
  VAR_13->rxq.vsi_id = VAR_12->vsi_id;
  VAR_13->rxq.queue_id = VAR_15;
  VAR_13->rxq.ring_len = VAR_11->rx_rings[VAR_15].count;
  VAR_13->rxq.dma_ring_addr = VAR_11->rx_rings[VAR_15].dma;
  VAR_13->rxq.max_pkt_size = VAR_16;
  VAR_13->rxq.databuffer_size =
   FUNC_0(VAR_11->rx_rings[VAR_15].rx_buf_len,
         FUNC_1(VAR_6));
  VAR_13++;
 }

 VAR_11->aq_required &= ~VAR_2;
 FUNC_3(VAR_11, VAR_8,
    (u8 *)VAR_12, VAR_17);
 FUNC_4(VAR_12);
}
