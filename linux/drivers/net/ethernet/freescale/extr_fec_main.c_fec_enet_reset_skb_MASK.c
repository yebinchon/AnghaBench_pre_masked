
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {int num_tx_queues; struct fec_enet_priv_tx_q** tx_queue; } ;
struct TYPE_2__ {int ring_size; } ;
struct fec_enet_priv_tx_q {int ** tx_skbuff; TYPE_1__ bd; } ;


 int FUNC_0 (int *) ;
 struct fec_enet_private* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 struct fec_enet_private *VAR_1 = FUNC_1(VAR_0);
 struct fec_enet_priv_tx_q *VAR_2;
 int VAR_3, VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_tx_queues; VAR_3++) {
  VAR_2 = VAR_1->tx_queue[VAR_3];

  for (VAR_4 = 0; VAR_4 < VAR_2->bd.ring_size; VAR_4++) {
   if (VAR_2->tx_skbuff[VAR_4]) {
    FUNC_0(VAR_2->tx_skbuff[VAR_4]);
    VAR_2->tx_skbuff[VAR_4] = ((void*)0);
   }
  }
 }
}
