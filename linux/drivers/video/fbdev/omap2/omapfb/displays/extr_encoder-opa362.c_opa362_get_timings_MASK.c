
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {int dummy; } ;
struct panel_drv_data {struct omap_video_timings timings; } ;
struct omap_dss_device {int dev; } ;


 int FUNC_0 (int ,char*) ;
 struct panel_drv_data* FUNC_1 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_2(struct omap_dss_device *VAR_0,
  struct omap_video_timings *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(VAR_0->dev, "get_timings\n");

 *VAR_1 = VAR_2->timings;
}
