
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int lock; int line; int dev; } ;
struct uart_omap_port {int dev; TYPE_1__ port; int lcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uart_omap_port*,int ,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct uart_omap_port* FUNC_7 (struct uart_port*) ;

__attribute__((used)) static void FUNC_8(struct uart_port *VAR_2, int VAR_3)
{
 struct uart_omap_port *VAR_4 = FUNC_7(VAR_2);
 unsigned long VAR_5 = 0;

 FUNC_0(VAR_4->port.dev, "serial_omap_break_ctl+%d\n", VAR_4->port.line);
 FUNC_1(VAR_4->dev);
 FUNC_5(&VAR_4->port.lock, VAR_5);
 if (VAR_3 == -1)
  VAR_4->lcr |= VAR_1;
 else
  VAR_4->lcr &= ~VAR_1;
 FUNC_4(VAR_4, VAR_0, VAR_4->lcr);
 FUNC_6(&VAR_4->port.lock, VAR_5);
 FUNC_2(VAR_4->dev);
 FUNC_3(VAR_4->dev);
}
