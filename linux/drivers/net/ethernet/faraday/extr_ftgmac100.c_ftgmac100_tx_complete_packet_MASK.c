
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
struct ftgmac100_txdes {int txdes0; } ;
struct ftgmac100 {unsigned int tx_clean_pointer; int txdes0_edotr_mask; struct sk_buff** tx_skbs; struct ftgmac100_txdes* txdes; struct net_device* netdev; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ftgmac100*,unsigned int,struct sk_buff*,struct ftgmac100_txdes*,int) ;
 unsigned int FUNC_2 (struct ftgmac100*,unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static bool FUNC_4(struct ftgmac100 *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct ftgmac100_txdes *VAR_3;
 struct sk_buff *VAR_4;
 unsigned int VAR_5;
 u32 VAR_6;

 VAR_5 = VAR_1->tx_clean_pointer;
 VAR_3 = &VAR_1->txdes[VAR_5];

 VAR_6 = FUNC_3(VAR_3->txdes0);
 if (VAR_6 & VAR_0)
  return 0;

 VAR_4 = VAR_1->tx_skbs[VAR_5];
 VAR_2->stats.tx_packets++;
 VAR_2->stats.tx_bytes += VAR_4->len;
 FUNC_1(VAR_1, VAR_5, VAR_4, VAR_3, VAR_6);
 VAR_3->txdes0 = FUNC_0(VAR_6 & VAR_1->txdes0_edotr_mask);

 VAR_1->tx_clean_pointer = FUNC_2(VAR_1, VAR_5);

 return 1;
}
