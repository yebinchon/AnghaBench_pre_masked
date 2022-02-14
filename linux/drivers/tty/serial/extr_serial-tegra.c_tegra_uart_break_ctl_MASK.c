
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct tegra_uart_port {unsigned long lcr_shadow; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct tegra_uart_port*,unsigned long,int ) ;
 struct tegra_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2, int VAR_3)
{
 struct tegra_uart_port *VAR_4 = FUNC_1(VAR_2);
 unsigned long VAR_5;

 VAR_5 = VAR_4->lcr_shadow;
 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;
 FUNC_0(VAR_4, VAR_5, VAR_0);
 VAR_4->lcr_shadow = VAR_5;
}
