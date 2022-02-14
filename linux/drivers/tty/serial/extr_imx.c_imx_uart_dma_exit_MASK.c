
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_port {int * dma_chan_tx; int * rx_buf; int rx_cookie; int * dma_chan_rx; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct imx_port *VAR_1)
{
 if (VAR_1->dma_chan_rx) {
  FUNC_1(VAR_1->dma_chan_rx);
  FUNC_0(VAR_1->dma_chan_rx);
  VAR_1->dma_chan_rx = ((void*)0);
  VAR_1->rx_cookie = -VAR_0;
  FUNC_2(VAR_1->rx_buf);
  VAR_1->rx_buf = ((void*)0);
 }

 if (VAR_1->dma_chan_tx) {
  FUNC_1(VAR_1->dma_chan_tx);
  FUNC_0(VAR_1->dma_chan_tx);
  VAR_1->dma_chan_tx = ((void*)0);
 }
}
