
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_4__ {int dsr; int rng; } ;
struct TYPE_5__ {TYPE_1__ icount; } ;
struct tegra_uart_port {TYPE_2__ uport; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long FUNC_0 (struct tegra_uart_port*,int ) ;
 struct tegra_uart_port* FUNC_1 (struct uart_port*) ;
 int FUNC_2 (TYPE_2__*,unsigned long) ;
 int FUNC_3 (TYPE_2__*,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct uart_port *VAR_8)
{
 struct tegra_uart_port *VAR_9 = FUNC_1(VAR_8);
 unsigned long VAR_10;

 VAR_10 = FUNC_0(VAR_9, VAR_0);
 if (!(VAR_10 & VAR_1))
  return;

 if (VAR_10 & VAR_7)
  VAR_9->uport.icount.rng++;
 if (VAR_10 & VAR_6)
  VAR_9->uport.icount.dsr++;

 if (VAR_10 & VAR_5)
  FUNC_3(&VAR_9->uport, VAR_10 & VAR_3);

 if (VAR_10 & VAR_4)
  FUNC_2(&VAR_9->uport, VAR_10 & VAR_2);
}
