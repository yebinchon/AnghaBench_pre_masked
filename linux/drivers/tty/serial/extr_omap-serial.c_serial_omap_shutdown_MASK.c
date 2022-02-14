
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int irq; int lock; int mctrl; int line; int dev; } ;
struct uart_omap_port {int dev; TYPE_1__ port; scalar_t__ ier; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct uart_omap_port*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct uart_omap_port*,int ) ;
 int FUNC_7 (struct uart_omap_port*) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (struct uart_omap_port*,int ,int) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 struct uart_omap_port* FUNC_12 (struct uart_port*) ;

__attribute__((used)) static void FUNC_13(struct uart_port *VAR_7)
{
 struct uart_omap_port *VAR_8 = FUNC_12(VAR_7);
 unsigned long VAR_9 = 0;

 FUNC_0(VAR_8->port.dev, "serial_omap_shutdown+%d\n", VAR_8->port.line);

 FUNC_3(VAR_8->dev);



 VAR_8->ier = 0;
 FUNC_9(VAR_8, VAR_1, 0);

 FUNC_10(&VAR_8->port.lock, VAR_9);
 VAR_8->port.mctrl &= ~VAR_0;
 FUNC_8(&VAR_8->port, VAR_8->port.mctrl);
 FUNC_11(&VAR_8->port.lock, VAR_9);




 FUNC_9(VAR_8, VAR_2, FUNC_6(VAR_8, VAR_2) & ~VAR_3);
 FUNC_7(VAR_8);




 if (FUNC_6(VAR_8, VAR_4) & VAR_5)
  (void) FUNC_6(VAR_8, VAR_6);

 FUNC_4(VAR_8->dev);
 FUNC_5(VAR_8->dev);
 FUNC_2(VAR_8->port.irq, VAR_8);
 FUNC_1(VAR_8->dev);
}
