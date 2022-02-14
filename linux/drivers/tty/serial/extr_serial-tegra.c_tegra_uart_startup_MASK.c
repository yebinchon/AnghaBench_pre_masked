
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; int dev; } ;
struct tegra_uart_port {int use_tx_pio; int use_rx_pio; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ,int ,int ,struct tegra_uart_port*) ;
 int FUNC_3 (struct tegra_uart_port*,int) ;
 int FUNC_4 (struct tegra_uart_port*,int) ;
 int FUNC_5 (struct tegra_uart_port*) ;
 int VAR_0 ;
 struct tegra_uart_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_1)
{
 struct tegra_uart_port *VAR_2 = FUNC_6(VAR_1);
 int VAR_3;

 if (!VAR_2->use_tx_pio) {
  VAR_3 = FUNC_3(VAR_2, 0);
  if (VAR_3 < 0) {
   FUNC_0(VAR_1->dev, "Tx Dma allocation failed, err = %d\n",
    VAR_3);
   return VAR_3;
  }
 }

 if (!VAR_2->use_rx_pio) {
  VAR_3 = FUNC_3(VAR_2, 1);
  if (VAR_3 < 0) {
   FUNC_0(VAR_1->dev, "Rx Dma allocation failed, err = %d\n",
    VAR_3);
   goto fail_rx_dma;
  }
 }

 VAR_3 = FUNC_5(VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1->dev, "Uart HW init failed, err = %d\n", VAR_3);
  goto fail_hw_init;
 }

 VAR_3 = FUNC_2(VAR_1->irq, VAR_0, 0,
    FUNC_1(VAR_1->dev), VAR_2);
 if (VAR_3 < 0) {
  FUNC_0(VAR_1->dev, "Failed to register ISR for IRQ %d\n", VAR_1->irq);
  goto fail_hw_init;
 }
 return 0;

fail_hw_init:
 if (!VAR_2->use_rx_pio)
  FUNC_4(VAR_2, 1);
fail_rx_dma:
 if (!VAR_2->use_tx_pio)
  FUNC_4(VAR_2, 0);
 return VAR_3;
}
