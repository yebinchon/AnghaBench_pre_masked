
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_xusb {int pll_e; int host_clk; int ss_clk; int falcon_clk; int fs_src_clk; int hs_src_clk; TYPE_1__* soc; } ;
struct TYPE_2__ {scalar_t__ scale_ss_clock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tegra_xusb*,int ) ;

__attribute__((used)) static int FUNC_3(struct tegra_xusb *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->pll_e);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1->host_clk);
 if (VAR_2 < 0)
  goto disable_plle;

 VAR_2 = FUNC_1(VAR_1->ss_clk);
 if (VAR_2 < 0)
  goto disable_host;

 VAR_2 = FUNC_1(VAR_1->falcon_clk);
 if (VAR_2 < 0)
  goto disable_ss;

 VAR_2 = FUNC_1(VAR_1->fs_src_clk);
 if (VAR_2 < 0)
  goto disable_falc;

 VAR_2 = FUNC_1(VAR_1->hs_src_clk);
 if (VAR_2 < 0)
  goto disable_fs_src;

 if (VAR_1->soc->scale_ss_clock) {
  VAR_2 = FUNC_2(VAR_1, VAR_0);
  if (VAR_2 < 0)
   goto disable_hs_src;
 }

 return 0;

disable_hs_src:
 FUNC_0(VAR_1->hs_src_clk);
disable_fs_src:
 FUNC_0(VAR_1->fs_src_clk);
disable_falc:
 FUNC_0(VAR_1->falcon_clk);
disable_ss:
 FUNC_0(VAR_1->ss_clk);
disable_host:
 FUNC_0(VAR_1->host_clk);
disable_plle:
 FUNC_0(VAR_1->pll_e);
 return VAR_2;
}
