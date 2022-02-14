
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_video_timings {int dummy; } ;
struct TYPE_2__ {struct omap_video_timings timings; } ;
struct omap_dss_device {TYPE_1__ panel; } ;



void FUNC_0(struct omap_dss_device *VAR_0,
  struct omap_video_timings *VAR_1)
{
 *VAR_1 = VAR_0->panel.timings;
}
