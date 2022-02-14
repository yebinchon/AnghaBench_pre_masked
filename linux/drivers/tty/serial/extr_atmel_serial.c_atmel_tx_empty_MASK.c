
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct uart_port {int dummy; } ;
struct atmel_uart_port {scalar_t__ tx_stopped; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct uart_port*,int ) ;
 struct atmel_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static u_int FUNC_2(struct uart_port *VAR_3)
{
 struct atmel_uart_port *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->tx_stopped)
  return VAR_2;
 return (FUNC_0(VAR_3, VAR_0) & VAR_1) ?
  VAR_2 :
  0;
}
