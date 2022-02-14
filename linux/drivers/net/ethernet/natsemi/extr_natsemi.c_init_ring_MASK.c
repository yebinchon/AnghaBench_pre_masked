
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_private {int cur_rx; int ** rx_skbuff; TYPE_2__* rx_ring; scalar_t__ ring_dma; TYPE_2__* rx_head_desc; scalar_t__ oom; scalar_t__ dirty_rx; TYPE_1__* tx_ring; int ** tx_skbuff; scalar_t__ cur_tx; scalar_t__ dirty_tx; } ;
struct netdev_desc {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {void* cmd_status; void* next_desc; } ;
struct TYPE_3__ {scalar_t__ cmd_status; void* next_desc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct net_device*) ;
 struct netdev_private* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_3)
{
 struct netdev_private *VAR_4 = FUNC_2(VAR_3);
 int VAR_5;


 VAR_4->dirty_tx = VAR_4->cur_tx = 0;
 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4->tx_skbuff[VAR_5] = ((void*)0);
  VAR_4->tx_ring[VAR_5].next_desc = FUNC_0(VAR_4->ring_dma
   +sizeof(struct netdev_desc)
   *((VAR_5+1)%VAR_2+VAR_1));
  VAR_4->tx_ring[VAR_5].cmd_status = 0;
 }


 VAR_4->dirty_rx = 0;
 VAR_4->cur_rx = VAR_1;
 VAR_4->oom = 0;
 FUNC_4(VAR_3);

 VAR_4->rx_head_desc = &VAR_4->rx_ring[0];





 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4->rx_ring[VAR_5].next_desc = FUNC_0(VAR_4->ring_dma
    +sizeof(struct netdev_desc)
    *((VAR_5+1)%VAR_1));
  VAR_4->rx_ring[VAR_5].cmd_status = FUNC_0(VAR_0);
  VAR_4->rx_skbuff[VAR_5] = ((void*)0);
 }
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);
}
