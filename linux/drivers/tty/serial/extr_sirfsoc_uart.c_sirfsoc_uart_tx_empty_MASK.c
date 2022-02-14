
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct sirfsoc_uart_port {TYPE_1__* uart_reg; } ;
struct sirfsoc_register {int sirfsoc_tx_fifo_status; } ;
struct sirfsoc_fifo_status {unsigned long (* ff_empty ) (struct uart_port*) ;} ;
struct TYPE_2__ {struct sirfsoc_fifo_status fifo_status; struct sirfsoc_register uart_reg; } ;


 unsigned int VAR_0 ;
 unsigned long FUNC_0 (struct uart_port*,int ) ;
 unsigned long FUNC_1 (struct uart_port*) ;
 struct sirfsoc_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static inline unsigned int FUNC_3(struct uart_port *VAR_1)
{
 unsigned long VAR_2;
 struct sirfsoc_uart_port *VAR_3 = FUNC_2(VAR_1);
 struct sirfsoc_register *VAR_4 = &VAR_3->uart_reg->uart_reg;
 struct sirfsoc_fifo_status *VAR_5 = &VAR_3->uart_reg->fifo_status;
 VAR_2 = FUNC_0(VAR_1, VAR_4->sirfsoc_tx_fifo_status);
 return (VAR_2 & VAR_5->ff_empty(VAR_1)) ? VAR_0 : 0;
}
