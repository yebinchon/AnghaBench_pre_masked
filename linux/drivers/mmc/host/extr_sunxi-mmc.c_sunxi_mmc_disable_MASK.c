
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sunxi_mmc_host {int reset; int clk_ahb; int clk_mmc; int clk_output; int clk_sample; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sunxi_mmc_host*) ;

__attribute__((used)) static void FUNC_4(struct sunxi_mmc_host *VAR_0)
{
 FUNC_3(VAR_0);

 FUNC_1(VAR_0->clk_sample);
 FUNC_1(VAR_0->clk_output);
 FUNC_1(VAR_0->clk_mmc);
 FUNC_1(VAR_0->clk_ahb);

 if (!FUNC_0(VAR_0->reset))
  FUNC_2(VAR_0->reset);
}
