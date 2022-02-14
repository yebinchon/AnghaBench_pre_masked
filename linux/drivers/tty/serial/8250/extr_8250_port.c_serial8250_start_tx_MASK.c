
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_8250_port {struct uart_8250_em485* em485; } ;
struct uart_8250_em485 {int start_tx_timer; int * active_timer; } ;


 int FUNC_0 (struct uart_port*) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_port*) ;
 struct uart_8250_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0)
{
 struct uart_8250_port *VAR_1 = FUNC_3(VAR_0);
 struct uart_8250_em485 *VAR_2 = VAR_1->em485;

 FUNC_1(VAR_1);

 if (VAR_2 &&
     VAR_2->active_timer == &VAR_2->start_tx_timer)
  return;

 if (VAR_2)
  FUNC_2(VAR_0);
 else
  FUNC_0(VAR_0);
}
