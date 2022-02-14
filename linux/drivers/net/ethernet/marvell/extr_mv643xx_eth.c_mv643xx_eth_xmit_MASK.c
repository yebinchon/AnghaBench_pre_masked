
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_queue {int tx_bytes; scalar_t__ tx_desc_count; scalar_t__ tx_stop_threshold; int tx_dropped; int tx_packets; } ;
struct sk_buff {int len; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int dummy; } ;
struct mv643xx_eth_private {struct tx_queue* txq; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 struct netdev_queue* FUNC_3 (struct net_device*,int) ;
 int FUNC_4 (int ,struct net_device*,char*) ;
 struct mv643xx_eth_private* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct netdev_queue*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct tx_queue*,struct sk_buff*,struct net_device*) ;
 int FUNC_10 (struct tx_queue*,struct sk_buff*,struct net_device*) ;

__attribute__((used)) static netdev_tx_t FUNC_11(struct sk_buff *VAR_3, struct net_device *VAR_4)
{
 struct mv643xx_eth_private *VAR_5 = FUNC_5(VAR_4);
 int VAR_6, VAR_7, VAR_8;
 struct tx_queue *VAR_9;
 struct netdev_queue *VAR_10;

 VAR_7 = FUNC_7(VAR_3);
 VAR_9 = VAR_5->txq + VAR_7;
 VAR_10 = FUNC_3(VAR_4, VAR_7);

 if (FUNC_2(VAR_3) && FUNC_0(VAR_3)) {
  FUNC_4(VAR_0, VAR_4,
         "failed to linearize skb with tiny unaligned fragment\n");
  return VAR_1;
 }

 VAR_6 = VAR_3->len;

 if (FUNC_8(VAR_3))
  VAR_8 = FUNC_10(VAR_9, VAR_3, VAR_4);
 else
  VAR_8 = FUNC_9(VAR_9, VAR_3, VAR_4);
 if (!VAR_8) {
  VAR_9->tx_bytes += VAR_6;
  VAR_9->tx_packets++;

  if (VAR_9->tx_desc_count >= VAR_9->tx_stop_threshold)
   FUNC_6(VAR_10);
 } else {
  VAR_9->tx_dropped++;
  FUNC_1(VAR_3);
 }

 return VAR_2;
}
