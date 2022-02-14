
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lpuart_port {int port; int lpuart_dma_tx_use; scalar_t__ lpuart_dma_rx_use; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,unsigned long,int ) ;

__attribute__((used)) static void FUNC_2(struct lpuart_port *VAR_6)
{
 unsigned long VAR_7;

 if (VAR_6->lpuart_dma_rx_use) {

  VAR_7 = FUNC_0(&VAR_6->port, VAR_3);
  VAR_7 &= ~(VAR_5 << VAR_4);
  FUNC_1(&VAR_6->port, VAR_7, VAR_3);
 }
 VAR_7 = FUNC_0(&VAR_6->port, VAR_0);
 if (!VAR_6->lpuart_dma_rx_use)
  VAR_7 |= VAR_1;
 if (!VAR_6->lpuart_dma_tx_use)
  VAR_7 |= VAR_2;
 FUNC_1(&VAR_6->port, VAR_7, VAR_0);
}
