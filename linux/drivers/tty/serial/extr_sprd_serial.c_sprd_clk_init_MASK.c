
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uart_port {size_t line; int dev; int uartclk; } ;
struct sprd_uart_port {struct clk* clk; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*) ;
 int VAR_1 ;
 int FUNC_2 (struct clk*) ;
 scalar_t__ FUNC_3 (struct clk*,struct clk*) ;
 int FUNC_4 (int ,char*,size_t) ;
 void* FUNC_5 (int ,char*) ;
 struct sprd_uart_port** VAR_2 ;
 int FUNC_6 (struct uart_port*) ;

__attribute__((used)) static int FUNC_7(struct uart_port *VAR_3)
{
 struct clk *VAR_4, *VAR_5;
 struct sprd_uart_port *VAR_6 = VAR_2[VAR_3->line];

 VAR_4 = FUNC_5(VAR_3->dev, "uart");
 if (FUNC_0(VAR_4)) {
  FUNC_4(VAR_3->dev, "uart%d can't get uart clock\n",
    VAR_3->line);
  VAR_4 = ((void*)0);
 }

 VAR_5 = FUNC_5(VAR_3->dev, "source");
 if (FUNC_0(VAR_5)) {
  FUNC_4(VAR_3->dev, "uart%d can't get source clock\n",
    VAR_3->line);
  VAR_5 = ((void*)0);
 }

 if (!VAR_4 || FUNC_3(VAR_4, VAR_5))
  VAR_3->uartclk = VAR_1;
 else
  VAR_3->uartclk = FUNC_2(VAR_4);

 VAR_6->clk = FUNC_5(VAR_3->dev, "enable");
 if (FUNC_0(VAR_6->clk)) {
  if (FUNC_1(VAR_6->clk) == -VAR_0)
   return -VAR_0;

  FUNC_4(VAR_3->dev, "uart%d can't get enable clock\n",
   VAR_3->line);


  if (!FUNC_6(VAR_3))
   return FUNC_1(VAR_6->clk);

  VAR_6->clk = ((void*)0);
 }

 return 0;
}
