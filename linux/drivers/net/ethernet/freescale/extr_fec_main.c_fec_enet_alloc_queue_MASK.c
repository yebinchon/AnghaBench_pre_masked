
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {int num_tx_queues; int num_rx_queues; TYPE_4__** rx_queue; int total_rx_ring_size; TYPE_1__* pdev; struct fec_enet_priv_tx_q** tx_queue; int total_tx_ring_size; } ;
struct TYPE_6__ {int ring_size; } ;
struct fec_enet_priv_tx_q {int tx_stop_threshold; int tx_wake_threshold; int tso_hdrs; int tso_hdrs_dma; TYPE_2__ bd; } ;
struct TYPE_7__ {scalar_t__ ring_size; } ;
struct TYPE_8__ {TYPE_3__ bd; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int,int *,int ) ;
 int FUNC_1 (struct net_device*) ;
 void* FUNC_2 (int,int ) ;
 struct fec_enet_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_6)
{
 struct fec_enet_private *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;
 int VAR_9 = 0;
 struct fec_enet_priv_tx_q *VAR_10;

 for (VAR_8 = 0; VAR_8 < VAR_7->num_tx_queues; VAR_8++) {
  VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_2);
  if (!VAR_10) {
   VAR_9 = -VAR_0;
   goto alloc_failed;
  }

  VAR_7->tx_queue[VAR_8] = VAR_10;
  VAR_10->bd.ring_size = VAR_5;
  VAR_7->total_tx_ring_size += VAR_7->tx_queue[VAR_8]->bd.ring_size;

  VAR_10->tx_stop_threshold = VAR_1;
  VAR_10->tx_wake_threshold =
   (VAR_10->bd.ring_size - VAR_10->tx_stop_threshold) / 2;

  VAR_10->tso_hdrs = FUNC_0(&VAR_7->pdev->dev,
     VAR_10->bd.ring_size * VAR_4,
     &VAR_10->tso_hdrs_dma,
     VAR_2);
  if (!VAR_10->tso_hdrs) {
   VAR_9 = -VAR_0;
   goto alloc_failed;
  }
 }

 for (VAR_8 = 0; VAR_8 < VAR_7->num_rx_queues; VAR_8++) {
  VAR_7->rx_queue[VAR_8] = FUNC_2(sizeof(*VAR_7->rx_queue[VAR_8]),
        VAR_2);
  if (!VAR_7->rx_queue[VAR_8]) {
   VAR_9 = -VAR_0;
   goto alloc_failed;
  }

  VAR_7->rx_queue[VAR_8]->bd.ring_size = VAR_3;
  VAR_7->total_rx_ring_size += VAR_7->rx_queue[VAR_8]->bd.ring_size;
 }
 return VAR_9;

alloc_failed:
 FUNC_1(VAR_6);
 return VAR_9;
}
