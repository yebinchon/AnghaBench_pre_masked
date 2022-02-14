
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct uart_8250_port {struct uart_port port; } ;
struct TYPE_2__ {int port; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct uart_8250_port*,unsigned char) ;
 unsigned char FUNC_1 (struct uart_8250_port*,int ) ;
 int FUNC_2 (int *) ;

unsigned char FUNC_3(struct uart_8250_port *VAR_3, unsigned char VAR_4)
{
 struct uart_port *VAR_5 = &VAR_3->port;
 int VAR_6 = 256;

 do {
  FUNC_0(VAR_3, VAR_4);
  if (--VAR_6 == 0)
   break;
  VAR_4 = FUNC_1(VAR_3, VAR_0);
 } while (VAR_4 & (VAR_2 | VAR_1));

 FUNC_2(&VAR_5->state->port);
 return VAR_4;
}
