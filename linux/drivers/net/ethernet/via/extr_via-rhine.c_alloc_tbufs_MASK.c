
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tx_desc {int dummy; } ;
struct rhine_private {int tx_ring_dma; int quirks; TYPE_1__* tx_ring; int * tx_bufs; int ** tx_buf; int ** tx_skbuff; scalar_t__ cur_tx; scalar_t__ dirty_tx; } ;
struct net_device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* next_desc; void* desc_length; scalar_t__ tx_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;
 struct rhine_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(struct net_device* VAR_4)
{
 struct rhine_private *VAR_5 = FUNC_1(VAR_4);
 dma_addr_t VAR_6;
 int VAR_7;

 VAR_5->dirty_tx = VAR_5->cur_tx = 0;
 VAR_6 = VAR_5->tx_ring_dma;
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_5->tx_skbuff[VAR_7] = ((void*)0);
  VAR_5->tx_ring[VAR_7].tx_status = 0;
  VAR_5->tx_ring[VAR_7].desc_length = FUNC_0(VAR_1);
  VAR_6 += sizeof(struct tx_desc);
  VAR_5->tx_ring[VAR_7].next_desc = FUNC_0(VAR_6);
  if (VAR_5->quirks & VAR_3)
   VAR_5->tx_buf[VAR_7] = &VAR_5->tx_bufs[VAR_7 * VAR_0];
 }
 VAR_5->tx_ring[VAR_7-1].next_desc = FUNC_0(VAR_5->tx_ring_dma);

 FUNC_2(VAR_4);
}
