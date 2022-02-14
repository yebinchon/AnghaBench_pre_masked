
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_8250_port {scalar_t__ dma; } ;
typedef int irqreturn_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct uart_port*) ;
 int FUNC_2 (struct uart_port*,unsigned int) ;
 int FUNC_3 (struct uart_8250_port*) ;
 int FUNC_4 (struct uart_8250_port*) ;
 unsigned int FUNC_5 (struct uart_port*,int ) ;
 struct uart_8250_port* FUNC_6 (struct uart_port*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct uart_port *VAR_3 = VAR_2;
 struct uart_8250_port *VAR_4 = FUNC_6(VAR_3);
 unsigned int VAR_5;
 int VAR_6;
 FUNC_3(VAR_4);
 VAR_5 = FUNC_5(VAR_3, VAR_0);
 VAR_6 = FUNC_2(VAR_3, VAR_5);
 FUNC_4(VAR_4);

 return FUNC_0(VAR_6);
}
