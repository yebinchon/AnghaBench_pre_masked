
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ membase; } ;
struct uart_sunsu_port {scalar_t__ su_type; int reg_size; TYPE_1__ port; int serio; } ;
struct platform_device {int * resource; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct uart_sunsu_port*) ;
 int FUNC_1 (int *,scalar_t__,int ) ;
 struct uart_sunsu_port* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_4)
{
 struct uart_sunsu_port *VAR_5 = FUNC_2(VAR_4);
 bool VAR_6 = 0;

 if (VAR_5->su_type == VAR_2 ||
     VAR_5->su_type == VAR_1)
  VAR_6 = 1;

 if (VAR_6) {



 } else if (VAR_5->port.type != VAR_0)
  FUNC_4(&VAR_3, &VAR_5->port);

 if (VAR_5->port.membase)
  FUNC_1(&VAR_4->resource[0], VAR_5->port.membase, VAR_5->reg_size);

 if (VAR_6)
  FUNC_0(VAR_5);

 return 0;
}
