
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {int dummy; } ;
struct omap_overlay_manager {int dummy; } ;
struct mgr_priv_data {int extra_info_dirty; struct omap_video_timings timings; } ;


 struct mgr_priv_data* FUNC_0 (struct omap_overlay_manager*) ;

__attribute__((used)) static void FUNC_1(struct omap_overlay_manager *VAR_0,
  const struct omap_video_timings *VAR_1)
{
 struct mgr_priv_data *VAR_2 = FUNC_0(VAR_0);

 VAR_2->timings = *VAR_1;
 VAR_2->extra_info_dirty = 1;
}
