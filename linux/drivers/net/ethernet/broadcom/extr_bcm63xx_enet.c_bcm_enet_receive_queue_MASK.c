
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; int data; } ;
struct TYPE_4__ {unsigned int rx_bytes; int rx_packets; int rx_dropped; int rx_fifo_errors; int rx_frame_errors; int rx_crc_errors; int rx_length_errors; int rx_errors; } ;
struct net_device {TYPE_2__ stats; } ;
struct device {int dummy; } ;
struct bcm_enet_priv {int rx_desc_count; int rx_curr_desc; int rx_ring_size; int dma_desc_shift; int rx_chan; int dma_chan_en_mask; struct sk_buff** rx_skb; int rx_skb_size; TYPE_1__* pdev; int napi; int enet_is_sw; struct bcm_enet_desc* rx_desc_cpu; } ;
struct bcm_enet_desc {int len_stat; int address; } ;
struct TYPE_3__ {struct device dev; } ;


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
 int FUNC_0 (struct net_device*) ;
 unsigned int VAR_11 ;
 int FUNC_1 (struct device*,int ,unsigned int,int ) ;
 int FUNC_2 (struct device*,int ,unsigned int,int ) ;
 int FUNC_3 (struct device*,int ,int ,int ) ;
 int FUNC_4 (struct bcm_enet_priv*,int ,int ,int ) ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (int ,int ,unsigned int) ;
 struct sk_buff* FUNC_7 (int *,unsigned int) ;
 struct bcm_enet_priv* FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_12, int VAR_13)
{
 struct bcm_enet_priv *VAR_14;
 struct device *VAR_15;
 int VAR_16;

 VAR_14 = FUNC_8(VAR_12);
 VAR_15 = &VAR_14->pdev->dev;
 VAR_16 = 0;



 if (VAR_13 > VAR_14->rx_desc_count)
  VAR_13 = VAR_14->rx_desc_count;

 do {
  struct bcm_enet_desc *VAR_17;
  struct sk_buff *VAR_18;
  int VAR_19;
  u32 VAR_20;
  unsigned int VAR_21;

  VAR_19 = VAR_14->rx_curr_desc;
  VAR_17 = &VAR_14->rx_desc_cpu[VAR_19];



  FUNC_10();

  VAR_20 = VAR_17->len_stat;


  if (VAR_20 & VAR_7)
   break;

  VAR_16++;
  VAR_14->rx_curr_desc++;
  if (VAR_14->rx_curr_desc == VAR_14->rx_ring_size)
   VAR_14->rx_curr_desc = 0;
  VAR_14->rx_desc_count--;



  if ((VAR_20 & (VAR_2 >> VAR_14->dma_desc_shift)) !=
   (VAR_2 >> VAR_14->dma_desc_shift)) {
   VAR_12->stats.rx_dropped++;
   continue;
  }


  if (!VAR_14->enet_is_sw &&
      FUNC_12(VAR_20 & VAR_1)) {
   VAR_12->stats.rx_errors++;

   if (VAR_20 & VAR_5)
    VAR_12->stats.rx_length_errors++;
   if (VAR_20 & VAR_0)
    VAR_12->stats.rx_crc_errors++;
   if (VAR_20 & VAR_8)
    VAR_12->stats.rx_frame_errors++;
   if (VAR_20 & VAR_6)
    VAR_12->stats.rx_fifo_errors++;
   continue;
  }


  VAR_18 = VAR_14->rx_skb[VAR_19];
  VAR_21 = (VAR_20 & VAR_3) >> VAR_4;

  VAR_21 -= 4;

  if (VAR_21 < VAR_11) {
   struct sk_buff *VAR_22;

   VAR_22 = FUNC_7(&VAR_14->napi, VAR_21);
   if (!VAR_22) {

    VAR_12->stats.rx_dropped++;
    continue;
   }

   FUNC_1(VAR_15, VAR_17->address,
      VAR_21, VAR_9);
   FUNC_6(VAR_22->data, VAR_18->data, VAR_21);
   FUNC_2(VAR_15, VAR_17->address,
         VAR_21, VAR_9);
   VAR_18 = VAR_22;
  } else {
   FUNC_3(&VAR_14->pdev->dev, VAR_17->address,
      VAR_14->rx_skb_size, VAR_9);
   VAR_14->rx_skb[VAR_19] = ((void*)0);
  }

  FUNC_11(VAR_18, VAR_21);
  VAR_18->protocol = FUNC_5(VAR_18, VAR_12);
  VAR_12->stats.rx_packets++;
  VAR_12->stats.rx_bytes += VAR_21;
  FUNC_9(VAR_18);

 } while (--VAR_13 > 0);

 if (VAR_16 || !VAR_14->rx_desc_count) {
  FUNC_0(VAR_12);


  FUNC_4(VAR_14, VAR_14->dma_chan_en_mask,
      VAR_10, VAR_14->rx_chan);
 }

 return VAR_16;
}
