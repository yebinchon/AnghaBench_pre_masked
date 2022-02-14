
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; TYPE_1__* state; } ;
struct tty_struct {int dummy; } ;
struct tty_port {int dummy; } ;
struct s3c24xx_uart_port {struct uart_port port; struct s3c24xx_uart_dma* dma; } ;
struct s3c24xx_uart_dma {int rx_bytes_requested; int rx_desc; int rx_cookie; int rx_chan; } ;
struct dma_tx_state {int residue; } ;
struct TYPE_2__ {struct tty_port port; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct dma_tx_state*) ;
 int FUNC_2 (struct s3c24xx_uart_port*,struct tty_port*,int) ;
 int FUNC_3 (struct s3c24xx_uart_port*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct tty_port*) ;
 int FUNC_7 (struct tty_struct*) ;
 struct tty_struct* FUNC_8 (struct tty_port*) ;

__attribute__((used)) static void FUNC_9(void *VAR_0)
{
 struct s3c24xx_uart_port *VAR_1 = VAR_0;
 struct uart_port *VAR_2 = &VAR_1->port;

 struct s3c24xx_uart_dma *VAR_3 = VAR_1->dma;
 struct tty_port *VAR_4 = &VAR_2->state->port;
 struct tty_struct *VAR_5 = FUNC_8(&VAR_1->port.state->port);

 struct dma_tx_state VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 FUNC_1(VAR_3->rx_chan, VAR_3->rx_cookie, &VAR_6);
 VAR_8 = VAR_3->rx_bytes_requested - VAR_6.residue;
 FUNC_0(VAR_3->rx_desc);

 FUNC_4(&VAR_2->lock, VAR_7);

 if (VAR_8)
  FUNC_2(VAR_1, VAR_4, VAR_8);

 if (VAR_5) {
  FUNC_6(VAR_4);
  FUNC_7(VAR_5);
 }

 FUNC_3(VAR_1);

 FUNC_5(&VAR_2->lock, VAR_7);
}
