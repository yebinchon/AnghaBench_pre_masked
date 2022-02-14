
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int flags; int uartclk; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct uart_8250_port {int bugs; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (struct uart_8250_port*,unsigned int) ;
 unsigned int FUNC_1 (struct uart_port*,unsigned int) ;
 struct uart_8250_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_3,
           unsigned int VAR_4,
           unsigned int *VAR_5)
{
 struct uart_8250_port *VAR_6 = FUNC_2(VAR_3);
 unsigned int VAR_7;






 if ((VAR_3->flags & VAR_2) &&
     VAR_4 == (VAR_3->uartclk/4))
  VAR_7 = 0x8001;
 else if ((VAR_3->flags & VAR_2) &&
   VAR_4 == (VAR_3->uartclk/8))
  VAR_7 = 0x8002;
 else if (VAR_6->port.type == VAR_0)
  VAR_7 = FUNC_0(VAR_6, VAR_4);
 else
  VAR_7 = FUNC_1(VAR_3, VAR_4);




 if (VAR_6->bugs & VAR_1 && (VAR_7 & 0xff) == 0)
  VAR_7++;

 return VAR_7;
}
