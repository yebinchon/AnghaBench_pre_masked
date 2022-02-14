
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_uart_port {scalar_t__ rts_active; int rx_cookie; int rx_dma_chan; } ;
struct dma_tx_state {int residue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,struct dma_tx_state*) ;
 int FUNC_2 (struct tegra_uart_port*,int) ;
 int FUNC_3 (struct tegra_uart_port*,int ) ;
 int FUNC_4 (struct tegra_uart_port*) ;

__attribute__((used)) static void FUNC_5(struct tegra_uart_port *VAR_0)
{
 struct dma_tx_state VAR_1;


 if (VAR_0->rts_active)
  FUNC_2(VAR_0, 0);

 FUNC_0(VAR_0->rx_dma_chan);
 FUNC_1(VAR_0->rx_dma_chan, VAR_0->rx_cookie, &VAR_1);
 FUNC_3(VAR_0, VAR_1.residue);
 FUNC_4(VAR_0);

 if (VAR_0->rts_active)
  FUNC_2(VAR_0, 1);
}
