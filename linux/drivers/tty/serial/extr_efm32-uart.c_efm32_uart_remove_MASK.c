
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct TYPE_2__ {unsigned int line; } ;
struct efm32_uart_port {TYPE_1__ port; } ;


 unsigned int FUNC_0 (int **) ;
 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct efm32_uart_port*) ;
 struct efm32_uart_port* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_2)
{
 struct efm32_uart_port *VAR_3 = FUNC_2(VAR_2);
 unsigned int VAR_4 = VAR_3->port.line;

 FUNC_3(&VAR_1, &VAR_3->port);

 if (VAR_4 >= 0 && VAR_4 < FUNC_0(VAR_0))
  VAR_0[VAR_4] = ((void*)0);

 FUNC_1(VAR_3);

 return 0;
}
