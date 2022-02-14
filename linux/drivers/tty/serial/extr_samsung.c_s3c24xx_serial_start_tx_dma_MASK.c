
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int dev; TYPE_1__* state; } ;
struct s3c24xx_uart_port {scalar_t__ tx_mode; scalar_t__ tx_in_progress; struct uart_port port; struct s3c24xx_uart_dma* dma; } ;
struct s3c24xx_uart_dma {unsigned int tx_size; unsigned int tx_bytes_requested; int tx_chan; TYPE_2__* tx_desc; int tx_cookie; scalar_t__ tx_transfer_addr; scalar_t__ tx_addr; } ;
struct circ_buf {scalar_t__ tail; } ;
struct TYPE_5__ {struct s3c24xx_uart_port* callback_param; int callback; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,scalar_t__,unsigned int,int ) ;
 TYPE_2__* FUNC_4 (int ,scalar_t__,unsigned int,int ,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (struct s3c24xx_uart_port*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct s3c24xx_uart_port *VAR_6,
          unsigned int VAR_7)
{
 struct uart_port *VAR_8 = &VAR_6->port;
 struct circ_buf *VAR_9 = &VAR_8->state->xmit;
 struct s3c24xx_uart_dma *VAR_10 = VAR_6->dma;


 if (VAR_6->tx_mode != VAR_4)
  FUNC_6(VAR_6);

 VAR_10->tx_size = VAR_7 & ~(FUNC_2() - 1);
 VAR_10->tx_transfer_addr = VAR_10->tx_addr + VAR_9->tail;

 FUNC_3(VAR_6->port.dev, VAR_10->tx_transfer_addr,
    VAR_10->tx_size, VAR_2);

 VAR_10->tx_desc = FUNC_4(VAR_10->tx_chan,
    VAR_10->tx_transfer_addr, VAR_10->tx_size,
    VAR_0, VAR_1);
 if (!VAR_10->tx_desc) {
  FUNC_0(VAR_6->port.dev, "Unable to get desc for Tx\n");
  return -VAR_3;
 }

 VAR_10->tx_desc->callback = VAR_5;
 VAR_10->tx_desc->callback_param = VAR_6;
 VAR_10->tx_bytes_requested = VAR_10->tx_size;

 VAR_6->tx_in_progress = VAR_4;
 VAR_10->tx_cookie = FUNC_5(VAR_10->tx_desc);
 FUNC_1(VAR_10->tx_chan);
 return 0;
}
