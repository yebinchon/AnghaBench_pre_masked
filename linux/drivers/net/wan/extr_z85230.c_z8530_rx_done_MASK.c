
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct z8530_channel {int rxdma_on; int dma_ready; unsigned char** rx_buf; size_t dma_num; int mtu; int count; int max; TYPE_2__* netdevice; int (* rx_function ) (struct z8530_channel*,struct sk_buff*) ;struct sk_buff* skb2; struct sk_buff* skb; int dptr; int rxdma; } ;
struct sk_buff {int data; } ;
struct TYPE_4__ {int rx_bytes; int rx_dropped; int rx_packets; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct sk_buff*,unsigned char*,int) ;
 int FUNC_13 (struct sk_buff*,int) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct z8530_channel*,struct sk_buff*) ;
 int FUNC_16 (unsigned char*) ;
 int FUNC_17 (struct z8530_channel*,int ,int ) ;

__attribute__((used)) static void FUNC_18(struct z8530_channel *VAR_5)
{
 struct sk_buff *VAR_6;
 int VAR_7;





 if(VAR_5->rxdma_on)
 {





  int VAR_8=VAR_5->dma_ready;
  unsigned char *VAR_9=VAR_5->rx_buf[VAR_5->dma_num];
  unsigned long VAR_10;





  VAR_10=FUNC_0();

  FUNC_3(VAR_5->rxdma);
  FUNC_1(VAR_5->rxdma);
  VAR_5->rxdma_on=0;
  VAR_7=VAR_5->mtu-FUNC_5(VAR_5->rxdma);
  if(VAR_7<0)
   VAR_7=2;
  VAR_5->dma_ready=0;






  if(VAR_8)
  {
   VAR_5->dma_num^=1;
   FUNC_11(VAR_5->rxdma, VAR_0|0x10);
   FUNC_9(VAR_5->rxdma, FUNC_16(VAR_5->rx_buf[VAR_5->dma_num]));
   FUNC_10(VAR_5->rxdma, VAR_5->mtu);
   VAR_5->rxdma_on = 1;
   FUNC_4(VAR_5->rxdma);


   FUNC_17(VAR_5, VAR_1, VAR_2);
  }
  else


   FUNC_7(VAR_5->netdevice, "DMA flip overrun!\n");

  FUNC_8(VAR_10);
  VAR_6 = FUNC_2(VAR_7);
  if (VAR_6 == ((void*)0)) {
   VAR_5->netdevice->stats.rx_dropped++;
   FUNC_7(VAR_5->netdevice, "Memory squeeze\n");
  } else {
   FUNC_13(VAR_6, VAR_7);
   FUNC_12(VAR_6, VAR_9, VAR_7);
   VAR_5->netdevice->stats.rx_packets++;
   VAR_5->netdevice->stats.rx_bytes += VAR_7;
  }
  VAR_5->dma_ready = 1;
 } else {
  VAR_3;
  VAR_6 = VAR_5->skb;
  VAR_7=VAR_5->count;

  VAR_5->skb = VAR_5->skb2;
  VAR_5->count = 0;
  VAR_5->max = VAR_5->mtu;
  if (VAR_5->skb) {
   VAR_5->dptr = VAR_5->skb->data;
   VAR_5->max = VAR_5->mtu;
  } else {
   VAR_5->count = 0;
   VAR_5->max = 0;
  }
  VAR_4;

  VAR_5->skb2 = FUNC_2(VAR_5->mtu);
  if (VAR_5->skb2 == ((void*)0))
   FUNC_7(VAR_5->netdevice, "memory squeeze\n");
  else
   FUNC_13(VAR_5->skb2, VAR_5->mtu);
  VAR_5->netdevice->stats.rx_packets++;
  VAR_5->netdevice->stats.rx_bytes += VAR_7;
 }



 if (VAR_6) {
  FUNC_14(VAR_6, VAR_7);
  VAR_5->rx_function(VAR_5, VAR_6);
 } else {
  VAR_5->netdevice->stats.rx_dropped++;
  FUNC_6(VAR_5->netdevice, "Lost a frame\n");
 }
}
