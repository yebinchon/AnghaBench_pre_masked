
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u64 ;
struct uart_port {int dummy; } ;
struct serial_iso7816 {int clk; } ;
struct atmel_uart_port {int clk; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 struct atmel_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_3(struct uart_port *VAR_0,
      struct serial_iso7816 *VAR_1)
{
 struct atmel_uart_port *VAR_2 = FUNC_2(VAR_0);
 unsigned int VAR_3;
 u64 VAR_4;

 VAR_4 = (u64)FUNC_0(VAR_2->clk);
 FUNC_1(VAR_4, VAR_1->clk);
 VAR_3 = VAR_4;
 return VAR_3;
}
