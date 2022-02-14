
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union sab82532_async_regs {int dummy; } sab82532_async_regs ;
struct TYPE_5__ {int membase; int line; } ;
struct uart_sunsab_port {TYPE_2__ port; } ;
struct TYPE_4__ {int of_node; } ;
struct platform_device {int * resource; TYPE_1__ dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct platform_device*,struct uart_sunsab_port*) ;
 int FUNC_3 (struct uart_sunsab_port*,struct platform_device*,int,int) ;
 struct uart_sunsab_port* VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ,int ,int *,int ,int) ;
 int FUNC_5 (int *,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_2)
{
 static int VAR_3;
 struct uart_sunsab_port *VAR_4;
 int VAR_5;

 VAR_4 = &VAR_0[VAR_3 * 2];

 VAR_5 = FUNC_3(&VAR_4[0], VAR_2,
         0,
         (VAR_3 * 2) + 0);
 if (VAR_5)
  goto out;

 VAR_5 = FUNC_3(&VAR_4[1], VAR_2,
         sizeof(union sab82532_async_regs),
         (VAR_3 * 2) + 1);
 if (VAR_5)
  goto out1;

 FUNC_4(FUNC_0(), VAR_2->dev.of_node,
    &VAR_1, VAR_4[0].port.line,
    0);

 FUNC_4(FUNC_0(), VAR_2->dev.of_node,
    &VAR_1, VAR_4[1].port.line,
    0);

 VAR_5 = FUNC_5(&VAR_1, &VAR_4[0].port);
 if (VAR_5)
  goto out2;

 VAR_5 = FUNC_5(&VAR_1, &VAR_4[1].port);
 if (VAR_5)
  goto out3;

 FUNC_2(VAR_2, &VAR_4[0]);

 VAR_3++;

 return 0;

out3:
 FUNC_6(&VAR_1, &VAR_4[0].port);
out2:
 FUNC_1(&VAR_2->resource[0],
     VAR_4[1].port.membase,
     sizeof(union sab82532_async_regs));
out1:
 FUNC_1(&VAR_2->resource[0],
     VAR_4[0].port.membase,
     sizeof(union sab82532_async_regs));
out:
 return VAR_5;
}
