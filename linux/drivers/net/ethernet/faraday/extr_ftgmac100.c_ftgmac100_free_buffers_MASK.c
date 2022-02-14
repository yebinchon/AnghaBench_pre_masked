
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ftgmac100_txdes {int txdes0; } ;
struct ftgmac100_rxdes {int rxdes3; } ;
struct ftgmac100 {int rx_q_entries; int tx_q_entries; struct sk_buff** tx_skbs; struct ftgmac100_txdes* txdes; int dev; struct sk_buff** rx_skbs; struct ftgmac100_rxdes* rxdes; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct ftgmac100*,int,struct sk_buff*,struct ftgmac100_txdes*,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ftgmac100 *VAR_2)
{
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_2->rx_q_entries; VAR_3++) {
  struct ftgmac100_rxdes *VAR_4 = &VAR_2->rxdes[VAR_3];
  struct sk_buff *VAR_5 = VAR_2->rx_skbs[VAR_3];
  dma_addr_t VAR_6 = FUNC_3(VAR_4->rxdes3);

  if (!VAR_5)
   continue;

  VAR_2->rx_skbs[VAR_3] = ((void*)0);
  FUNC_1(VAR_2->dev, VAR_6, VAR_1, VAR_0);
  FUNC_0(VAR_5);
 }


 for (VAR_3 = 0; VAR_3 < VAR_2->tx_q_entries; VAR_3++) {
  struct ftgmac100_txdes *VAR_7 = &VAR_2->txdes[VAR_3];
  struct sk_buff *VAR_8 = VAR_2->tx_skbs[VAR_3];

  if (!VAR_8)
   continue;
  FUNC_2(VAR_2, VAR_3, VAR_8, VAR_7,
      FUNC_3(VAR_7->txdes0));
 }
}
