
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {int dummy; } ;
struct omap_overlay_manager {int id; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct omap_video_timings const*) ;

int FUNC_2(struct omap_overlay_manager *VAR_1,
  const struct omap_video_timings *VAR_2)
{
 if (!FUNC_1(VAR_1->id, VAR_2)) {
  FUNC_0("check_manager: invalid timings\n");
  return -VAR_0;
 }

 return 0;
}
