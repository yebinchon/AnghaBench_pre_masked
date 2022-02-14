
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rx; } ;
struct TYPE_5__ {TYPE_1__ icount; TYPE_3__* state; } ;
struct uart_8250_port {TYPE_2__ port; struct uart_8250_dma* dma; } ;
struct uart_8250_dma {int rx_size; int rx_buf; int rx_cookie; int rxchan; scalar_t__ rx_running; } ;
struct tty_port {int dummy; } ;
struct dma_tx_state {int residue; } ;
struct TYPE_6__ {struct tty_port port; } ;


 int FUNC_0 (int ,int ,struct dma_tx_state*) ;
 int FUNC_1 (struct tty_port*) ;
 int FUNC_2 (struct tty_port*,int ,int) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct uart_8250_port *VAR_1 = VAR_0;
 struct uart_8250_dma *VAR_2 = VAR_1->dma;
 struct tty_port *VAR_3 = &VAR_1->port.state->port;
 struct dma_tx_state VAR_4;
 int VAR_5;

 VAR_2->rx_running = 0;
 FUNC_0(VAR_2->rxchan, VAR_2->rx_cookie, &VAR_4);

 VAR_5 = VAR_2->rx_size - VAR_4.residue;

 FUNC_2(VAR_3, VAR_2->rx_buf, VAR_5);
 VAR_1->port.icount.rx += VAR_5;

 FUNC_1(VAR_3);
}
