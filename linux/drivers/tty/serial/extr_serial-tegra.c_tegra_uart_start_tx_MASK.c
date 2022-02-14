
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct tegra_uart_port {int tx_in_progress; } ;
struct circ_buf {int dummy; } ;
struct TYPE_2__ {struct circ_buf xmit; } ;


 int FUNC_0 (struct tegra_uart_port*) ;
 struct tegra_uart_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct circ_buf*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct tegra_uart_port *VAR_1 = FUNC_1(VAR_0);
 struct circ_buf *VAR_2 = &VAR_0->state->xmit;

 if (!FUNC_2(VAR_2) && !VAR_1->tx_in_progress)
  FUNC_0(VAR_1);
}
