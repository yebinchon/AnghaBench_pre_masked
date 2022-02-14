
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct sirfsoc_uart_port {int clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sirfsoc_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0, unsigned int VAR_1,
         unsigned int VAR_2)
{
 struct sirfsoc_uart_port *VAR_3 = FUNC_2(VAR_0);
 if (!VAR_1)
  FUNC_1(VAR_3->clk);
 else
  FUNC_0(VAR_3->clk);
}
