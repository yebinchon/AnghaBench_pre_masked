
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_spi {scalar_t__ zeropage; int tx_sgt; scalar_t__ dma_tx; int rx_sgt; scalar_t__ dma_rx; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ep93xx_spi *VAR_0)
{
 if (VAR_0->dma_rx) {
  FUNC_0(VAR_0->dma_rx);
  FUNC_2(&VAR_0->rx_sgt);
 }
 if (VAR_0->dma_tx) {
  FUNC_0(VAR_0->dma_tx);
  FUNC_2(&VAR_0->tx_sgt);
 }

 if (VAR_0->zeropage)
  FUNC_1((unsigned long)VAR_0->zeropage);
}
