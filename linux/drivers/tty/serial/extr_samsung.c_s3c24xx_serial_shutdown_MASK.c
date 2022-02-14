
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tx_enabled ;
struct uart_port {int irq; } ;
struct s3c24xx_uart_port {scalar_t__ tx_in_progress; scalar_t__ dma; scalar_t__ rx_claimed; int rx_irq; scalar_t__ tx_mode; scalar_t__ tx_claimed; int tx_irq; } ;
typedef int rx_enabled ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct s3c24xx_uart_port*) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct s3c24xx_uart_port*) ;
 struct s3c24xx_uart_port* FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_2)
{
 struct s3c24xx_uart_port *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->tx_claimed) {
  if (!FUNC_1(VAR_2))
   FUNC_0(VAR_3->tx_irq, VAR_3);
  tx_enabled(VAR_4) = 0;
  VAR_3->tx_claimed = 0;
  VAR_3->tx_mode = 0;
 }

 if (VAR_3->rx_claimed) {
  if (!FUNC_1(VAR_2))
   FUNC_0(VAR_3->rx_irq, VAR_3);
  VAR_3->rx_claimed = 0;
  rx_enabled(VAR_5) = 0;
 }


 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2->irq, VAR_3);

  FUNC_4(VAR_2, VAR_1, 0xf);
  FUNC_4(VAR_2, VAR_0, 0xf);
 }

 if (VAR_3->dma)
  FUNC_2(VAR_3);

 VAR_3->tx_in_progress = 0;
}
