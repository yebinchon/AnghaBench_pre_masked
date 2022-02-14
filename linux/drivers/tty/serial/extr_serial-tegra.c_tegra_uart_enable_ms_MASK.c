
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int dummy; } ;
struct tegra_uart_port {int ier_shadow; scalar_t__ enable_modem_interrupt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_uart_port*,int ,int ) ;
 struct tegra_uart_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_2)
{
 struct tegra_uart_port *VAR_3 = FUNC_1(VAR_2);

 if (VAR_3->enable_modem_interrupt) {
  VAR_3->ier_shadow |= VAR_1;
  FUNC_0(VAR_3, VAR_3->ier_shadow, VAR_0);
 }
}
