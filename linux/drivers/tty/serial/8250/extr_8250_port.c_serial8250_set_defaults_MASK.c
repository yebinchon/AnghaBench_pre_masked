
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int flags; unsigned int type; int fifosize; } ;
struct uart_8250_port {TYPE_1__* dma; int capabilities; int tx_loadsz; struct uart_port port; } ;
struct TYPE_4__ {int flags; int tx_loadsz; int fifo_size; } ;
struct TYPE_3__ {scalar_t__ rx_dma; scalar_t__ tx_dma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct uart_port*) ;
 TYPE_2__* VAR_3 ;

void FUNC_1(struct uart_8250_port *VAR_4)
{
 struct uart_port *VAR_5 = &VAR_4->port;

 if (VAR_4->port.flags & VAR_0) {
  unsigned int VAR_6 = VAR_4->port.type;

  if (!VAR_4->port.fifosize)
   VAR_4->port.fifosize = VAR_3[VAR_6].fifo_size;
  if (!VAR_4->tx_loadsz)
   VAR_4->tx_loadsz = VAR_3[VAR_6].tx_loadsz;
  if (!VAR_4->capabilities)
   VAR_4->capabilities = VAR_3[VAR_6].flags;
 }

 FUNC_0(VAR_5);


 if (VAR_4->dma) {
  if (!VAR_4->dma->tx_dma)
   VAR_4->dma->tx_dma = VAR_2;
  if (!VAR_4->dma->rx_dma)
   VAR_4->dma->rx_dma = VAR_1;
 }
}
