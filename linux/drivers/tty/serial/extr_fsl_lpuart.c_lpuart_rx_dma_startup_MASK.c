
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpuart_port {int dma_rx_timeout; int lpuart_dma_rx_use; scalar_t__ dma_rx_chan; } ;


 int VAR_0 ;
 int FUNC_0 (struct lpuart_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct lpuart_port*) ;

__attribute__((used)) static void FUNC_3(struct lpuart_port *VAR_1)
{
 if (VAR_1->dma_rx_chan && !FUNC_0(VAR_1)) {

  VAR_1->dma_rx_timeout = FUNC_1(VAR_0);
  if (!VAR_1->dma_rx_timeout)
   VAR_1->dma_rx_timeout = 1;

  VAR_1->lpuart_dma_rx_use = 1;
  FUNC_2(VAR_1);
 } else {
  VAR_1->lpuart_dma_rx_use = 0;
 }
}
