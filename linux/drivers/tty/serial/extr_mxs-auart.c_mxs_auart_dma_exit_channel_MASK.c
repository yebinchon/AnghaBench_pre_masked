
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxs_auart_port {int * rx_dma_buf; int * tx_dma_buf; int * rx_dma_chan; int * tx_dma_chan; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct mxs_auart_port *VAR_0)
{
 if (VAR_0->tx_dma_chan) {
  FUNC_0(VAR_0->tx_dma_chan);
  VAR_0->tx_dma_chan = ((void*)0);
 }
 if (VAR_0->rx_dma_chan) {
  FUNC_0(VAR_0->rx_dma_chan);
  VAR_0->rx_dma_chan = ((void*)0);
 }

 FUNC_1(VAR_0->tx_dma_buf);
 FUNC_1(VAR_0->rx_dma_buf);
 VAR_0->tx_dma_buf = ((void*)0);
 VAR_0->rx_dma_buf = ((void*)0);
}
