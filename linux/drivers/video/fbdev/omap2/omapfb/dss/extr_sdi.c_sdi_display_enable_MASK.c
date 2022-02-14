
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct omap_video_timings {unsigned long pixelclock; void* sync_pclk_edge; void* data_pclk_edge; } ;
struct omap_dss_device {TYPE_3__* manager; } ;
struct dispc_clock_info {unsigned long lck_div; unsigned long pck_div; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_5__ {struct dispc_clock_info clock_info; } ;
struct TYPE_6__ {int vdds_sdi_reg; int datapairs; TYPE_1__ mgr_config; struct omap_video_timings timings; struct omap_dss_device output; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int ,struct dispc_clock_info*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,struct omap_video_timings*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 (unsigned long) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_14 (unsigned long,unsigned long*,struct dispc_clock_info*) ;
 int FUNC_15 (struct omap_dss_device*) ;

__attribute__((used)) static int FUNC_16(struct omap_dss_device *VAR_3)
{
 struct omap_dss_device *VAR_4 = &VAR_2.output;
 struct omap_video_timings *VAR_5 = &VAR_2.timings;
 unsigned long VAR_6;
 struct dispc_clock_info VAR_7;
 unsigned long VAR_8;
 int VAR_9;

 if (VAR_4->manager == ((void*)0)) {
  FUNC_0("failed to enable display: no output/manager\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_13(VAR_2.vdds_sdi_reg);
 if (VAR_9)
  goto err_reg_enable;

 VAR_9 = FUNC_3();
 if (VAR_9)
  goto err_get_dispc;


 VAR_5->data_pclk_edge = VAR_1;
 VAR_5->sync_pclk_edge = VAR_1;

 VAR_9 = FUNC_14(VAR_5->pixelclock, &VAR_6, &VAR_7);
 if (VAR_9)
  goto err_calc_clock_div;

 VAR_2.mgr_config.clock_info = VAR_7;

 VAR_8 = VAR_6 / VAR_7.lck_div / VAR_7.pck_div;

 if (VAR_8 != VAR_5->pixelclock) {
  FUNC_1("Could not find exact pixel clock. Requested %d Hz, got %lu Hz\n",
   VAR_5->pixelclock, VAR_8);

  VAR_5->pixelclock = VAR_8;
 }


 FUNC_6(VAR_4->manager, VAR_5);

 VAR_9 = FUNC_10(VAR_6);
 if (VAR_9)
  goto err_set_dss_clock_div;

 FUNC_15(VAR_3);
 FUNC_2(VAR_4->manager->id, &VAR_2.mgr_config.clock_info);

 FUNC_9(VAR_2.datapairs);
 VAR_9 = FUNC_8();
 if (VAR_9)
  goto err_sdi_enable;
 FUNC_11(2);

 VAR_9 = FUNC_5(VAR_4->manager);
 if (VAR_9)
  goto err_mgr_enable;

 return 0;

err_mgr_enable:
 FUNC_7();
err_sdi_enable:
err_set_dss_clock_div:
err_calc_clock_div:
 FUNC_4();
err_get_dispc:
 FUNC_12(VAR_2.vdds_sdi_reg);
err_reg_enable:
 return VAR_9;
}
