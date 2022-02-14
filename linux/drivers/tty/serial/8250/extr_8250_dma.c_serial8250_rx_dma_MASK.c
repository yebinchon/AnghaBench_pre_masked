
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_8250_port {struct uart_8250_dma* dma; } ;
struct uart_8250_dma {int rx_running; int rxchan; int rx_cookie; int rx_size; int rx_addr; } ;
struct dma_async_tx_descriptor {struct uart_8250_port* callback_param; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct dma_async_tx_descriptor* FUNC_1 (int ,int ,int ,int ,int) ;
 int FUNC_2 (struct dma_async_tx_descriptor*) ;

int FUNC_3(struct uart_8250_port *VAR_5)
{
 struct uart_8250_dma *VAR_6 = VAR_5->dma;
 struct dma_async_tx_descriptor *VAR_7;

 if (VAR_6->rx_running)
  return 0;

 VAR_7 = FUNC_1(VAR_6->rxchan, VAR_6->rx_addr,
        VAR_6->rx_size, VAR_1,
        VAR_2 | VAR_0);
 if (!VAR_7)
  return -VAR_3;

 VAR_6->rx_running = 1;
 VAR_7->callback = VAR_4;
 VAR_7->callback_param = VAR_5;

 VAR_6->rx_cookie = FUNC_2(VAR_7);

 FUNC_0(VAR_6->rxchan);

 return 0;
}
