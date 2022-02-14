
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct timer_list {int dummy; } ;
struct altera_uart {int tmr; struct uart_port port; } ;


 int FUNC_0 (int ,struct uart_port*) ;
 struct altera_uart* FUNC_1 (int ,struct timer_list*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int *,scalar_t__) ;
 struct altera_uart* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_3)
{
 struct altera_uart *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct uart_port *VAR_5 = &VAR_4->port;

 FUNC_0(0, VAR_5);
 FUNC_2(&VAR_4->tmr, VAR_0 + FUNC_3(VAR_5));
}
