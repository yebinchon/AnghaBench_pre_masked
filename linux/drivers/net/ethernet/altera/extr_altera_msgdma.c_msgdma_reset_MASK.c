
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_tse_private {int tx_dma_csr; int dev; int rx_dma_csr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct altera_tse_private*,int ,int ,char*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;

void FUNC_5(struct altera_tse_private *VAR_7)
{
 int VAR_8;


 FUNC_0(VAR_2, VAR_7->rx_dma_csr,
  FUNC_1(VAR_6));
 FUNC_0(VAR_1, VAR_7->rx_dma_csr,
  FUNC_1(VAR_4));

 VAR_8 = 0;
 while (VAR_8++ < VAR_0) {
  if (FUNC_3(VAR_7->rx_dma_csr, FUNC_1(VAR_6),
         VAR_3))
   break;
  FUNC_4(1);
 }

 if (VAR_8 >= VAR_0)
  FUNC_2(VAR_7, VAR_5, VAR_7->dev,
      "TSE Rx mSGDMA resetting bit never cleared!\n");


 FUNC_0(VAR_2, VAR_7->rx_dma_csr, FUNC_1(VAR_6));


 FUNC_0(VAR_2, VAR_7->tx_dma_csr,
  FUNC_1(VAR_6));

 FUNC_0(VAR_1, VAR_7->tx_dma_csr,
  FUNC_1(VAR_4));

 VAR_8 = 0;
 while (VAR_8++ < VAR_0) {
  if (FUNC_3(VAR_7->tx_dma_csr, FUNC_1(VAR_6),
         VAR_3))
   break;
  FUNC_4(1);
 }

 if (VAR_8 >= VAR_0)
  FUNC_2(VAR_7, VAR_5, VAR_7->dev,
      "TSE Tx mSGDMA resetting bit never cleared!\n");


 FUNC_0(VAR_2, VAR_7->tx_dma_csr, FUNC_1(VAR_6));
}
