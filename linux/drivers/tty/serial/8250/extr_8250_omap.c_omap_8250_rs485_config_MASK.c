
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_rs485 {int flags; void* delay_rts_after_send; void* delay_rts_before_send; } ;
struct uart_port {struct serial_rs485 rs485; } ;
struct uart_8250_port {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,unsigned int) ;
 int FUNC_1 (struct uart_8250_port*) ;
 int FUNC_2 (struct uart_8250_port*) ;
 struct uart_8250_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static int FUNC_4(struct uart_port *VAR_1,
      struct serial_rs485 *VAR_2)
{
 struct uart_8250_port *VAR_3 = FUNC_3(VAR_1);


 VAR_2->delay_rts_before_send = FUNC_0(VAR_2->delay_rts_before_send, 100U);
 VAR_2->delay_rts_after_send = FUNC_0(VAR_2->delay_rts_after_send, 100U);

 VAR_1->rs485 = *VAR_2;





 if (VAR_2->flags & VAR_0) {
  int VAR_4 = FUNC_2(VAR_3);

  if (VAR_4) {
   VAR_2->flags &= ~VAR_0;
   VAR_1->rs485.flags &= ~VAR_0;
  }
  return VAR_4;
 }

 FUNC_1(VAR_3);

 return 0;
}
