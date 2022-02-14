
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ar933x_uart_port {int clk; int port; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct ar933x_uart_port* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct ar933x_uart_port *VAR_2;

 VAR_2 = FUNC_1(VAR_1);

 if (VAR_2) {
  FUNC_2(&VAR_0, &VAR_2->port);
  FUNC_0(VAR_2->clk);
 }

 return 0;
}
