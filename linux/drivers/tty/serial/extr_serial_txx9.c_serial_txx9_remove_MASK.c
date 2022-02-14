
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * dev; } ;
struct uart_txx9_port {TYPE_1__ port; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 struct uart_txx9_port* VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  struct uart_txx9_port *VAR_4 = &VAR_1[VAR_3];

  if (VAR_4->port.dev == &VAR_2->dev)
   FUNC_0(VAR_3);
 }
 return 0;
}
