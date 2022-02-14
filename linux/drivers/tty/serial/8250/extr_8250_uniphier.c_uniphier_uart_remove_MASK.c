
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier8250_priv {int clk; int line; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct uniphier8250_priv* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct uniphier8250_priv *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->line);
 FUNC_0(VAR_1->clk);

 return 0;
}
