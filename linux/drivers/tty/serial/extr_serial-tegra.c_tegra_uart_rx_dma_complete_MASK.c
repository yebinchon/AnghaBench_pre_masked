
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; int dev; } ;
struct tegra_uart_port {scalar_t__ rts_active; struct uart_port uport; int rx_cookie; int rx_dma_chan; } ;
struct dma_tx_state {int dummy; } ;
typedef enum dma_status { ____Placeholder_dma_status } dma_status ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,struct dma_tx_state*) ;
 int FUNC_2 (struct tegra_uart_port*,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct tegra_uart_port*,int ) ;
 int FUNC_6 (struct tegra_uart_port*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1)
{
 struct tegra_uart_port *VAR_2 = VAR_1;
 struct uart_port *VAR_3 = &VAR_2->uport;
 unsigned long VAR_4;
 struct dma_tx_state VAR_5;
 enum dma_status VAR_6;

 FUNC_3(&VAR_3->lock, VAR_4);

 VAR_6 = FUNC_1(VAR_2->rx_dma_chan, VAR_2->rx_cookie, &VAR_5);

 if (VAR_6 == VAR_0) {
  FUNC_0(VAR_2->uport.dev, "RX DMA is in progress\n");
  goto done;
 }


 if (VAR_2->rts_active)
  FUNC_2(VAR_2, 0);

 FUNC_5(VAR_2, 0);
 FUNC_6(VAR_2);


 if (VAR_2->rts_active)
  FUNC_2(VAR_2, 1);

done:
 FUNC_4(&VAR_3->lock, VAR_4);
}
