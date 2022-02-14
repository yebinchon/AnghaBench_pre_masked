
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct ltq_uart_port {int tx_irq; int rx_irq; int err_irq; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct uart_port*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,char*,struct uart_port*) ;
 struct ltq_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_3)
{
 struct ltq_uart_port *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 VAR_5 = FUNC_2(VAR_4->tx_irq, VAR_2,
        0, "asc_tx", VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "failed to request asc_tx\n");
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_4->rx_irq, VAR_1,
        0, "asc_rx", VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "failed to request asc_rx\n");
  goto err1;
 }

 VAR_5 = FUNC_2(VAR_4->err_irq, VAR_0,
        0, "asc_err", VAR_3);
 if (VAR_5) {
  FUNC_0(VAR_3->dev, "failed to request asc_err\n");
  goto err2;
 }
 return 0;

err2:
 FUNC_1(VAR_4->rx_irq, VAR_3);
err1:
 FUNC_1(VAR_4->tx_irq, VAR_3);
 return VAR_5;
}
