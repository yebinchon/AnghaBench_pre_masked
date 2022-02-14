
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct z8530_channel {size_t tx_dma_used; int lock; struct sk_buff* tx_next_skb; scalar_t__ tx_next_ptr; scalar_t__* tx_dma_buf; scalar_t__ dma_tx; int netdevice; } ;
struct sk_buff {scalar_t__ data; scalar_t__ len; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,unsigned long) ;
 int FUNC_4 (int ,unsigned long) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct z8530_channel*) ;

netdev_tx_t FUNC_7(struct z8530_channel *VAR_4, struct sk_buff *VAR_5)
{
 unsigned long VAR_6;

 FUNC_0(VAR_4->netdevice);
 if(VAR_4->tx_next_skb)
  return VAR_0;
 if(VAR_4->dma_tx && ((unsigned long)(FUNC_5(VAR_5->data+VAR_5->len))>=16*1024*1024 || FUNC_2(VAR_5)))
 {







  VAR_4->tx_next_ptr=VAR_4->tx_dma_buf[VAR_4->tx_dma_used];
  VAR_4->tx_dma_used^=1;
  FUNC_1(VAR_5, VAR_4->tx_next_ptr, VAR_5->len);
 }
 else
  VAR_4->tx_next_ptr=VAR_5->data;
 VAR_2;
 VAR_4->tx_next_skb=VAR_5;
 VAR_3;

 FUNC_3(VAR_4->lock, VAR_6);
 FUNC_6(VAR_4);
 FUNC_4(VAR_4->lock, VAR_6);

 return VAR_1;
}
