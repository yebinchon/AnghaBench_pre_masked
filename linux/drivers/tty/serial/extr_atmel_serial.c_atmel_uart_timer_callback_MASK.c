
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct timer_list {int dummy; } ;
struct atmel_uart_port {int uart_timer; int tasklet_rx; int tasklet_shutdown; struct uart_port uart; } ;


 struct atmel_uart_port* VAR_0 ;
 int FUNC_0 (int *) ;
 struct atmel_uart_port* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_5(struct timer_list *VAR_3)
{
 struct atmel_uart_port *VAR_4 = FUNC_1(VAR_4, VAR_3,
       VAR_2);
 struct uart_port *VAR_5 = &VAR_4->uart;

 if (!FUNC_0(&VAR_4->tasklet_shutdown)) {
  FUNC_3(&VAR_4->tasklet_rx);
  FUNC_2(&VAR_4->uart_timer,
     VAR_1 + FUNC_4(VAR_5));
 }
}
