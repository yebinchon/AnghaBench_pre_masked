
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;
struct uart_8250_port {int capabilities; scalar_t__ canary; struct uart_port port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uart_8250_port*) ;
 struct uart_8250_port* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct uart_port*,int ,int) ;
 int FUNC_2 (int *,struct uart_port*) ;

void FUNC_3(int VAR_4)
{
 struct uart_8250_port *VAR_5 = &VAR_2[VAR_4];
 struct uart_port *VAR_6 = &VAR_5->port;

 VAR_5->canary = 0;

 if (VAR_5->capabilities & VAR_1) {

  FUNC_1(VAR_6, VAR_0, 0xE0);

  FUNC_0(VAR_5);

  FUNC_1(VAR_6, VAR_0, 0);
  VAR_6->uartclk = 921600*16;
 }
 FUNC_2(&VAR_3, VAR_6);
}
