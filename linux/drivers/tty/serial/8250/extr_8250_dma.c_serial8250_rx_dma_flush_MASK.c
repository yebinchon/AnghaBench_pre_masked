
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {struct uart_8250_dma* dma; } ;
struct uart_8250_dma {int rxchan; scalar_t__ rx_running; } ;


 int FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct uart_8250_port *VAR_0)
{
 struct uart_8250_dma *VAR_1 = VAR_0->dma;

 if (VAR_1->rx_running) {
  FUNC_1(VAR_1->rxchan);
  FUNC_0(VAR_0);
  FUNC_2(VAR_1->rxchan);
 }
}
