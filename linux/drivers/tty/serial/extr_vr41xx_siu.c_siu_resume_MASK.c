
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {scalar_t__ type; int * dev; } ;
struct platform_device {int dev; } ;
struct TYPE_3__ {int nr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct uart_port* VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct uart_port*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_4)
{
 struct uart_port *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2.nr; VAR_6++) {
  VAR_5 = &VAR_3[VAR_6];
  if ((VAR_5->type == VAR_1 ||
       VAR_5->type == VAR_0) && VAR_5->dev == &VAR_4->dev)
   FUNC_0(&VAR_2, VAR_5);
 }

 return 0;
}
