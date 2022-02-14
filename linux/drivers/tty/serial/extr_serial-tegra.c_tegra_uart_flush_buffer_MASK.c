
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct tegra_uart_port {scalar_t__ tx_dma_chan; scalar_t__ tx_bytes; } ;


 int FUNC_0 (scalar_t__) ;
 struct tegra_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_0)
{
 struct tegra_uart_port *VAR_1 = FUNC_1(VAR_0);

 VAR_1->tx_bytes = 0;
 if (VAR_1->tx_dma_chan)
  FUNC_0(VAR_1->tx_dma_chan);
}
