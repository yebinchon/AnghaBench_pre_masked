
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpuart_port {int dma_tx_in_progress; int dma_tx_chan; int dma_wait; scalar_t__ lpuart_dma_tx_use; int port; int lpuart_timer; scalar_t__ lpuart_dma_rx_use; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct lpuart_port *VAR_0)
{
 if (VAR_0->lpuart_dma_rx_use) {
  FUNC_0(&VAR_0->lpuart_timer);
  FUNC_2(&VAR_0->port);
 }

 if (VAR_0->lpuart_dma_tx_use) {
  if (FUNC_3(VAR_0->dma_wait,
   !VAR_0->dma_tx_in_progress) != 0) {
   VAR_0->dma_tx_in_progress = 0;
   FUNC_1(VAR_0->dma_tx_chan);
  }
 }
}
