
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct tegra_uart_port {struct uart_port uport; } ;
struct platform_device {int dummy; } ;


 struct tegra_uart_port* FUNC_0 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct uart_port*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_1)
{
 struct tegra_uart_port *VAR_2 = FUNC_0(VAR_1);
 struct uart_port *VAR_3 = &VAR_2->uport;

 FUNC_1(&VAR_0, VAR_3);
 return 0;
}
