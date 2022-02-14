
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uart_port {int dummy; } ;
struct TYPE_2__ {int line; int dev; } ;
struct uart_omap_port {char const* name; TYPE_1__ port; } ;


 int FUNC_0 (int ,char*,int ) ;
 struct uart_omap_port* FUNC_1 (struct uart_port*) ;

__attribute__((used)) static const char *
FUNC_2(struct uart_port *VAR_0)
{
 struct uart_omap_port *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->port.dev, "serial_omap_type+%d\n", VAR_1->port.line);
 return VAR_1->name;
}
