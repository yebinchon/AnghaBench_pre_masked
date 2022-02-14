
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union sab82532_async_regs {int dummy; } sab82532_async_regs ;
struct TYPE_2__ {int membase; } ;
struct uart_sunsab_port {TYPE_1__ port; } ;
struct platform_device {int * resource; } ;


 int FUNC_0 (int *,int ,int) ;
 struct uart_sunsab_port* FUNC_1 (struct platform_device*) ;
 int VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct uart_sunsab_port *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_0, &VAR_2[1].port);
 FUNC_2(&VAR_0, &VAR_2[0].port);
 FUNC_0(&VAR_1->resource[0],
     VAR_2[1].port.membase,
     sizeof(union sab82532_async_regs));
 FUNC_0(&VAR_1->resource[0],
     VAR_2[0].port.membase,
     sizeof(union sab82532_async_regs));

 return 0;
}
