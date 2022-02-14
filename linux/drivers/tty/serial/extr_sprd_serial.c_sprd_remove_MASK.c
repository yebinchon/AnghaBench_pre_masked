
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t line; } ;
struct sprd_uart_port {TYPE_1__ port; } ;
struct platform_device {int dummy; } ;


 struct sprd_uart_port* FUNC_0 (struct platform_device*) ;
 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sprd_uart_port*) ;
 int VAR_2 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3)
{
 struct sprd_uart_port *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4) {
  FUNC_2(&VAR_2, &VAR_4->port);
  VAR_0[VAR_4->port.line] = ((void*)0);
  VAR_1--;
 }

 if (!VAR_1)
  FUNC_3(&VAR_2);

 FUNC_1(VAR_4);

 return 0;
}
