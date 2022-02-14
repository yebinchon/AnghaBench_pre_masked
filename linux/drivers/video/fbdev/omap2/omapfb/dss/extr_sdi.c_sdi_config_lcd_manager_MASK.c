
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct omap_overlay_manager {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_6__ {int stallmode; int fifohandcheck; int video_port_width; int lcden_sig_polarity; int io_pad_mode; } ;
struct TYPE_4__ {struct omap_overlay_manager* manager; } ;
struct TYPE_5__ {TYPE_3__ mgr_config; TYPE_1__ output; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_overlay_manager*,TYPE_3__*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct omap_dss_device *VAR_2)
{
 struct omap_overlay_manager *VAR_3 = VAR_1.output.manager;

 VAR_1.mgr_config.io_pad_mode = VAR_0;

 VAR_1.mgr_config.stallmode = 0;
 VAR_1.mgr_config.fifohandcheck = 0;

 VAR_1.mgr_config.video_port_width = 24;
 VAR_1.mgr_config.lcden_sig_polarity = 1;

 FUNC_0(VAR_3, &VAR_1.mgr_config);
}
