
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int rx; } ;
struct uart_port {TYPE_3__ icount; TYPE_2__* state; } ;
struct tty_struct {int dummy; } ;
struct sirfsoc_uart_port {TYPE_1__* uart_reg; } ;
struct sirfsoc_register {int sirfsoc_rx_fifo_data; int sirfsoc_rx_fifo_status; } ;
struct sirfsoc_fifo_status {unsigned int (* ff_empty ) (struct uart_port*) ;} ;
struct TYPE_5__ {int port; } ;
struct TYPE_4__ {struct sirfsoc_fifo_status fifo_status; struct sirfsoc_register uart_reg; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct uart_port*,int ) ;
 unsigned int FUNC_1 (struct uart_port*) ;
 struct sirfsoc_uart_port* FUNC_2 (struct uart_port*) ;
 struct tty_struct* FUNC_3 (int *) ;
 int FUNC_4 (struct uart_port*,unsigned int) ;
 int FUNC_5 (struct uart_port*,int ,int ,unsigned int,int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static unsigned int
FUNC_7(struct uart_port *VAR_3, unsigned int VAR_4)
{
 struct sirfsoc_uart_port *VAR_5 = FUNC_2(VAR_3);
 struct sirfsoc_register *VAR_6 = &VAR_5->uart_reg->uart_reg;
 struct sirfsoc_fifo_status *VAR_7 = &VAR_5->uart_reg->fifo_status;
 unsigned int VAR_8, VAR_9 = 0;
 struct tty_struct *VAR_10;
 VAR_10 = FUNC_3(&VAR_3->state->port);
 if (!VAR_10)
  return -VAR_0;
 while (!(FUNC_0(VAR_3, VAR_6->sirfsoc_rx_fifo_status) &
     VAR_7->ff_empty(VAR_3))) {
  VAR_8 = FUNC_0(VAR_3, VAR_6->sirfsoc_rx_fifo_data) |
   VAR_1;
  if (FUNC_6(FUNC_4(VAR_3, VAR_8)))
   continue;
  FUNC_5(VAR_3, 0, 0, VAR_8, VAR_2);
  VAR_9++;
  if (VAR_9 >= VAR_4)
   break;
 }

 VAR_3->icount.rx += VAR_9;

 return VAR_9;
}
