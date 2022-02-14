
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_smi {int clk_apb; int clk_smi; int clk_gals0; int clk_gals1; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(const struct mtk_smi *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_1(VAR_0->clk_apb);
 if (VAR_1)
  return VAR_1;

 VAR_1 = FUNC_1(VAR_0->clk_smi);
 if (VAR_1)
  goto err_disable_apb;

 VAR_1 = FUNC_1(VAR_0->clk_gals0);
 if (VAR_1)
  goto err_disable_smi;

 VAR_1 = FUNC_1(VAR_0->clk_gals1);
 if (VAR_1)
  goto err_disable_gals0;

 return 0;

err_disable_gals0:
 FUNC_0(VAR_0->clk_gals0);
err_disable_smi:
 FUNC_0(VAR_0->clk_smi);
err_disable_apb:
 FUNC_0(VAR_0->clk_apb);
 return VAR_1;
}
