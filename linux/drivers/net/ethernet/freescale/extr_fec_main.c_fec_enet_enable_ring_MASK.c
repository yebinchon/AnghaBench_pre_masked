
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct fec_enet_private {int num_rx_queues; int num_tx_queues; scalar_t__ hwp; struct fec_enet_priv_tx_q** tx_queue; struct fec_enet_priv_rx_q** rx_queue; } ;
struct TYPE_4__ {int dma; } ;
struct fec_enet_priv_tx_q {TYPE_2__ bd; } ;
struct TYPE_3__ {int dma; } ;
struct fec_enet_priv_rx_q {TYPE_1__ bd; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int VAR_2 ;
 struct fec_enet_private* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_3)
{
 struct fec_enet_private *VAR_4 = FUNC_7(VAR_3);
 struct fec_enet_priv_tx_q *VAR_5;
 struct fec_enet_priv_rx_q *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->num_rx_queues; VAR_7++) {
  VAR_6 = VAR_4->rx_queue[VAR_7];
  FUNC_8(VAR_6->bd.dma, VAR_4->hwp + FUNC_3(VAR_7));
  FUNC_8(VAR_1, VAR_4->hwp + FUNC_2(VAR_7));


  if (VAR_7)
   FUNC_8(VAR_2 | FUNC_6(VAR_7),
          VAR_4->hwp + FUNC_1(VAR_7));
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->num_tx_queues; VAR_7++) {
  VAR_5 = VAR_4->tx_queue[VAR_7];
  FUNC_8(VAR_5->bd.dma, VAR_4->hwp + FUNC_4(VAR_7));


  if (VAR_7)
   FUNC_8(VAR_0 | FUNC_5(VAR_7),
          VAR_4->hwp + FUNC_0(VAR_7));
 }
}
