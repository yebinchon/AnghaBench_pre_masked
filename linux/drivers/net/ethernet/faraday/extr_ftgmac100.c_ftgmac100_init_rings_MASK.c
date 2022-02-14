
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftgmac100_txdes {int txdes0; } ;
struct ftgmac100_rxdes {int rxdes0; int rxdes3; } ;
struct ftgmac100 {int rx_q_entries; int new_rx_q_entries; int tx_q_entries; int new_tx_q_entries; int txdes0_edotr_mask; struct ftgmac100_txdes* txdes; int rxdes0_edorr_mask; int rx_scratch_dma; struct ftgmac100_rxdes* rxdes; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ftgmac100 *VAR_1)
{
 struct ftgmac100_rxdes *VAR_2 = ((void*)0);
 struct ftgmac100_txdes *VAR_3 = ((void*)0);
 int VAR_4;


 VAR_1->rx_q_entries = VAR_1->new_rx_q_entries;
 VAR_1->tx_q_entries = VAR_1->new_tx_q_entries;

 if (FUNC_0(VAR_1->rx_q_entries < VAR_0))
  return;


 for (VAR_4 = 0; VAR_4 < VAR_1->rx_q_entries; VAR_4++) {
  VAR_2 = &VAR_1->rxdes[VAR_4];
  VAR_2->rxdes0 = 0;
  VAR_2->rxdes3 = FUNC_1(VAR_1->rx_scratch_dma);
 }

 VAR_2->rxdes0 |= FUNC_1(VAR_1->rxdes0_edorr_mask);

 if (FUNC_0(VAR_1->tx_q_entries < VAR_0))
  return;


 for (VAR_4 = 0; VAR_4 < VAR_1->tx_q_entries; VAR_4++) {
  VAR_3 = &VAR_1->txdes[VAR_4];
  VAR_3->txdes0 = 0;
 }
 VAR_3->txdes0 |= FUNC_1(VAR_1->txdes0_edotr_mask);
}
