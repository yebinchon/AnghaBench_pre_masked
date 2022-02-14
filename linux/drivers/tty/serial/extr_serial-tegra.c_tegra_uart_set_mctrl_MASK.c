
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct tegra_uart_port {int rts_active; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct tegra_uart_port*,int) ;
 int FUNC_1 (struct tegra_uart_port*,int) ;
 int FUNC_2 (struct tegra_uart_port*,int) ;
 struct tegra_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_3, unsigned int VAR_4)
{
 struct tegra_uart_port *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 VAR_5->rts_active = !!(VAR_4 & VAR_2);
 FUNC_2(VAR_5, VAR_5->rts_active);

 VAR_6 = !!(VAR_4 & VAR_0);
 FUNC_0(VAR_5, VAR_6);

 VAR_6 = !!(VAR_4 & VAR_1);
 FUNC_1(VAR_5, VAR_6);
}
