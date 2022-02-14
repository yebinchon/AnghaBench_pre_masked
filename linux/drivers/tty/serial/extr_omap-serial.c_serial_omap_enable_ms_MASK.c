
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int line; int dev; } ;
struct uart_omap_port {int dev; int ier; TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct uart_omap_port*,int ,int ) ;
 struct uart_omap_port* FUNC_5 (struct uart_port*) ;

__attribute__((used)) static void FUNC_6(struct uart_port *VAR_2)
{
 struct uart_omap_port *VAR_3 = FUNC_5(VAR_2);

 FUNC_0(VAR_3->port.dev, "serial_omap_enable_ms+%d\n", VAR_3->port.line);

 FUNC_1(VAR_3->dev);
 VAR_3->ier |= VAR_1;
 FUNC_4(VAR_3, VAR_0, VAR_3->ier);
 FUNC_2(VAR_3->dev);
 FUNC_3(VAR_3->dev);
}
