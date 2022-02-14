
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ingenic_uart_data {int clk_baud; int clk_module; int line; } ;


 int FUNC_0 (int ) ;
 struct ingenic_uart_data* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ingenic_uart_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->line);
 FUNC_0(VAR_1->clk_module);
 FUNC_0(VAR_1->clk_baud);
 return 0;
}
