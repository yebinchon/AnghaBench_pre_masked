
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ membase; } ;
struct lpuart_port {int lpuart_dma_tx_use; int lpuart_dma_rx_use; TYPE_1__ port; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct lpuart_port*) ;
 int FUNC_1 (struct lpuart_port*) ;
 unsigned char FUNC_2 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct lpuart_port *VAR_6 = VAR_5;
 unsigned char VAR_7;

 VAR_7 = FUNC_2(VAR_6->port.membase + VAR_1);

 if (VAR_7 & VAR_2 && !VAR_6->lpuart_dma_rx_use)
  FUNC_0(VAR_6);

 if (VAR_7 & VAR_3 && !VAR_6->lpuart_dma_tx_use)
  FUNC_1(VAR_6);

 return VAR_0;
}
