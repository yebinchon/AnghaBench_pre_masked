
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; } ;
struct efm32_uart_port {int clk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct efm32_uart_port*,int ,int ) ;
 int FUNC_2 (int ,struct efm32_uart_port*) ;
 struct efm32_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_1)
{
 struct efm32_uart_port *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_2, 0, VAR_0);
 FUNC_2(VAR_1->irq, VAR_2);

 FUNC_0(VAR_2->clk);
}
