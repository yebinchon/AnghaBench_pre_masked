
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int lock; TYPE_1__* state; } ;
struct tty_struct {int dummy; } ;
struct tty_port {int dummy; } ;
struct s3c24xx_uart_port {scalar_t__ rx_mode; struct uart_port port; struct s3c24xx_uart_dma* dma; } ;
struct s3c24xx_uart_dma {unsigned int rx_bytes_requested; int rx_chan; int rx_cookie; } ;
struct dma_tx_state {unsigned int residue; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {struct tty_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct dma_tx_state*) ;
 int FUNC_3 (struct s3c24xx_uart_port*) ;
 int FUNC_4 (struct s3c24xx_uart_port*) ;
 unsigned int FUNC_5 (struct uart_port*,int ) ;
 int FUNC_6 (struct s3c24xx_uart_port*) ;
 int FUNC_7 (struct s3c24xx_uart_port*,struct tty_port*,unsigned int) ;
 int FUNC_8 (struct s3c24xx_uart_port*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct tty_port*) ;
 int FUNC_12 (struct tty_struct*) ;
 struct tty_struct* FUNC_13 (struct tty_port*) ;
 int FUNC_14 (struct uart_port*,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_15(void *VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9;
 struct s3c24xx_uart_port *VAR_10 = VAR_6;
 struct uart_port *VAR_11 = &VAR_10->port;
 struct s3c24xx_uart_dma *VAR_12 = VAR_10->dma;
 struct tty_struct *VAR_13 = FUNC_13(&VAR_10->port.state->port);
 struct tty_port *VAR_14 = &VAR_11->state->port;
 unsigned long VAR_15;
 struct dma_tx_state VAR_16;

 VAR_7 = FUNC_5(VAR_11, VAR_2);
 VAR_8 = FUNC_5(VAR_11, VAR_1);

 FUNC_9(&VAR_11->lock, VAR_15);

 if (!(VAR_7 & VAR_3)) {
  FUNC_8(VAR_10);
  if (VAR_10->rx_mode == VAR_5)
   FUNC_3(VAR_10);
  goto finish;
 }

 if (VAR_10->rx_mode == VAR_4) {
  FUNC_0(VAR_12->rx_chan);
  FUNC_2(VAR_12->rx_chan, VAR_12->rx_cookie, &VAR_16);
  FUNC_1(VAR_12->rx_chan);
  VAR_9 = VAR_12->rx_bytes_requested - VAR_16.residue;
  FUNC_7(VAR_10, VAR_14, VAR_9);

  FUNC_4(VAR_10);
 }

 FUNC_6(VAR_10);

 if (VAR_13) {
  FUNC_11(VAR_14);
  FUNC_12(VAR_13);
 }

 FUNC_14(VAR_11, VAR_2, VAR_3);

finish:
 FUNC_10(&VAR_11->lock, VAR_15);

 return VAR_0;
}
