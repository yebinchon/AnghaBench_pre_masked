
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_video_timings {int dummy; } ;
struct omap_dss_device {int dummy; } ;
struct TYPE_2__ {int venc_lock; struct omap_video_timings timings; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_2(struct omap_dss_device *VAR_1,
  struct omap_video_timings *VAR_2)
{
 FUNC_0(&VAR_0.venc_lock);

 *VAR_2 = VAR_0.timings;

 FUNC_1(&VAR_0.venc_lock);
}
