
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {int tx_stopped; int tx_done_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ,int ) ;
 scalar_t__ FUNC_3 (struct uart_port*) ;
 struct atmel_uart_port* FUNC_4 (struct uart_port*) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_5)
{
 struct atmel_uart_port *VAR_6 = FUNC_4(VAR_5);

 if (FUNC_3(VAR_5)) {

  FUNC_2(VAR_5, VAR_0, VAR_1);
 }






 FUNC_2(VAR_5, VAR_2, VAR_4);
 VAR_6->tx_stopped = 1;


 FUNC_2(VAR_5, VAR_3, VAR_6->tx_done_mask);

 if (FUNC_1(VAR_5))
  FUNC_0(VAR_5);

}
