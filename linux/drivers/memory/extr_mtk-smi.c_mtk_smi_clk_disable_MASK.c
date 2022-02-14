
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_smi {int clk_apb; int clk_smi; int clk_gals0; int clk_gals1; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(const struct mtk_smi *VAR_0)
{
 FUNC_0(VAR_0->clk_gals1);
 FUNC_0(VAR_0->clk_gals0);
 FUNC_0(VAR_0->clk_smi);
 FUNC_0(VAR_0->clk_apb);
}
