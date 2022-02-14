
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int data_len; scalar_t__ len; int protocol; int truesize; } ;
struct page {int dummy; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int multicast; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftmac100_rxdes {int dummy; } ;
struct ftmac100 {int dev; struct net_device* netdev; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 int FUNC_4 (struct ftmac100*,struct ftmac100_rxdes*,int ) ;
 int FUNC_5 (struct ftmac100*) ;
 struct ftmac100_rxdes* FUNC_6 (struct ftmac100*) ;
 int FUNC_7 (struct ftmac100*,struct ftmac100_rxdes*) ;
 int FUNC_8 (struct ftmac100*) ;
 int FUNC_9 (struct ftmac100_rxdes*) ;
 int FUNC_10 (struct ftmac100_rxdes*) ;
 struct page* FUNC_11 (struct ftmac100_rxdes*) ;
 int FUNC_12 (struct ftmac100_rxdes*) ;
 int FUNC_13 (struct ftmac100_rxdes*) ;
 scalar_t__ FUNC_14 () ;
 struct sk_buff* FUNC_15 (struct net_device*,int) ;
 int FUNC_16 (struct net_device*,char*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int ,struct page*,int ,int) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static bool FUNC_20(struct ftmac100 *VAR_5, int *VAR_6)
{
 struct net_device *VAR_7 = VAR_5->netdev;
 struct ftmac100_rxdes *VAR_8;
 struct sk_buff *VAR_9;
 struct page *VAR_10;
 dma_addr_t VAR_11;
 int VAR_12;
 bool VAR_13;

 VAR_8 = FUNC_6(VAR_5);
 if (!VAR_8)
  return 0;

 if (FUNC_19(FUNC_7(VAR_5, VAR_8))) {
  FUNC_5(VAR_5);
  return 1;
 }





 VAR_13 = FUNC_12(VAR_8);
 FUNC_0(!VAR_13);


 VAR_9 = FUNC_15(VAR_7, 128);
 if (FUNC_19(!VAR_9)) {
  if (FUNC_14())
   FUNC_16(VAR_7, "rx skb alloc failed\n");

  FUNC_5(VAR_5);
  return 1;
 }

 if (FUNC_19(FUNC_13(VAR_8)))
  VAR_7->stats.multicast++;

 VAR_11 = FUNC_10(VAR_8);
 FUNC_2(VAR_5->dev, VAR_11, VAR_4, VAR_0);

 VAR_12 = FUNC_9(VAR_8);
 VAR_10 = FUNC_11(VAR_8);
 FUNC_18(VAR_9, 0, VAR_10, 0, VAR_12);
 VAR_9->len += VAR_12;
 VAR_9->data_len += VAR_12;

 if (VAR_12 > 128) {
  VAR_9->truesize += VAR_3;

  FUNC_1(VAR_9, VAR_1);
 } else {

  FUNC_1(VAR_9, VAR_12);
 }
 FUNC_4(VAR_5, VAR_8, VAR_2);

 FUNC_8(VAR_5);

 VAR_9->protocol = FUNC_3(VAR_9, VAR_7);

 VAR_7->stats.rx_packets++;
 VAR_7->stats.rx_bytes += VAR_9->len;


 FUNC_17(VAR_9);

 (*VAR_6)++;
 return 1;
}
