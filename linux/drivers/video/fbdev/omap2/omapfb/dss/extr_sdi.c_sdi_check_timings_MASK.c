
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_video_timings {scalar_t__ pixelclock; } ;
struct omap_overlay_manager {int id; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_3__ {struct omap_overlay_manager* manager; } ;
struct TYPE_4__ {TYPE_1__ output; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct omap_video_timings*) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct omap_dss_device *VAR_2,
   struct omap_video_timings *VAR_3)
{
 struct omap_overlay_manager *VAR_4 = VAR_1.output.manager;

 if (VAR_4 && !FUNC_0(VAR_4->id, VAR_3))
  return -VAR_0;

 if (VAR_3->pixelclock == 0)
  return -VAR_0;

 return 0;
}
