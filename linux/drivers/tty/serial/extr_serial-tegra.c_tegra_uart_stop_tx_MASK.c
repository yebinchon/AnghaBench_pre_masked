
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_3__ {TYPE_2__* state; } ;
struct tegra_uart_port {scalar_t__ tx_in_progress; unsigned int tx_bytes_requested; int tx_dma_desc; int tx_cookie; int tx_dma_chan; TYPE_1__ uport; } ;
struct dma_tx_state {unsigned int residue; } ;
struct circ_buf {unsigned int tail; } ;
struct TYPE_4__ {struct circ_buf xmit; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct dma_tx_state*) ;
 struct tegra_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_2)
{
 struct tegra_uart_port *VAR_3 = FUNC_3(VAR_2);
 struct circ_buf *VAR_4 = &VAR_3->uport.state->xmit;
 struct dma_tx_state VAR_5;
 unsigned int VAR_6;

 if (VAR_3->tx_in_progress != VAR_0)
  return;

 FUNC_1(VAR_3->tx_dma_chan);
 FUNC_2(VAR_3->tx_dma_chan, VAR_3->tx_cookie, &VAR_5);
 VAR_6 = VAR_3->tx_bytes_requested - VAR_5.residue;
 FUNC_0(VAR_3->tx_dma_desc);
 VAR_4->tail = (VAR_4->tail + VAR_6) & (VAR_1 - 1);
 VAR_3->tx_in_progress = 0;
}
