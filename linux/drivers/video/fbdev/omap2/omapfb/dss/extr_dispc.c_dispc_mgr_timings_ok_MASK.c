
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {int vbp; int vfp; int vsw; int hbp; int hfp; int hsw; scalar_t__ interlace; int pixelclock; int y_res; int x_res; } ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int) ;

bool FUNC_4(enum omap_channel VAR_0,
  const struct omap_video_timings *VAR_1)
{
 if (!FUNC_2(VAR_1->x_res, VAR_1->y_res))
  return 0;

 if (!FUNC_1(VAR_0, VAR_1->pixelclock))
  return 0;

 if (FUNC_3(VAR_0)) {

  if (VAR_1->interlace)
   return 0;

  if (!FUNC_0(VAR_1->hsw, VAR_1->hfp,
    VAR_1->hbp, VAR_1->vsw, VAR_1->vfp,
    VAR_1->vbp))
   return 0;
 }

 return 1;
}
