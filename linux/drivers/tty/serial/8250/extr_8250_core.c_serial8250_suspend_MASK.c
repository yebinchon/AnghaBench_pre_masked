
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int * dev; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct platform_device {int dev; } ;
typedef int pm_message_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct uart_8250_port* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_4, pm_message_t VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  struct uart_8250_port *VAR_7 = &VAR_2[VAR_6];

  if (VAR_7->port.type != VAR_0 && VAR_7->port.dev == &VAR_4->dev)
   FUNC_0(&VAR_3, &VAR_7->port);
 }

 return 0;
}
