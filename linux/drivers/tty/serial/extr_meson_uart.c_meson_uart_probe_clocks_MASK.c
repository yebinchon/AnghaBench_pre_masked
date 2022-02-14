
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {int uartclk; } ;
struct platform_device {int dev; } ;
struct clk {int dummy; } ;


 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0,
       struct uart_port *VAR_1)
{
 struct clk *VAR_2 = ((void*)0);
 struct clk *VAR_3 = ((void*)0);
 struct clk *VAR_4 = ((void*)0);

 VAR_3 = FUNC_3(&VAR_0->dev, "pclk");
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_2 = FUNC_3(&VAR_0->dev, "xtal");
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);

 VAR_4 = FUNC_3(&VAR_0->dev, "baud");
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_1->uartclk = FUNC_2(VAR_4);

 return 0;
}
