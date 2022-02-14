
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_video_timings {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int venc_lock; struct omap_video_timings timings; scalar_t__ wss_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct omap_video_timings*,struct omap_video_timings*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_5(struct omap_dss_device *VAR_1,
  struct omap_video_timings *VAR_2)
{
 FUNC_0("venc_set_timings\n");

 FUNC_3(&VAR_0.venc_lock);


 if (FUNC_2(&VAR_0.timings, VAR_2, sizeof(*VAR_2)))
  VAR_0.wss_data = 0;

 VAR_0.timings = *VAR_2;

 FUNC_1(13500000);

 FUNC_4(&VAR_0.venc_lock);
}
