
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_2__ {scalar_t__ tx_bytes; int tx_packets; int tx_dropped; int tx_fifo_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct hisi_femac_queue {size_t head; int num; struct sk_buff** skb; scalar_t__* dma_phys; int tail; } ;
struct hisi_femac_priv {int tx_fifo_used_cnt; scalar_t__ port_base; int dev; struct hisi_femac_queue txq; } ;
typedef int netdev_tx_t ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (struct hisi_femac_priv*,int ) ;
 struct hisi_femac_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*,scalar_t__) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (scalar_t__,scalar_t__) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_9,
           struct net_device *VAR_10)
{
 struct hisi_femac_priv *VAR_11 = FUNC_5(VAR_10);
 struct hisi_femac_queue *VAR_12 = &VAR_11->txq;
 dma_addr_t VAR_13;
 u32 VAR_14;

 VAR_14 = FUNC_8(VAR_11->port_base + VAR_0);
 VAR_14 &= VAR_1;
 if (!VAR_14) {
  FUNC_4(VAR_11, VAR_6);
  VAR_10->stats.tx_dropped++;
  VAR_10->stats.tx_fifo_errors++;
  FUNC_7(VAR_10);
  return VAR_7;
 }

 if (FUNC_9(!FUNC_0(VAR_12->head, VAR_12->tail,
     VAR_12->num))) {
  FUNC_4(VAR_11, VAR_6);
  VAR_10->stats.tx_dropped++;
  VAR_10->stats.tx_fifo_errors++;
  FUNC_7(VAR_10);
  return VAR_7;
 }

 VAR_13 = FUNC_2(VAR_11->dev, VAR_9->data,
         VAR_9->len, VAR_2);
 if (FUNC_9(FUNC_3(VAR_11->dev, VAR_13))) {
  FUNC_1(VAR_9);
  VAR_10->stats.tx_dropped++;
  return VAR_8;
 }
 VAR_12->dma_phys[VAR_12->head] = VAR_13;

 VAR_12->skb[VAR_12->head] = VAR_9;
 VAR_12->head = (VAR_12->head + 1) % VAR_12->num;

 FUNC_10(VAR_13, VAR_11->port_base + VAR_4);
 FUNC_10(VAR_9->len + VAR_5, VAR_11->port_base + VAR_3);

 VAR_11->tx_fifo_used_cnt++;

 VAR_10->stats.tx_packets++;
 VAR_10->stats.tx_bytes += VAR_9->len;
 FUNC_6(VAR_10, VAR_9->len);

 return VAR_8;
}
