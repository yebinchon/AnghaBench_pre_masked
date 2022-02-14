
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_video_timings {unsigned long pixelclock; } ;
struct omap_overlay_manager {int id; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_4__ {struct omap_overlay_manager* manager; } ;
struct dpi_data {scalar_t__ pll; TYPE_1__ output; } ;
struct TYPE_6__ {int lck_div; int pck_div; } ;
struct TYPE_5__ {unsigned long* clkout; } ;
struct dpi_clk_calc_ctx {unsigned long fck; TYPE_3__ dispc_cinfo; TYPE_2__ dsi_cinfo; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,struct omap_video_timings*) ;
 int FUNC_1 (struct dpi_data*,unsigned long,struct dpi_clk_calc_ctx*) ;
 int FUNC_2 (unsigned long,struct dpi_clk_calc_ctx*) ;
 struct dpi_data* FUNC_3 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_4(struct omap_dss_device *VAR_2,
   struct omap_video_timings *VAR_3)
{
 struct dpi_data *VAR_4 = FUNC_3(VAR_2);
 struct omap_overlay_manager *VAR_5 = VAR_4->output.manager;
 int VAR_6, VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 struct dpi_clk_calc_ctx VAR_10;
 bool VAR_11;

 if (VAR_5 && !FUNC_0(VAR_5->id, VAR_3))
  return -VAR_0;

 if (VAR_3->pixelclock == 0)
  return -VAR_0;

 if (VAR_4->pll) {
  VAR_11 = FUNC_1(VAR_4, VAR_3->pixelclock, &VAR_10);
  if (!VAR_11)
   return -VAR_0;

  VAR_8 = VAR_10.dsi_cinfo.clkout[VAR_1];
 } else {
  VAR_11 = FUNC_2(VAR_3->pixelclock, &VAR_10);
  if (!VAR_11)
   return -VAR_0;

  VAR_8 = VAR_10.fck;
 }

 VAR_6 = VAR_10.dispc_cinfo.lck_div;
 VAR_7 = VAR_10.dispc_cinfo.pck_div;

 VAR_9 = VAR_8 / VAR_6 / VAR_7;

 VAR_3->pixelclock = VAR_9;

 return 0;
}
