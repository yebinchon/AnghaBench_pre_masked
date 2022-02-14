
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_aborted_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftmac100_txdes {int dummy; } ;
struct ftmac100 {scalar_t__ tx_pending; int tx_lock; int dev; struct net_device* netdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct ftmac100_txdes* FUNC_2 (struct ftmac100*) ;
 int FUNC_3 (struct ftmac100*) ;
 scalar_t__ FUNC_4 (struct ftmac100_txdes*) ;
 int FUNC_5 (struct ftmac100_txdes*) ;
 struct sk_buff* FUNC_6 (struct ftmac100_txdes*) ;
 scalar_t__ FUNC_7 (struct ftmac100_txdes*) ;
 scalar_t__ FUNC_8 (struct ftmac100_txdes*) ;
 int FUNC_9 (struct ftmac100_txdes*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static bool FUNC_15(struct ftmac100 *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct ftmac100_txdes *VAR_3;
 struct sk_buff *VAR_4;
 dma_addr_t VAR_5;

 if (VAR_1->tx_pending == 0)
  return 0;

 VAR_3 = FUNC_2(VAR_1);

 if (FUNC_8(VAR_3))
  return 0;

 VAR_4 = FUNC_6(VAR_3);
 VAR_5 = FUNC_5(VAR_3);

 if (FUNC_14(FUNC_4(VAR_3) ||
       FUNC_7(VAR_3))) {




  VAR_2->stats.tx_aborted_errors++;
 } else {
  VAR_2->stats.tx_packets++;
  VAR_2->stats.tx_bytes += VAR_4->len;
 }

 FUNC_1(VAR_1->dev, VAR_5, FUNC_11(VAR_4), VAR_0);
 FUNC_0(VAR_4);

 FUNC_9(VAR_3);

 FUNC_3(VAR_1);

 FUNC_12(&VAR_1->tx_lock);
 VAR_1->tx_pending--;
 FUNC_13(&VAR_1->tx_lock);
 FUNC_10(VAR_2);

 return 1;
}
