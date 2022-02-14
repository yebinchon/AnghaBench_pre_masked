
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_xusb {int hs_src_clk; int fs_src_clk; int falcon_clk; int ss_clk; int host_clk; int pll_e; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct tegra_xusb *VAR_0)
{
 FUNC_0(VAR_0->pll_e);
 FUNC_0(VAR_0->host_clk);
 FUNC_0(VAR_0->ss_clk);
 FUNC_0(VAR_0->falcon_clk);
 FUNC_0(VAR_0->fs_src_clk);
 FUNC_0(VAR_0->hs_src_clk);
}
