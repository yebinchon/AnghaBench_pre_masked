
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {struct omap_overlay_manager* manager; } ;
struct TYPE_2__ {int stallmode; int fifohandcheck; scalar_t__ lcden_sig_polarity; int video_port_width; int io_pad_mode; } ;
struct dpi_data {TYPE_1__ mgr_config; int data_lines; struct omap_dss_device output; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_overlay_manager*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(struct dpi_data *VAR_1)
{
 struct omap_dss_device *VAR_2 = &VAR_1->output;
 struct omap_overlay_manager *VAR_3 = VAR_2->manager;

 VAR_1->mgr_config.io_pad_mode = VAR_0;

 VAR_1->mgr_config.stallmode = 0;
 VAR_1->mgr_config.fifohandcheck = 0;

 VAR_1->mgr_config.video_port_width = VAR_1->data_lines;

 VAR_1->mgr_config.lcden_sig_polarity = 0;

 FUNC_0(VAR_3, &VAR_1->mgr_config);
}
