
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {TYPE_1__* state; } ;
struct uart_8250_port {int dummy; } ;
struct circ_buf {int dummy; } ;
struct TYPE_2__ {struct circ_buf xmit; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (struct uart_port*) ;
 unsigned char FUNC_1 (struct uart_8250_port*,int ) ;
 int FUNC_2 (struct circ_buf*) ;
 struct uart_8250_port* FUNC_3 (struct uart_port*) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static void FUNC_5(struct uart_port *VAR_3)
{
 unsigned char VAR_4;
 bool VAR_5 = 0;
 struct uart_8250_port *VAR_6 = FUNC_3(VAR_3);
 struct circ_buf *VAR_7 = &VAR_3->state->xmit;
 int VAR_8 = 0;

 do {
  VAR_4 = FUNC_1(VAR_6, VAR_0);
  if (VAR_4 & (VAR_1 | VAR_2))
   VAR_5 = 1;
  else
   VAR_5 = 0;
  FUNC_4(1000, 1100);
 } while (!FUNC_2(VAR_7) && !VAR_5 && VAR_8++ < 1000);

 FUNC_0(VAR_3);
}
