
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_video_timings {int dummy; } ;
struct omap_overlay_manager {int dummy; } ;
struct TYPE_2__ {int (* set_timings ) (struct omap_overlay_manager*,struct omap_video_timings const*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct omap_overlay_manager*,struct omap_video_timings const*) ;

void FUNC_1(struct omap_overlay_manager *VAR_1,
  const struct omap_video_timings *VAR_2)
{
 VAR_0->set_timings(VAR_1, VAR_2);
}
