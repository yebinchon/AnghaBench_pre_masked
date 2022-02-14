
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int tx; } ;
struct TYPE_10__ {int lock; TYPE_4__ icount; TYPE_1__* state; } ;
struct uart_8250_port {TYPE_5__ port; struct uart_8250_dma* dma; } ;
struct uart_8250_dma {scalar_t__ tx_size; scalar_t__ tx_running; int tx_addr; TYPE_3__* txchan; } ;
struct circ_buf {int tail; } ;
struct TYPE_8__ {TYPE_2__* device; } ;
struct TYPE_7__ {int dev; } ;
struct TYPE_6__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 (struct circ_buf*) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_7(void *VAR_3)
{
 struct uart_8250_port *VAR_4 = VAR_3;
 struct uart_8250_dma *VAR_5 = VAR_4->dma;
 struct circ_buf *VAR_6 = &VAR_4->port.state->xmit;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_0(VAR_5->txchan->device->dev, VAR_5->tx_addr,
    VAR_1, VAR_0);

 FUNC_3(&VAR_4->port.lock, VAR_7);

 VAR_5->tx_running = 0;

 VAR_6->tail += VAR_5->tx_size;
 VAR_6->tail &= VAR_1 - 1;
 VAR_4->port.icount.tx += VAR_5->tx_size;

 if (FUNC_5(VAR_6) < VAR_2)
  FUNC_6(&VAR_4->port);

 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8)
  FUNC_1(VAR_4);

 FUNC_4(&VAR_4->port.lock, VAR_7);
}
