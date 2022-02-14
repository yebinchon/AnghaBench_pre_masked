
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int irq; } ;
struct TYPE_2__ {scalar_t__ tail; scalar_t__ head; } ;
struct atmel_uart_port {TYPE_1__ rx_ring; int (* release_tx ) (struct uart_port*) ;int (* release_rx ) (struct uart_port*) ;int tasklet_tx; int tasklet_rx; int uart_timer; int tasklet_shutdown; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*) ;
 int FUNC_3 (struct uart_port*) ;
 int FUNC_4 (struct uart_port*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,struct uart_port*) ;
 int FUNC_8 (struct uart_port*) ;
 int FUNC_9 (struct uart_port*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 struct atmel_uart_port* FUNC_12 (struct uart_port*) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_3)
{
 struct atmel_uart_port *VAR_4 = FUNC_12(VAR_3);


 FUNC_0(VAR_3);


 FUNC_4(VAR_3, VAR_1, -1);


 FUNC_5(&VAR_4->tasklet_shutdown);





 FUNC_6(&VAR_4->uart_timer);


 FUNC_10(VAR_3->irq);





 FUNC_11(&VAR_4->tasklet_rx);
 FUNC_11(&VAR_4->tasklet_tx);





 FUNC_2(VAR_3);
 FUNC_3(VAR_3);

 FUNC_4(VAR_3, VAR_0, VAR_2);




 if (VAR_4->release_rx)
  VAR_4->release_rx(VAR_3);
 if (VAR_4->release_tx)
  VAR_4->release_tx(VAR_3);




 VAR_4->rx_ring.head = 0;
 VAR_4->rx_ring.tail = 0;




 FUNC_7(VAR_3->irq, VAR_3);

 FUNC_1(VAR_3);
}
