
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct omap_overlay_manager {int id; } ;
struct TYPE_4__ {int stallmode; int fifohandcheck; scalar_t__ lcden_sig_polarity; int video_port_width; int io_pad_mode; } ;
struct TYPE_3__ {int interlace; int sync_pclk_edge; void* de_level; int data_pclk_edge; void* vsync_level; void* hsync_level; } ;
struct dsi_data {scalar_t__ module_id; scalar_t__ mode; TYPE_2__ mgr_config; int pix_fmt; TYPE_1__ timings; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (struct platform_device*) ;
 int VAR_8 ;
 struct dsi_data* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct omap_overlay_manager*,int ,struct platform_device*) ;
 int FUNC_5 (struct omap_overlay_manager*,TYPE_2__*) ;
 int FUNC_6 (struct omap_overlay_manager*,TYPE_1__*) ;
 int FUNC_7 (struct omap_overlay_manager*,int ,struct platform_device*) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9,
  struct omap_overlay_manager *VAR_10)
{
 struct dsi_data *VAR_11 = FUNC_2(VAR_9);
 int VAR_12;

 FUNC_8(VAR_10->id, VAR_11->module_id == 0 ?
   VAR_5 :
   VAR_4);

 if (VAR_11->mode == VAR_7) {
  VAR_12 = FUNC_4(VAR_10,
    VAR_8, VAR_9);
  if (VAR_12) {
   FUNC_0("can't register FRAMEDONE handler\n");
   goto err;
  }

  VAR_11->mgr_config.stallmode = 1;
  VAR_11->mgr_config.fifohandcheck = 1;
 } else {
  VAR_11->mgr_config.stallmode = 0;
  VAR_11->mgr_config.fifohandcheck = 0;
 }





 VAR_11->timings.interlace = 0;
 VAR_11->timings.hsync_level = VAR_3;
 VAR_11->timings.vsync_level = VAR_3;
 VAR_11->timings.data_pclk_edge = VAR_2;
 VAR_11->timings.de_level = VAR_3;
 VAR_11->timings.sync_pclk_edge = VAR_1;

 FUNC_6(VAR_10, &VAR_11->timings);

 VAR_12 = FUNC_1(VAR_9);
 if (VAR_12)
  goto err1;

 VAR_11->mgr_config.io_pad_mode = VAR_0;
 VAR_11->mgr_config.video_port_width =
   FUNC_3(VAR_11->pix_fmt);
 VAR_11->mgr_config.lcden_sig_polarity = 0;

 FUNC_5(VAR_10, &VAR_11->mgr_config);

 return 0;
err1:
 if (VAR_11->mode == VAR_7)
  FUNC_7(VAR_10,
    VAR_8, VAR_9);
err:
 FUNC_8(VAR_10->id, VAR_6);
 return VAR_12;
}
