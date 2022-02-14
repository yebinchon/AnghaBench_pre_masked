
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u32 ;
struct slic_rx_queue {size_t done_idx; size_t put_idx; int len; struct slic_rx_buffer* rxbuffs; } ;
struct slic_rx_desc {int length; int status; } ;
struct slic_rx_buffer {struct sk_buff* skb; scalar_t__ addr_offset; } ;
struct TYPE_4__ {unsigned int rx_bytes; unsigned int rx_packets; int syncp; } ;
struct slic_device {TYPE_2__ stats; int napi; TYPE_1__* pdev; struct net_device* netdev; struct slic_rx_queue rxq; } ;
struct sk_buff {int ip_summed; int protocol; scalar_t__ data; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_dest; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int *,int ,scalar_t__,int ) ;
 int FUNC_3 (int *,int ,scalar_t__,int ) ;
 int FUNC_4 (struct slic_rx_buffer*,int ) ;
 int FUNC_5 (struct slic_rx_buffer*,int ) ;
 int FUNC_6 (int *,int ,int ,int ) ;
 int FUNC_7 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_8 (int ) ;
 unsigned int FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (int *,struct sk_buff*) ;
 int VAR_9 ;
 int FUNC_11 (struct sk_buff*,unsigned int) ;
 int FUNC_12 (struct sk_buff*,int ) ;
 int FUNC_13 (struct slic_device*,struct sk_buff*) ;
 size_t FUNC_14 (size_t,int ) ;
 int FUNC_15 (struct slic_device*,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (unsigned int) ;

__attribute__((used)) static void FUNC_19(struct slic_device *VAR_10, unsigned int VAR_11,
    unsigned int *VAR_12)
{
 struct slic_rx_queue *VAR_13 = &VAR_10->rxq;
 struct net_device *VAR_14 = VAR_10->netdev;
 struct slic_rx_buffer *VAR_15;
 struct slic_rx_desc *VAR_16;
 unsigned int VAR_17 = 0;
 unsigned int VAR_18 = 0;
 struct sk_buff *VAR_19;
 u32 VAR_20;
 u32 VAR_21;

 while (VAR_11 && (VAR_13->done_idx != VAR_13->put_idx)) {
  VAR_15 = &VAR_13->rxbuffs[VAR_13->done_idx];

  VAR_19 = VAR_15->skb;
  if (!VAR_19)
   break;

  VAR_16 = (struct slic_rx_desc *)VAR_19->data;

  FUNC_2(&VAR_10->pdev->dev,
     FUNC_4(VAR_15, VAR_7),
     VAR_15->addr_offset + sizeof(*VAR_16),
     VAR_1);

  VAR_20 = FUNC_9(VAR_16->status);
  if (!(VAR_20 & VAR_5)) {
   FUNC_3(&VAR_10->pdev->dev,
         FUNC_4(VAR_15,
          VAR_7),
         VAR_15->addr_offset +
         sizeof(*VAR_16),
         VAR_1);
   break;
  }

  VAR_15->skb = ((void*)0);

  FUNC_6(&VAR_10->pdev->dev,
     FUNC_4(VAR_15, VAR_7),
     FUNC_5(VAR_15, VAR_8),
     VAR_1);


  FUNC_12(VAR_19, VAR_6);

  if (FUNC_18(VAR_20 & VAR_3)) {
   FUNC_13(VAR_10, VAR_19);
   FUNC_1(VAR_19);
  } else {
   struct ethhdr *VAR_22 = (struct ethhdr *)VAR_19->data;

   if (FUNC_8(VAR_22->h_dest))
    FUNC_0(&VAR_10->stats, VAR_9);

   VAR_21 = FUNC_9(VAR_16->length) & VAR_4;
   FUNC_11(VAR_19, VAR_21);
   VAR_19->protocol = FUNC_7(VAR_19, VAR_14);
   VAR_19->ip_summed = VAR_0;

   FUNC_10(&VAR_10->napi, VAR_19);

   VAR_18 += VAR_21;
   VAR_17++;
  }
  VAR_13->done_idx = FUNC_14(VAR_13->done_idx, VAR_13->len);
  VAR_11--;
 }

 FUNC_16(&VAR_10->stats.syncp);
 VAR_10->stats.rx_bytes += VAR_18;
 VAR_10->stats.rx_packets += VAR_17;
 FUNC_17(&VAR_10->stats.syncp);

 FUNC_15(VAR_10, VAR_2);
}
