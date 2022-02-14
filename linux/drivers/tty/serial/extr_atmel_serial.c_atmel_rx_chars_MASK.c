
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct atmel_uart_port {int break_active; int tasklet_rx; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (struct uart_port*,unsigned int,unsigned int) ;
 int FUNC_1 (struct atmel_uart_port*,int *) ;
 unsigned int FUNC_2 (struct uart_port*) ;
 unsigned int FUNC_3 (struct uart_port*,int ) ;
 int FUNC_4 (struct uart_port*,int ,unsigned int) ;
 struct atmel_uart_port* FUNC_5 (struct uart_port*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct uart_port *VAR_10)
{
 struct atmel_uart_port *VAR_11 = FUNC_5(VAR_10);
 unsigned int VAR_12, VAR_13;

 VAR_12 = FUNC_3(VAR_10, VAR_1);
 while (VAR_12 & VAR_9) {
  VAR_13 = FUNC_2(VAR_10);





  if (FUNC_6(VAR_12 & (VAR_6 | VAR_2
           | VAR_5 | VAR_8)
        || VAR_11->break_active)) {


   FUNC_4(VAR_10, VAR_0, VAR_7);

   if (VAR_12 & VAR_8
       && !VAR_11->break_active) {
    VAR_11->break_active = 1;
    FUNC_4(VAR_10, VAR_4,
        VAR_8);
   } else {







    FUNC_4(VAR_10, VAR_3,
        VAR_8);
    VAR_12 &= ~VAR_8;
    VAR_11->break_active = 0;
   }
  }

  FUNC_0(VAR_10, VAR_12, VAR_13);
  VAR_12 = FUNC_3(VAR_10, VAR_1);
 }

 FUNC_1(VAR_11, &VAR_11->tasklet_rx);
}
