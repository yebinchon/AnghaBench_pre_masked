
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct ravb_tx_desc {int dummy; } ;
struct ravb_private {int num_tx_desc; int rx_buf_sz; int* num_rx_ring; int* num_tx_ring; void** tx_ring; int * tx_desc_dma; scalar_t__* dirty_rx; void** rx_ring; int * rx_desc_dma; int * tx_align; struct sk_buff*** rx_skb; void** tx_skb; } ;
struct ravb_ex_rx_desc {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct net_device {int mtu; TYPE_1__ dev; } ;
typedef int __sum16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int ,int,int *,int ) ;
 void* FUNC_1 (int,int,int ) ;
 int FUNC_2 (int,int ) ;
 struct sk_buff* FUNC_3 (struct net_device*,int) ;
 struct ravb_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_7, int VAR_8)
{
 struct ravb_private *VAR_9 = FUNC_4(VAR_7);
 int VAR_10 = VAR_9->num_tx_desc;
 struct sk_buff *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_9->rx_buf_sz = (VAR_7->mtu <= 1492 ? VAR_4 : VAR_7->mtu) +
  VAR_2 + VAR_6 + sizeof(__sum16);


 VAR_9->rx_skb[VAR_8] = FUNC_1(VAR_9->num_rx_ring[VAR_8],
      sizeof(*VAR_9->rx_skb[VAR_8]), VAR_3);
 VAR_9->tx_skb[VAR_8] = FUNC_1(VAR_9->num_tx_ring[VAR_8],
      sizeof(*VAR_9->tx_skb[VAR_8]), VAR_3);
 if (!VAR_9->rx_skb[VAR_8] || !VAR_9->tx_skb[VAR_8])
  goto error;

 for (VAR_13 = 0; VAR_13 < VAR_9->num_rx_ring[VAR_8]; VAR_13++) {
  VAR_11 = FUNC_3(VAR_7, VAR_9->rx_buf_sz + VAR_5 - 1);
  if (!VAR_11)
   goto error;
  FUNC_6(VAR_11);
  VAR_9->rx_skb[VAR_8][VAR_13] = VAR_11;
 }

 if (VAR_10 > 1) {

  VAR_9->tx_align[VAR_8] = FUNC_2(VAR_0 * VAR_9->num_tx_ring[VAR_8] +
         VAR_0 - 1, VAR_3);
  if (!VAR_9->tx_align[VAR_8])
   goto error;
 }


 VAR_12 = sizeof(struct ravb_ex_rx_desc) * (VAR_9->num_rx_ring[VAR_8] + 1);
 VAR_9->rx_ring[VAR_8] = FUNC_0(VAR_7->dev.parent, VAR_12,
           &VAR_9->rx_desc_dma[VAR_8],
           VAR_3);
 if (!VAR_9->rx_ring[VAR_8])
  goto error;

 VAR_9->dirty_rx[VAR_8] = 0;


 VAR_12 = sizeof(struct ravb_tx_desc) *
      (VAR_9->num_tx_ring[VAR_8] * VAR_10 + 1);
 VAR_9->tx_ring[VAR_8] = FUNC_0(VAR_7->dev.parent, VAR_12,
           &VAR_9->tx_desc_dma[VAR_8],
           VAR_3);
 if (!VAR_9->tx_ring[VAR_8])
  goto error;

 return 0;

error:
 FUNC_5(VAR_7, VAR_8);

 return -VAR_1;
}
