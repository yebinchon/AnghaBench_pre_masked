
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct tty_port {int dummy; } ;
struct TYPE_4__ {TYPE_1__* state; } ;
struct tegra_uart_port {unsigned long ier_shadow; int rx_cookie; scalar_t__ rx_dma_chan; int use_rx_pio; scalar_t__ rx_in_progress; scalar_t__ rts_active; TYPE_2__ uport; } ;
struct dma_tx_state {int residue; } ;
struct TYPE_3__ {struct tty_port port; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,int ,struct dma_tx_state*) ;
 int FUNC_2 (struct tegra_uart_port*,int) ;
 int FUNC_3 (struct tegra_uart_port*,struct tty_port*) ;
 int FUNC_4 (struct tegra_uart_port*,int ) ;
 int FUNC_5 (struct tegra_uart_port*,int) ;
 int FUNC_6 (struct tegra_uart_port*,unsigned long,int ) ;
 struct tegra_uart_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_5)
{
 struct tegra_uart_port *VAR_6 = FUNC_7(VAR_5);
 struct tty_port *VAR_7 = &VAR_6->uport.state->port;
 struct dma_tx_state VAR_8;
 unsigned long VAR_9;

 if (VAR_6->rts_active)
  FUNC_2(VAR_6, 0);

 if (!VAR_6->rx_in_progress)
  return;

 FUNC_5(VAR_6, 1);

 VAR_9 = VAR_6->ier_shadow;
 VAR_9 &= ~(VAR_2 | VAR_3 | VAR_4 |
     VAR_0);
 VAR_6->ier_shadow = VAR_9;
 FUNC_6(VAR_6, VAR_9, VAR_1);
 VAR_6->rx_in_progress = 0;
 if (VAR_6->rx_dma_chan && !VAR_6->use_rx_pio) {
  FUNC_0(VAR_6->rx_dma_chan);
  FUNC_1(VAR_6->rx_dma_chan, VAR_6->rx_cookie, &VAR_8);
  FUNC_4(VAR_6, VAR_8.residue);
 } else {
  FUNC_3(VAR_6, VAR_7);
 }
}
