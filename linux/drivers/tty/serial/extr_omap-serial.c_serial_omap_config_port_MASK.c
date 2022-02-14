
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int flags; int type; int line; int dev; } ;
struct uart_omap_port {TYPE_1__ port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 struct uart_omap_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static void FUNC_2(struct uart_port *VAR_3, int VAR_4)
{
 struct uart_omap_port *VAR_5 = FUNC_1(VAR_3);

 FUNC_0(VAR_5->port.dev, "serial_omap_config_port+%d\n",
       VAR_5->port.line);
 VAR_5->port.type = VAR_0;
 VAR_5->port.flags |= VAR_2 | VAR_1;
}
