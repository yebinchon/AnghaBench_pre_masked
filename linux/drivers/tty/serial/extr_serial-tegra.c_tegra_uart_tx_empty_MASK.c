
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int lock; } ;
struct tegra_uart_port {int tx_in_progress; } ;


 unsigned int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned long FUNC_2 (struct tegra_uart_port*,int ) ;
 struct tegra_uart_port* FUNC_3 (struct uart_port*) ;

__attribute__((used)) static unsigned int FUNC_4(struct uart_port *VAR_3)
{
 struct tegra_uart_port *VAR_4 = FUNC_3(VAR_3);
 unsigned int VAR_5 = 0;
 unsigned long VAR_6;

 FUNC_0(&VAR_3->lock, VAR_6);
 if (!VAR_4->tx_in_progress) {
  unsigned long VAR_7 = FUNC_2(VAR_4, VAR_2);
  if ((VAR_7 & VAR_1) == VAR_1)
   VAR_5 = VAR_0;
 }
 FUNC_1(&VAR_3->lock, VAR_6);
 return VAR_5;
}
