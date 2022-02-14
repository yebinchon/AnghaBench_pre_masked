
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dev; } ;
struct atmel_uart_port {unsigned int tx_done_mask; int hd_start_rx; int tasklet_tx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct atmel_uart_port*,int *) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ,unsigned int) ;
 int FUNC_4 (int ,char*) ;
 struct atmel_uart_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_6(struct uart_port *VAR_3, unsigned int VAR_4)
{
 struct atmel_uart_port *VAR_5 = FUNC_5(VAR_3);

 if (VAR_4 & VAR_5->tx_done_mask) {
  FUNC_3(VAR_3, VAR_1,
      VAR_5->tx_done_mask);


  if (VAR_5->hd_start_rx) {
   if (!(FUNC_2(VAR_3, VAR_0)
     & VAR_2))
    FUNC_4(VAR_3->dev, "Should start RX, but TX fifo is not empty\n");

   VAR_5->hd_start_rx = 0;
   FUNC_0(VAR_3);
  }

  FUNC_1(VAR_5, &VAR_5->tasklet_tx);
 }
}
