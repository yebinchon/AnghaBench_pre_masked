
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct fec_enet_private {unsigned int num_rx_queues; unsigned int num_tx_queues; struct fec_enet_priv_tx_q** tx_queue; scalar_t__ rx_align; TYPE_1__* pdev; struct fec_enet_priv_rx_q** rx_queue; } ;
struct TYPE_5__ {unsigned int ring_size; struct bufdesc* base; } ;
struct fec_enet_priv_tx_q {struct sk_buff** tx_skbuff; int ** tx_bounce; TYPE_2__ bd; } ;
struct TYPE_6__ {unsigned int ring_size; struct bufdesc* base; } ;
struct fec_enet_priv_rx_q {TYPE_3__ bd; struct sk_buff** rx_skbuff; } ;
struct bufdesc {int cbd_bufaddr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int ,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 struct bufdesc* FUNC_3 (struct bufdesc*,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 struct fec_enet_private* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_2)
{
 struct fec_enet_private *VAR_3 = FUNC_5(VAR_2);
 unsigned int VAR_4;
 struct sk_buff *VAR_5;
 struct bufdesc *VAR_6;
 struct fec_enet_priv_tx_q *VAR_7;
 struct fec_enet_priv_rx_q *VAR_8;
 unsigned int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_3->num_rx_queues; VAR_9++) {
  VAR_8 = VAR_3->rx_queue[VAR_9];
  VAR_6 = VAR_8->bd.base;
  for (VAR_4 = 0; VAR_4 < VAR_8->bd.ring_size; VAR_4++) {
   VAR_5 = VAR_8->rx_skbuff[VAR_4];
   VAR_8->rx_skbuff[VAR_4] = ((void*)0);
   if (VAR_5) {
    FUNC_1(&VAR_3->pdev->dev,
       FUNC_2(VAR_6->cbd_bufaddr),
       VAR_1 - VAR_3->rx_align,
       VAR_0);
    FUNC_0(VAR_5);
   }
   VAR_6 = FUNC_3(VAR_6, &VAR_8->bd);
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_3->num_tx_queues; VAR_9++) {
  VAR_7 = VAR_3->tx_queue[VAR_9];
  VAR_6 = VAR_7->bd.base;
  for (VAR_4 = 0; VAR_4 < VAR_7->bd.ring_size; VAR_4++) {
   FUNC_4(VAR_7->tx_bounce[VAR_4]);
   VAR_7->tx_bounce[VAR_4] = ((void*)0);
   VAR_5 = VAR_7->tx_skbuff[VAR_4];
   VAR_7->tx_skbuff[VAR_4] = ((void*)0);
   FUNC_0(VAR_5);
  }
 }
}
