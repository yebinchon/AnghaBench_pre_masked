
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct uart_8250_port {unsigned char mcr_mask; unsigned char mcr_force; unsigned char mcr; } ;


 unsigned char FUNC_0 (unsigned int) ;
 int FUNC_1 (struct uart_8250_port*,unsigned char) ;
 struct uart_8250_port* FUNC_2 (struct uart_port*) ;

void FUNC_3(struct uart_port *VAR_0, unsigned int VAR_1)
{
 struct uart_8250_port *VAR_2 = FUNC_2(VAR_0);
 unsigned char VAR_3;

 VAR_3 = FUNC_0(VAR_1);

 VAR_3 = (VAR_3 & VAR_2->mcr_mask) | VAR_2->mcr_force | VAR_2->mcr;

 FUNC_1(VAR_2, VAR_3);
}
