
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int * dev; } ;
struct uart_8250_port {TYPE_1__ port; } ;
struct platform_device {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct uart_8250_port* VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  struct uart_8250_port *VAR_5 = &VAR_2[VAR_4];

  if (VAR_5->port.type != VAR_0 && VAR_5->port.dev == &VAR_3->dev)
   FUNC_0(VAR_4);
 }

 return 0;
}
