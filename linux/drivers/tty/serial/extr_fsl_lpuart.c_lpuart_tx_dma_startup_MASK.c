
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ membase; } ;
struct lpuart_port {int lpuart_dma_tx_use; TYPE_1__ port; int dma_wait; scalar_t__ dma_tx_chan; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct lpuart_port*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct lpuart_port *VAR_4)
{
 u32 VAR_5;

 if (VAR_4->dma_tx_chan && !FUNC_3(&VAR_4->port)) {
  FUNC_0(&VAR_4->dma_wait);
  VAR_4->lpuart_dma_tx_use = 1;
  if (FUNC_4(VAR_4)) {
   VAR_5 = FUNC_1(&VAR_4->port, VAR_0);
   FUNC_2(&VAR_4->port,
           VAR_5 | VAR_1, VAR_0);
  } else {
   FUNC_6(FUNC_5(VAR_4->port.membase + VAR_2) |
    VAR_3, VAR_4->port.membase + VAR_2);
  }
 } else {
  VAR_4->lpuart_dma_tx_use = 0;
 }
}
