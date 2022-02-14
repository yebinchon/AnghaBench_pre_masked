
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct uart_port {int * dev; } ;
struct platform_device {int dev; } ;
struct TYPE_4__ {int nr; } ;


 TYPE_1__ VAR_0 ;
 struct uart_port* VAR_1 ;
 int FUNC_0 (TYPE_1__*,struct uart_port*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_2)
{
 struct uart_port *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0.nr; VAR_4++) {
  VAR_3 = &VAR_1[VAR_4];
  if (VAR_3->dev == &VAR_2->dev) {
   FUNC_0(&VAR_0, VAR_3);
   VAR_3->dev = ((void*)0);
  }
 }

 FUNC_1(&VAR_0);

 return 0;
}
