
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct platform_device {int dummy; } ;
struct dss_pll_clock_info {int clkdco; int * mX; int * clkout; int m; int n; int fint; } ;
struct dss_pll {int clkin; struct dss_pll_clock_info cinfo; } ;
struct TYPE_2__ {int lp_clk; } ;
struct dsi_data {int module_id; TYPE_1__ current_lp_cinfo; struct dss_pll pll; } ;
typedef enum omap_dss_clk_source { ____Placeholder_omap_dss_clk_source } omap_dss_clk_source ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct platform_device*) ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct platform_device*) ;
 scalar_t__ FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct seq_file*,char*,int,...) ;

__attribute__((used)) static void FUNC_11(struct platform_device *VAR_7,
  struct seq_file *VAR_8)
{
 struct dsi_data *VAR_9 = FUNC_2(VAR_7);
 struct dss_pll_clock_info *VAR_10 = &VAR_9->pll.cinfo;
 enum omap_dss_clk_source VAR_11, VAR_12;
 int VAR_13 = VAR_9->module_id;
 struct dss_pll *VAR_14 = &VAR_9->pll;

 VAR_11 = FUNC_7();
 VAR_12 = FUNC_8(VAR_13);

 if (FUNC_4(VAR_7))
  return;

 FUNC_10(VAR_8, "- DSI%d PLL -\n", VAR_13 + 1);

 FUNC_10(VAR_8, "dsi pll clkin\t%lu\n", FUNC_0(VAR_14->clkin));

 FUNC_10(VAR_8, "Fint\t\t%-16lun %u\n", VAR_10->fint, VAR_10->n);

 FUNC_10(VAR_8, "CLKIN4DDR\t%-16lum %u\n",
   VAR_10->clkdco, VAR_10->m);

 FUNC_10(VAR_8, "DSI_PLL_HSDIV_DISPC (%s)\t%-16lum_dispc %u\t(%s)\n",
   FUNC_6(VAR_13 == 0 ?
    VAR_4 :
    VAR_2),
   VAR_10->clkout[VAR_0],
   VAR_10->mX[VAR_0],
   VAR_11 == VAR_6 ?
   "off" : "on");

 FUNC_10(VAR_8, "DSI_PLL_HSDIV_DSI (%s)\t%-16lum_dsi %u\t(%s)\n",
   FUNC_6(VAR_13 == 0 ?
    VAR_5 :
    VAR_3),
   VAR_10->clkout[VAR_1],
   VAR_10->mX[VAR_1],
   VAR_12 == VAR_6 ?
   "off" : "on");

 FUNC_10(VAR_8, "- DSI%d -\n", VAR_13 + 1);

 FUNC_10(VAR_8, "dsi fclk source = %s (%s)\n",
   FUNC_9(VAR_12),
   FUNC_6(VAR_12));

 FUNC_10(VAR_8, "DSI_FCLK\t%lu\n", FUNC_1(VAR_7));

 FUNC_10(VAR_8, "DDR_CLK\t\t%lu\n",
   VAR_10->clkdco / 4);

 FUNC_10(VAR_8, "TxByteClkHS\t%lu\n", FUNC_3(VAR_7));

 FUNC_10(VAR_8, "LP_CLK\t\t%lu\n", VAR_9->current_lp_cinfo.lp_clk);

 FUNC_5(VAR_7);
}
