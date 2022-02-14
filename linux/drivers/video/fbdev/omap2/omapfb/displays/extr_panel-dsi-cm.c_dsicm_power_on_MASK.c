
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {scalar_t__ num_pins; } ;
struct panel_drv_data {int enabled; int intro_printed; TYPE_1__* pdev; int channel; int te_enabled; TYPE_4__ pin_config; int timings; struct omap_dss_device* in; } ;
struct omap_dss_dsi_config {int hs_clk_min; int hs_clk_max; int lp_clk_min; int lp_clk_max; int * timings; int pixel_format; int mode; } ;
struct TYPE_7__ {TYPE_2__* dsi; } ;
struct omap_dss_device {TYPE_3__ ops; } ;
struct TYPE_6__ {int (* configure_pins ) (struct omap_dss_device*,TYPE_4__*) ;int (* set_config ) (struct omap_dss_device*,struct omap_dss_dsi_config*) ;int (* enable ) (struct omap_dss_device*) ;int (* enable_video_output ) (struct omap_dss_device*,int ) ;int (* disable ) (struct omap_dss_device*,int,int) ;int (* enable_hs ) (struct omap_dss_device*,int ,int) ;} ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct panel_drv_data*,int ) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int ,int ) ;
 int FUNC_3 (struct panel_drv_data*,int ) ;
 int FUNC_4 (struct panel_drv_data*,int ,int) ;
 int FUNC_5 (struct panel_drv_data*,int *,int *,int *) ;
 int FUNC_6 (struct panel_drv_data*) ;
 int FUNC_7 (struct panel_drv_data*) ;
 int FUNC_8 (struct omap_dss_device*,TYPE_4__*) ;
 int FUNC_9 (struct omap_dss_device*,struct omap_dss_dsi_config*) ;
 int FUNC_10 (struct omap_dss_device*) ;
 int FUNC_11 (struct omap_dss_device*,int ,int) ;
 int FUNC_12 (struct omap_dss_device*,int ) ;
 int FUNC_13 (struct omap_dss_device*,int ,int) ;
 int FUNC_14 (struct omap_dss_device*,int,int) ;

__attribute__((used)) static int FUNC_15(struct panel_drv_data *VAR_7)
{
 struct omap_dss_device *VAR_8 = VAR_7->in;
 u8 VAR_9, VAR_10, VAR_11;
 int VAR_12;
 struct omap_dss_dsi_config VAR_13 = {
  .mode = VAR_5,
  .pixel_format = VAR_6,
  .timings = &VAR_7->timings,
  .hs_clk_min = 150000000,
  .hs_clk_max = 300000000,
  .lp_clk_min = 7000000,
  .lp_clk_max = 10000000,
 };

 if (VAR_7->pin_config.num_pins > 0) {
  VAR_12 = VAR_8->ops.dsi->configure_pins(VAR_8, &VAR_7->pin_config);
  if (VAR_12) {
   FUNC_1(&VAR_7->pdev->dev,
    "failed to configure DSI pins\n");
   goto err0;
  }
 }

 VAR_12 = VAR_8->ops.dsi->set_config(VAR_8, &VAR_13);
 if (VAR_12) {
  FUNC_1(&VAR_7->pdev->dev, "failed to configure DSI\n");
  goto err0;
 }

 VAR_12 = VAR_8->ops.dsi->enable(VAR_8);
 if (VAR_12) {
  FUNC_1(&VAR_7->pdev->dev, "failed to enable DSI\n");
  goto err0;
 }

 FUNC_6(VAR_7);

 VAR_8->ops.dsi->enable_hs(VAR_8, VAR_7->channel, 0);

 VAR_12 = FUNC_7(VAR_7);
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_5(VAR_7, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_4(VAR_7, VAR_0, 0xff);
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_4(VAR_7, VAR_1,
   (1<<2) | (1<<5));
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_4(VAR_7, VAR_4,
  VAR_2);
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_3(VAR_7, VAR_3);
 if (VAR_12)
  goto err;

 VAR_12 = FUNC_0(VAR_7, VAR_7->te_enabled);
 if (VAR_12)
  goto err;

 VAR_12 = VAR_8->ops.dsi->enable_video_output(VAR_8, VAR_7->channel);
 if (VAR_12)
  goto err;

 VAR_7->enabled = 1;

 if (!VAR_7->intro_printed) {
  FUNC_2(&VAR_7->pdev->dev, "panel revision %02x.%02x.%02x\n",
   VAR_9, VAR_10, VAR_11);
  VAR_7->intro_printed = 1;
 }

 VAR_8->ops.dsi->enable_hs(VAR_8, VAR_7->channel, 1);

 return 0;
err:
 FUNC_1(&VAR_7->pdev->dev, "error while enabling panel, issuing HW reset\n");

 FUNC_6(VAR_7);

 VAR_8->ops.dsi->disable(VAR_8, 1, 0);
err0:
 return VAR_12;
}
