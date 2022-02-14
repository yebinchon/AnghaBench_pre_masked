
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {unsigned int (* serial_in ) (struct uart_port*,int ) ;int (* serial_out ) (struct uart_port*,int ,unsigned int) ;} ;
struct uart_8250_port {int capabilities; } ;
struct ktermios {scalar_t__ c_line; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct uart_port*,struct ktermios*) ;
 unsigned int FUNC_1 (struct uart_port*,int ) ;
 int FUNC_2 (struct uart_port*,int ,unsigned int) ;
 struct uart_8250_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_4, struct ktermios *VAR_5)
{
 struct uart_8250_port *VAR_6 = FUNC_3(VAR_4);
 unsigned int VAR_7 = VAR_4->serial_in(VAR_4, VAR_3);

 if (VAR_6->capabilities & VAR_2) {
  if (VAR_5->c_line == VAR_1)
   VAR_7 |= VAR_0;
  else
   VAR_7 &= ~VAR_0;

  VAR_4->serial_out(VAR_4, VAR_3, VAR_7);
 }
 FUNC_0(VAR_4, VAR_5);
}
