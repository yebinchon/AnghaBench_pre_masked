
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {scalar_t__ len; int protocol; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_length_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct hisi_femac_queue {size_t tail; size_t num; int * dma_phys; struct sk_buff** skb; } ;
struct hisi_femac_priv {int napi; int dev; scalar_t__ glb_base; scalar_t__ port_base; struct hisi_femac_queue rxq; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (struct hisi_femac_priv*) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 int FUNC_5 (struct net_device*,char*,size_t) ;
 struct hisi_femac_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sk_buff*,size_t) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_7, int VAR_8)
{
 struct hisi_femac_priv *VAR_9 = FUNC_6(VAR_7);
 struct hisi_femac_queue *VAR_10 = &VAR_9->rxq;
 struct sk_buff *VAR_11;
 dma_addr_t VAR_12;
 u32 VAR_13, VAR_14, VAR_15, VAR_16 = 0;

 VAR_14 = VAR_10->tail;
 while (FUNC_7(VAR_9->glb_base + VAR_2) & VAR_4) {
  VAR_13 = FUNC_7(VAR_9->port_base + VAR_3);
  VAR_15 = VAR_13 & VAR_6;
  VAR_15 -= VAR_1;


  FUNC_10(VAR_4, VAR_9->glb_base + VAR_2);

  VAR_16++;

  VAR_11 = VAR_10->skb[VAR_14];
  if (FUNC_9(!VAR_11)) {
   FUNC_5(VAR_7, "rx skb NULL. pos=%d\n", VAR_14);
   break;
  }
  VAR_10->skb[VAR_14] = ((void*)0);

  VAR_12 = VAR_10->dma_phys[VAR_14];
  FUNC_1(VAR_9->dev, VAR_12, VAR_5,
     VAR_0);
  FUNC_8(VAR_11, VAR_15);
  if (FUNC_9(VAR_11->len > VAR_5)) {
   FUNC_5(VAR_7, "rcv len err, len = %d\n", VAR_11->len);
   VAR_7->stats.rx_errors++;
   VAR_7->stats.rx_length_errors++;
   FUNC_0(VAR_11);
   goto next;
  }

  VAR_11->protocol = FUNC_2(VAR_11, VAR_7);
  FUNC_4(&VAR_9->napi, VAR_11);
  VAR_7->stats.rx_packets++;
  VAR_7->stats.rx_bytes += VAR_11->len;
next:
  VAR_14 = (VAR_14 + 1) % VAR_10->num;
  if (VAR_16 >= VAR_8)
   break;
 }
 VAR_10->tail = VAR_14;

 FUNC_3(VAR_9);

 return VAR_16;
}
