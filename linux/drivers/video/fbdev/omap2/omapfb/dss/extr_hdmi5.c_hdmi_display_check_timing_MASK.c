
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_video_timings {scalar_t__ interlace; } ;
struct omap_dss_device {int dispc_channel; } ;
struct TYPE_2__ {struct omap_dss_device output; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct omap_video_timings*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_1(struct omap_dss_device *VAR_2,
     struct omap_video_timings *VAR_3)
{
 struct omap_dss_device *VAR_4 = &VAR_1.output;


 if (VAR_3->interlace)
  return -VAR_0;

 if (!FUNC_0(VAR_4->dispc_channel, VAR_3))
  return -VAR_0;

 return 0;
}
