
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct omap_video_timings {int pixelclock; int y_res; int x_res; } ;
struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct hdmi_wp_data {int dummy; } ;
struct dss_pll_clock_info {int * clkout; int clkdco; int member_0; } ;
struct TYPE_6__ {int pll; } ;
struct TYPE_7__ {struct omap_video_timings timings; } ;
struct TYPE_5__ {struct omap_overlay_manager* manager; } ;
struct TYPE_8__ {TYPE_2__ pll; struct hdmi_wp_data wp; TYPE_3__ cfg; int core; int phy; TYPE_1__ output; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct omap_overlay_manager*) ;
 int FUNC_4 (struct omap_overlay_manager*,struct omap_video_timings*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,struct dss_pll_clock_info*) ;
 TYPE_4__ VAR_5 ;
 int FUNC_8 (int *,struct hdmi_wp_data*,TYPE_3__*) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (TYPE_2__*,int ,struct dss_pll_clock_info*) ;
 int FUNC_11 (struct omap_dss_device*) ;
 int FUNC_12 (struct omap_dss_device*) ;
 int FUNC_13 (struct hdmi_wp_data*,int) ;
 int FUNC_14 (struct hdmi_wp_data*,int) ;
 int FUNC_15 (struct hdmi_wp_data*,int) ;
 int FUNC_16 (struct hdmi_wp_data*,int ) ;
 int FUNC_17 (struct hdmi_wp_data*) ;
 int FUNC_18 (struct hdmi_wp_data*) ;

__attribute__((used)) static int FUNC_19(struct omap_dss_device *VAR_6)
{
 int VAR_7;
 struct omap_video_timings *VAR_8;
 struct omap_overlay_manager *VAR_9 = VAR_5.output.manager;
 struct hdmi_wp_data *VAR_10 = &VAR_5.wp;
 struct dss_pll_clock_info VAR_11 = { 0 };

 VAR_7 = FUNC_12(VAR_6);
 if (VAR_7)
  return VAR_7;


 FUNC_13(VAR_10, 0xffffffff);
 FUNC_15(VAR_10, 0xffffffff);

 VAR_8 = &VAR_5.cfg.timings;

 FUNC_0("hdmi_power_on x_res= %d y_res = %d\n", VAR_8->x_res, VAR_8->y_res);

 FUNC_10(&VAR_5.pll, VAR_8->pixelclock, &VAR_11);

 VAR_7 = FUNC_6(&VAR_5.pll.pll);
 if (VAR_7) {
  FUNC_1("Failed to enable PLL\n");
  goto err_pll_enable;
 }

 VAR_7 = FUNC_7(&VAR_5.pll.pll, &VAR_11);
 if (VAR_7) {
  FUNC_1("Failed to configure PLL\n");
  goto err_pll_cfg;
 }

 VAR_7 = FUNC_9(&VAR_5.phy, VAR_11.clkdco,
  VAR_11.clkout[0]);
 if (VAR_7) {
  FUNC_0("Failed to configure PHY\n");
  goto err_phy_cfg;
 }

 VAR_7 = FUNC_16(VAR_10, VAR_3);
 if (VAR_7)
  goto err_phy_pwr;

 FUNC_8(&VAR_5.core, &VAR_5.wp, &VAR_5.cfg);


 FUNC_2(0);


 FUNC_4(VAR_9, VAR_8);

 VAR_7 = FUNC_17(&VAR_5.wp);
 if (VAR_7)
  goto err_vid_enable;

 VAR_7 = FUNC_3(VAR_9);
 if (VAR_7)
  goto err_mgr_enable;

 FUNC_14(VAR_10,
  VAR_1 | VAR_2);

 return 0;

err_mgr_enable:
 FUNC_18(&VAR_5.wp);
err_vid_enable:
 FUNC_16(&VAR_5.wp, VAR_4);
err_phy_pwr:
err_phy_cfg:
err_pll_cfg:
 FUNC_5(&VAR_5.pll.pll);
err_pll_enable:
 FUNC_11(VAR_6);
 return -VAR_0;
}
