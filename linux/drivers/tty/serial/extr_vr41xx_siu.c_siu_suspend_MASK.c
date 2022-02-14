
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct uart_port {scalar_t__ type; int * dev; } ;
struct platform_device {int dev; } ;
typedef int pm_message_t ;
struct TYPE_3__ {int nr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 struct uart_port* VAR_3 ;
 int FUNC_0 (TYPE_1__*,struct uart_port*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_4, pm_message_t VAR_5)
{
 struct uart_port *VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2.nr; VAR_7++) {
  VAR_6 = &VAR_3[VAR_7];
  if ((VAR_6->type == VAR_1 ||
       VAR_6->type == VAR_0) && VAR_6->dev == &VAR_4->dev)
   FUNC_0(&VAR_2, VAR_6);

 }

 return 0;
}
