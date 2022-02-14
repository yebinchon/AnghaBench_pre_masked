
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int len; int data; } ;
struct TYPE_4__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct bcm_enet_priv {size_t tx_curr_desc; int dma_desc_shift; size_t tx_ring_size; int tx_lock; int tx_desc_count; int tx_chan; int dma_chan_en_mask; TYPE_1__* pdev; struct sk_buff** tx_skb; struct bcm_enet_desc* tx_desc_cpu; scalar_t__ enet_is_sw; } ;
struct bcm_enet_desc {int len_stat; int address; } ;
typedef int netdev_tx_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,int,int ) ;
 int FUNC_3 (struct bcm_enet_priv*,int ,int ,int ) ;
 struct bcm_enet_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 struct sk_buff* FUNC_6 (struct sk_buff*,int ,int,int ) ;
 char* FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 () ;

__attribute__((used)) static netdev_tx_t
FUNC_13(struct sk_buff *VAR_11, struct net_device *VAR_12)
{
 struct bcm_enet_priv *VAR_13;
 struct bcm_enet_desc *VAR_14;
 u32 VAR_15;
 netdev_tx_t VAR_16;

 VAR_13 = FUNC_4(VAR_12);


 FUNC_9(&VAR_13->tx_lock);



 if (FUNC_11(!VAR_13->tx_desc_count)) {
  FUNC_5(VAR_12);
  FUNC_0(&VAR_13->pdev->dev, "xmit called with no tx desc "
   "available?\n");
  VAR_16 = VAR_9;
  goto out_unlock;
 }


 if (VAR_13->enet_is_sw && VAR_11->len < 64) {
  int VAR_17 = 64 - VAR_11->len;
  char *VAR_18;

  if (FUNC_11(FUNC_8(VAR_11) < VAR_17)) {
   struct sk_buff *VAR_19;

   VAR_19 = FUNC_6(VAR_11, 0, VAR_17, VAR_8);
   if (!VAR_19) {
    VAR_16 = VAR_9;
    goto out_unlock;
   }
   FUNC_1(VAR_11);
   VAR_11 = VAR_19;
  }
  VAR_18 = FUNC_7(VAR_11, VAR_17);
 }


 VAR_14 = &VAR_13->tx_desc_cpu[VAR_13->tx_curr_desc];
 VAR_13->tx_skb[VAR_13->tx_curr_desc] = VAR_11;


 VAR_14->address = FUNC_2(&VAR_13->pdev->dev, VAR_11->data, VAR_11->len,
           VAR_6);

 VAR_15 = (VAR_11->len << VAR_3) & VAR_2;
 VAR_15 |= (VAR_1 >> VAR_13->dma_desc_shift) |
  VAR_0 |
  VAR_4;

 VAR_13->tx_curr_desc++;
 if (VAR_13->tx_curr_desc == VAR_13->tx_ring_size) {
  VAR_13->tx_curr_desc = 0;
  VAR_15 |= (VAR_5 >> VAR_13->dma_desc_shift);
 }
 VAR_13->tx_desc_count--;



 FUNC_12();
 VAR_14->len_stat = VAR_15;
 FUNC_12();


 FUNC_3(VAR_13, VAR_13->dma_chan_en_mask,
     VAR_7, VAR_13->tx_chan);


 if (!VAR_13->tx_desc_count)
  FUNC_5(VAR_12);

 VAR_12->stats.tx_bytes += VAR_11->len;
 VAR_12->stats.tx_packets++;
 VAR_16 = VAR_10;

out_unlock:
 FUNC_10(&VAR_13->tx_lock);
 return VAR_16;
}
