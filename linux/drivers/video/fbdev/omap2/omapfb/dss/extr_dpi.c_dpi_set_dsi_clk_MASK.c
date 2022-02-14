
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int lck_div; int pck_div; } ;
struct TYPE_4__ {TYPE_2__ clock_info; } ;
struct dpi_data {TYPE_1__ mgr_config; int pll; } ;
struct TYPE_6__ {unsigned long* clkout; } ;
struct dpi_clk_calc_ctx {TYPE_2__ dispc_cinfo; TYPE_3__ dsi_cinfo; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct dpi_data*,unsigned long,struct dpi_clk_calc_ctx*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int FUNC_4(struct dpi_data *VAR_2, enum omap_channel VAR_3,
  unsigned long VAR_4, unsigned long *VAR_5, int *VAR_6,
  int *VAR_7)
{
 struct dpi_clk_calc_ctx VAR_8;
 int VAR_9;
 bool VAR_10;

 VAR_10 = FUNC_0(VAR_2, VAR_4, &VAR_8);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_2->pll, &VAR_8.dsi_cinfo);
 if (VAR_9)
  return VAR_9;

 FUNC_3(VAR_3,
   FUNC_1(VAR_3));

 VAR_2->mgr_config.clock_info = VAR_8.dispc_cinfo;

 *VAR_5 = VAR_8.dsi_cinfo.clkout[VAR_1];
 *VAR_6 = VAR_8.dispc_cinfo.lck_div;
 *VAR_7 = VAR_8.dispc_cinfo.pck_div;

 return 0;
}
