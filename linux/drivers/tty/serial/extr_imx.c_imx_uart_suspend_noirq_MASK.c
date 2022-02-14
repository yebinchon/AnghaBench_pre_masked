
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_port {int clk_ipg; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct imx_port* FUNC_1 (struct device*) ;
 int FUNC_2 (struct imx_port*) ;
 int FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0)
{
 struct imx_port *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1);

 FUNC_0(VAR_1->clk_ipg);

 FUNC_3(VAR_0);

 return 0;
}
