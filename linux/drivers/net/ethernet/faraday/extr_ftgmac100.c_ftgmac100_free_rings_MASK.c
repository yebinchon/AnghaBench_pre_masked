
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftgmac100_txdes {int dummy; } ;
struct ftgmac100_rxdes {int dummy; } ;
struct ftgmac100 {int rx_scratch_dma; int * rx_scratch; int dev; int * txdes; int txdes_dma; int * rxdes; int rxdes_dma; int tx_skbs; int rx_skbs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int *,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ftgmac100 *VAR_3)
{

 FUNC_1(VAR_3->rx_skbs);
 FUNC_1(VAR_3->tx_skbs);


 if (VAR_3->rxdes)
  FUNC_0(VAR_3->dev, VAR_0 *
      sizeof(struct ftgmac100_rxdes),
      VAR_3->rxdes, VAR_3->rxdes_dma);
 VAR_3->rxdes = ((void*)0);

 if (VAR_3->txdes)
  FUNC_0(VAR_3->dev, VAR_1 *
      sizeof(struct ftgmac100_txdes),
      VAR_3->txdes, VAR_3->txdes_dma);
 VAR_3->txdes = ((void*)0);


 if (VAR_3->rx_scratch)
  FUNC_0(VAR_3->dev, VAR_2,
      VAR_3->rx_scratch, VAR_3->rx_scratch_dma);
}
