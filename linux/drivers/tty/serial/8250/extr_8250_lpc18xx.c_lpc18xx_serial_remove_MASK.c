
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct lpc18xx_uart_data {int clk_reg; int clk_uart; int line; } ;


 int FUNC_0 (int ) ;
 struct lpc18xx_uart_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct lpc18xx_uart_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->line);
 FUNC_0(VAR_1->clk_uart);
 FUNC_0(VAR_1->clk_reg);

 return 0;
}
