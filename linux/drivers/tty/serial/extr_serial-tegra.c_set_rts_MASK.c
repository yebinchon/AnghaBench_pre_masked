
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_uart_port {unsigned long mcr_shadow; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tegra_uart_port*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_1(struct tegra_uart_port *VAR_2, bool VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_2->mcr_shadow;
 if (VAR_3)
  VAR_4 |= VAR_0;
 else
  VAR_4 &= ~VAR_0;
 if (VAR_4 != VAR_2->mcr_shadow) {
  FUNC_0(VAR_2, VAR_4, VAR_1);
  VAR_2->mcr_shadow = VAR_4;
 }
}
