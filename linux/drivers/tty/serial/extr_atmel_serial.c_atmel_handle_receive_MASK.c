
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {scalar_t__ break_active; int tasklet_rx; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct uart_port*,unsigned int) ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct atmel_uart_port*,int *) ;
 int FUNC_3 (struct uart_port*,int ,unsigned int) ;
 scalar_t__ FUNC_4 (struct uart_port*) ;
 scalar_t__ FUNC_5 (struct uart_port*) ;
 struct atmel_uart_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static void
FUNC_7(struct uart_port *VAR_10, unsigned int VAR_11)
{
 struct atmel_uart_port *VAR_12 = FUNC_6(VAR_10);

 if (FUNC_5(VAR_10)) {







  if (VAR_11 & (VAR_1 | VAR_9)) {
   FUNC_3(VAR_10, VAR_3,
       (VAR_1 | VAR_9));
   FUNC_2(VAR_12,
            &VAR_12->tasklet_rx);
  }

  if (VAR_11 & (VAR_7 | VAR_4 |
    VAR_2 | VAR_5))
   FUNC_0(VAR_10, VAR_11);
 }

 if (FUNC_4(VAR_10)) {
  if (VAR_11 & VAR_9) {
   FUNC_3(VAR_10, VAR_3,
       VAR_9);
   FUNC_2(VAR_12,
            &VAR_12->tasklet_rx);
  }
 }


 if (VAR_11 & VAR_8)
  FUNC_1(VAR_10);
 else if (VAR_11 & VAR_7) {




  FUNC_3(VAR_10, VAR_0, VAR_6);
  FUNC_3(VAR_10, VAR_3, VAR_7);
  VAR_12->break_active = 0;
 }
}
