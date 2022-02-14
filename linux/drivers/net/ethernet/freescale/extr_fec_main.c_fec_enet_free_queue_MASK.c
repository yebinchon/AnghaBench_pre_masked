
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {int num_tx_queues; int num_rx_queues; struct fec_enet_priv_tx_q** tx_queue; struct fec_enet_priv_tx_q** rx_queue; TYPE_1__* pdev; } ;
struct TYPE_4__ {int ring_size; } ;
struct fec_enet_priv_tx_q {int tso_hdrs_dma; scalar_t__ tso_hdrs; TYPE_2__ bd; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (struct fec_enet_priv_tx_q*) ;
 struct fec_enet_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1)
{
 struct fec_enet_private *VAR_2 = FUNC_2(VAR_1);
 int VAR_3;
 struct fec_enet_priv_tx_q *VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_queues; VAR_3++)
  if (VAR_2->tx_queue[VAR_3] && VAR_2->tx_queue[VAR_3]->tso_hdrs) {
   VAR_4 = VAR_2->tx_queue[VAR_3];
   FUNC_0(&VAR_2->pdev->dev,
       VAR_4->bd.ring_size * VAR_0,
       VAR_4->tso_hdrs,
       VAR_4->tso_hdrs_dma);
  }

 for (VAR_3 = 0; VAR_3 < VAR_2->num_rx_queues; VAR_3++)
  FUNC_1(VAR_2->rx_queue[VAR_3]);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_queues; VAR_3++)
  FUNC_1(VAR_2->tx_queue[VAR_3]);
}
