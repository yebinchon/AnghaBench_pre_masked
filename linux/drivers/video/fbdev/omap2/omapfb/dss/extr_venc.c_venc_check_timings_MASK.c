
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {int dummy; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,struct omap_video_timings*,int) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct omap_dss_device *VAR_3,
  struct omap_video_timings *VAR_4)
{
 FUNC_0("venc_check_timings\n");

 if (FUNC_1(&VAR_2, VAR_4, sizeof(*VAR_4)) == 0)
  return 0;

 if (FUNC_1(&VAR_1, VAR_4, sizeof(*VAR_4)) == 0)
  return 0;

 return -VAR_0;
}
