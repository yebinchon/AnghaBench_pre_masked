
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int irq; } ;
struct tegra_uart_port {int dummy; } ;


 int FUNC_0 (int ,struct tegra_uart_port*) ;
 int FUNC_1 (struct tegra_uart_port*) ;
 struct tegra_uart_port* FUNC_2 (struct uart_port*) ;

__attribute__((used)) static void FUNC_3(struct uart_port *VAR_0)
{
 struct tegra_uart_port *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1);
 FUNC_0(VAR_0->irq, VAR_1);
}
