
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_8250_port {int capabilities; int lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct uart_8250_port*) ;
 int FUNC_1 (struct uart_8250_port*,unsigned int) ;
 int FUNC_2 (struct uart_port*,int ,int) ;
 struct uart_8250_port* FUNC_3 (struct uart_port*) ;

void FUNC_4(struct uart_port *VAR_4, unsigned int VAR_5,
          unsigned int VAR_6, unsigned int VAR_7)
{
 struct uart_8250_port *VAR_8 = FUNC_3(VAR_4);


 if (FUNC_0(VAR_8)) {
  if (VAR_5 == 115200) {
   VAR_6 = 1;
   FUNC_2(VAR_4, VAR_3, 1);
  } else
   FUNC_2(VAR_4, VAR_3, 0);
 }





 if (VAR_8->capabilities & VAR_2)
  FUNC_2(VAR_4, VAR_0, 0xe0);
 else
  FUNC_2(VAR_4, VAR_0, VAR_8->lcr | VAR_1);

 FUNC_1(VAR_8, VAR_6);
}
