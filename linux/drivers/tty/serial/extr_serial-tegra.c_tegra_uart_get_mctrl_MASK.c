
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct tegra_uart_port {scalar_t__ enable_modem_interrupt; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 struct tegra_uart_port* FUNC_0 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_1(struct uart_port *VAR_4)
{
 struct tegra_uart_port *VAR_5 = FUNC_0(VAR_4);
 if (VAR_5->enable_modem_interrupt)
  return VAR_3 | VAR_0 | VAR_2 | VAR_1;
 return VAR_1;
}
