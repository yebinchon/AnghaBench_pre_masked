
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_dss_dsi_config {scalar_t__ mode; int lp_clk_max; int lp_clk_min; int pixel_format; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int * clkout; } ;
struct dsi_data {scalar_t__ mode; int lock; int vm_timings; int timings; int user_dispc_cinfo; TYPE_1__ user_dsi_cinfo; int user_lp_cinfo; int pix_fmt; } ;
struct dsi_clk_calc_ctx {int dsi_vm; int dispc_vm; int dispc_cinfo; TYPE_1__ dsi_cinfo; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct dsi_data*,struct omap_dss_dsi_config const*,struct dsi_clk_calc_ctx*) ;
 struct platform_device* FUNC_2 (struct omap_dss_device*) ;
 struct dsi_data* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct dsi_data*,struct omap_dss_dsi_config const*,struct dsi_clk_calc_ctx*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct omap_dss_device *VAR_3,
  const struct omap_dss_dsi_config *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_2(VAR_3);
 struct dsi_data *VAR_6 = FUNC_3(VAR_5);
 struct dsi_clk_calc_ctx VAR_7;
 bool VAR_8;
 int VAR_9;

 FUNC_7(&VAR_6->lock);

 VAR_6->pix_fmt = VAR_4->pixel_format;
 VAR_6->mode = VAR_4->mode;

 if (VAR_4->mode == VAR_2)
  VAR_8 = FUNC_6(VAR_6, VAR_4, &VAR_7);
 else
  VAR_8 = FUNC_1(VAR_6, VAR_4, &VAR_7);

 if (!VAR_8) {
  FUNC_0("failed to find suitable DSI clock settings\n");
  VAR_9 = -VAR_0;
  goto err;
 }

 FUNC_5(&VAR_7.dsi_cinfo);

 VAR_9 = FUNC_4(VAR_7.dsi_cinfo.clkout[VAR_1],
  VAR_4->lp_clk_min, VAR_4->lp_clk_max, &VAR_6->user_lp_cinfo);
 if (VAR_9) {
  FUNC_0("failed to find suitable DSI LP clock settings\n");
  goto err;
 }

 VAR_6->user_dsi_cinfo = VAR_7.dsi_cinfo;
 VAR_6->user_dispc_cinfo = VAR_7.dispc_cinfo;

 VAR_6->timings = VAR_7.dispc_vm;
 VAR_6->vm_timings = VAR_7.dsi_vm;

 FUNC_8(&VAR_6->lock);

 return 0;
err:
 FUNC_8(&VAR_6->lock);

 return VAR_9;
}
