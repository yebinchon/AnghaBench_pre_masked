
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;
struct ktermios {int dummy; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct uart_port*,struct ktermios*,struct ktermios*,int,int) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_1,
          struct ktermios *VAR_2,
          struct ktermios *VAR_3)
{






 return FUNC_0(VAR_1, VAR_2, VAR_3,
      VAR_1->uartclk / 16 / VAR_0,
      VAR_1->uartclk);
}
