
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imx_port {int clk_ipg; int port; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct imx_port* FUNC_1 (struct device*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1)
{
 struct imx_port *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(&VAR_0, &VAR_2->port);

 return FUNC_0(VAR_2->clk_ipg);
}
