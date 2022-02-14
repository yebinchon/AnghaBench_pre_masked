
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {int tx_done_mask; int tx_stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct uart_port*) ;
 scalar_t__ FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,int ) ;
 int FUNC_3 (struct uart_port*,int ,int) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 struct atmel_uart_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_6)
{
 struct atmel_uart_port *VAR_7 = FUNC_6(VAR_6);

 if (FUNC_5(VAR_6) && (FUNC_2(VAR_6, VAR_1)
           & VAR_2))


  return;

 if (FUNC_5(VAR_6) || FUNC_4(VAR_6))
  if (FUNC_1(VAR_6))
   FUNC_0(VAR_6);

 if (FUNC_5(VAR_6))

  FUNC_3(VAR_6, VAR_0, VAR_2);


 FUNC_3(VAR_6, VAR_4, VAR_7->tx_done_mask);


 FUNC_3(VAR_6, VAR_3, VAR_5);
 VAR_7->tx_stopped = 0;
}
