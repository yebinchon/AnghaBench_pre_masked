
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_tse_private {int rx_dma_csr; int tx_dma_csr; int rxdescmem; int rx_dma_desc; int txdescmem; int tx_dma_desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct altera_tse_private *VAR_2)
{

 FUNC_1(VAR_2->tx_dma_desc, 0, VAR_2->txdescmem);
 FUNC_1(VAR_2->rx_dma_desc, 0, VAR_2->rxdescmem);

 FUNC_0(VAR_0, VAR_2->tx_dma_csr, FUNC_2(VAR_1));
 FUNC_0(0, VAR_2->tx_dma_csr, FUNC_2(VAR_1));

 FUNC_0(VAR_0, VAR_2->rx_dma_csr, FUNC_2(VAR_1));
 FUNC_0(0, VAR_2->rx_dma_csr, FUNC_2(VAR_1));
}
