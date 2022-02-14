
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sk_buff {int len; int data; } ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {unsigned int cur_tx; int dirty_tx; int tx_ring_size; int lock; TYPE_2__* tx_ring; TYPE_1__* tx_buffers; int pdev; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {void* status; void* length; void* buffer1; } ;
struct TYPE_3__ {int mapping; size_t hdrlen; struct sk_buff* skb; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct ieee80211_hw*,int ) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_8, struct sk_buff *VAR_9,
      u16 VAR_10,
      size_t VAR_11)
{
 struct adm8211_priv *VAR_12 = VAR_8->priv;
 unsigned long VAR_13;
 dma_addr_t VAR_14;
 unsigned int VAR_15;
 u32 VAR_16;

 VAR_14 = FUNC_4(VAR_12->pdev, VAR_9->data, VAR_9->len,
     VAR_1);
 if (FUNC_3(VAR_12->pdev, VAR_14))
  return -VAR_0;

 FUNC_5(&VAR_12->lock, VAR_13);

 if (VAR_12->cur_tx - VAR_12->dirty_tx == VAR_12->tx_ring_size / 2)
  VAR_16 = VAR_4 | VAR_5 | VAR_3;
 else
  VAR_16 = VAR_5 | VAR_3;

 if (VAR_12->cur_tx - VAR_12->dirty_tx == VAR_12->tx_ring_size - 2)
  FUNC_2(VAR_8, 0);

 VAR_15 = VAR_12->cur_tx % VAR_12->tx_ring_size;

 VAR_12->tx_buffers[VAR_15].skb = VAR_9;
 VAR_12->tx_buffers[VAR_15].mapping = VAR_14;
 VAR_12->tx_buffers[VAR_15].hdrlen = VAR_11;
 VAR_12->tx_ring[VAR_15].buffer1 = FUNC_1(VAR_14);

 if (VAR_15 == VAR_12->tx_ring_size - 1)
  VAR_16 |= VAR_6;
 VAR_12->tx_ring[VAR_15].length = FUNC_1(VAR_16 | VAR_9->len);


 VAR_16 = VAR_2 | (VAR_10 << 20) | 8 ;
 VAR_12->tx_ring[VAR_15].status = FUNC_1(VAR_16);

 VAR_12->cur_tx++;

 FUNC_6(&VAR_12->lock, VAR_13);


 FUNC_0(VAR_7, 0);

 return 0;
}
