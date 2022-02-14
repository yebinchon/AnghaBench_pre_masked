
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int membase; } ;
struct efm32_uart_port {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct efm32_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_0)
{
 struct efm32_uart_port *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->clk);
 FUNC_0(VAR_1->clk);
 FUNC_2(VAR_0->membase);
}
