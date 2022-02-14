
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_uart_port {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct tegra_uart_port*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct tegra_uart_port *VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5 = 100;

 do {
  VAR_4 = FUNC_0(VAR_3, VAR_2);
  if (VAR_4 & VAR_1)
   return 0;
  FUNC_1(1);
 } while (--VAR_5);

 return -VAR_0;
}
