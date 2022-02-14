
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_eth_rxdesc {void* addr; void* status; } ;
struct sh_eth_private {int num_rx_ring; int num_tx_ring; int ** tx_skbuff; int ** rx_skbuff; struct sh_eth_rxdesc* rx_ring; } ;
struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct sh_eth_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sh_eth_private*,int ,struct net_device*,char*,int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_8(struct net_device *VAR_2)
{
 struct sh_eth_private *VAR_3 = FUNC_2(VAR_2);
 struct sh_eth_rxdesc *VAR_4;
 int VAR_5;

 FUNC_5(VAR_2);

 FUNC_3(VAR_3, VAR_1, VAR_2,
    "transmit timed out, status %8.8x, resetting...\n",
    FUNC_7(VAR_2, VAR_0));


 VAR_2->stats.tx_errors++;


 for (VAR_5 = 0; VAR_5 < VAR_3->num_rx_ring; VAR_5++) {
  VAR_4 = &VAR_3->rx_ring[VAR_5];
  VAR_4->status = FUNC_0(0);
  VAR_4->addr = FUNC_0(0xBADF00D0);
  FUNC_1(VAR_3->rx_skbuff[VAR_5]);
  VAR_3->rx_skbuff[VAR_5] = ((void*)0);
 }
 for (VAR_5 = 0; VAR_5 < VAR_3->num_tx_ring; VAR_5++) {
  FUNC_1(VAR_3->tx_skbuff[VAR_5]);
  VAR_3->tx_skbuff[VAR_5] = ((void*)0);
 }


 FUNC_6(VAR_2);

 FUNC_4(VAR_2);
}
