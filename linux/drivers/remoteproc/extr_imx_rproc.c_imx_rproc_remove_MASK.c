
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {struct imx_rproc* priv; } ;
struct platform_device {int dummy; } ;
struct imx_rproc {int clk; } ;


 int FUNC_0 (int ) ;
 struct rproc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct rproc*) ;
 int FUNC_3 (struct rproc*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct rproc *VAR_1 = FUNC_1(VAR_0);
 struct imx_rproc *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_2->clk);
 FUNC_2(VAR_1);
 FUNC_3(VAR_1);

 return 0;
}
