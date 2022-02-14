
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int data; } ;
struct mwl8k_rx_queue {scalar_t__ rxd_count; scalar_t__ tail; void* rxd; TYPE_2__* buf; } ;
struct mwl8k_priv {TYPE_1__* rxd_ops; int pdev; struct mwl8k_rx_queue* rxq; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {struct sk_buff* skb; } ;
struct TYPE_3__ {int rxd_size; int (* rxd_refill ) (void*,int ,int ) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (void*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_4, int VAR_5, int VAR_6)
{
 struct mwl8k_priv *VAR_7 = VAR_4->priv;
 struct mwl8k_rx_queue *VAR_8 = VAR_7->rxq + VAR_5;
 int VAR_9;

 VAR_9 = 0;
 while (VAR_8->rxd_count < VAR_1 && VAR_6--) {
  struct sk_buff *VAR_10;
  dma_addr_t VAR_11;
  int VAR_12;
  void *VAR_13;

  VAR_10 = FUNC_0(VAR_2);
  if (VAR_10 == ((void*)0))
   break;

  VAR_11 = FUNC_2(VAR_7->pdev, VAR_10->data,
          VAR_2, VAR_0);

  VAR_8->rxd_count++;
  VAR_12 = VAR_8->tail++;
  if (VAR_8->tail == VAR_1)
   VAR_8->tail = 0;
  VAR_8->buf[VAR_12].skb = VAR_10;
  FUNC_1(&VAR_8->buf[VAR_12], VAR_3, VAR_11);

  VAR_13 = VAR_8->rxd + (VAR_12 * VAR_7->rxd_ops->rxd_size);
  VAR_7->rxd_ops->rxd_refill(VAR_13, VAR_11, VAR_2);

  VAR_9++;
 }

 return VAR_9;
}
