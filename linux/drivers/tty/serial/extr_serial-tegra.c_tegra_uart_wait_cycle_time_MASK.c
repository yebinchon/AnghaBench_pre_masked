
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_uart_port {int current_baud; } ;


 int FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_uart_port *VAR_0,
           unsigned int VAR_1)
{
 if (VAR_0->current_baud)
  FUNC_1(FUNC_0(VAR_1 * 1000000, VAR_0->current_baud * 16));
}
