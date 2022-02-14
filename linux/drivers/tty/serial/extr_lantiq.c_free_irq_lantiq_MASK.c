
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct ltq_uart_port {int err_irq; int rx_irq; int tx_irq; } ;


 int FUNC_0 (int ,struct uart_port*) ;
 struct ltq_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 struct ltq_uart_port *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->tx_irq, VAR_0);
 FUNC_0(VAR_1->rx_irq, VAR_0);
 FUNC_0(VAR_1->err_irq, VAR_0);
}
