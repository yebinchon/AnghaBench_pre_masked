
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int flags; int vsync_len; int vfront_porch; int vback_porch; int vactive; int hsync_len; int hfront_porch; int hback_porch; int hactive; int pixelclock; } ;
struct omap_video_timings {scalar_t__ hsync_level; scalar_t__ vsync_level; scalar_t__ de_level; scalar_t__ data_pclk_edge; int vsw; int vfp; int vbp; int y_res; int hsw; int hfp; int hbp; int x_res; int pixelclock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct videomode*,int ,int) ;

void FUNC_1(const struct omap_video_timings *VAR_10,
  struct videomode *VAR_11)
{
 FUNC_0(VAR_11, 0, sizeof(*VAR_11));

 VAR_11->pixelclock = VAR_10->pixelclock;

 VAR_11->hactive = VAR_10->x_res;
 VAR_11->hback_porch = VAR_10->hbp;
 VAR_11->hfront_porch = VAR_10->hfp;
 VAR_11->hsync_len = VAR_10->hsw;
 VAR_11->vactive = VAR_10->y_res;
 VAR_11->vback_porch = VAR_10->vbp;
 VAR_11->vfront_porch = VAR_10->vfp;
 VAR_11->vsync_len = VAR_10->vsw;

 if (VAR_10->hsync_level == VAR_9)
  VAR_11->flags |= VAR_2;
 else
  VAR_11->flags |= VAR_3;

 if (VAR_10->vsync_level == VAR_9)
  VAR_11->flags |= VAR_6;
 else
  VAR_11->flags |= VAR_7;

 if (VAR_10->de_level == VAR_9)
  VAR_11->flags |= VAR_0;
 else
  VAR_11->flags |= VAR_1;

 if (VAR_10->data_pclk_edge == VAR_8)
  VAR_11->flags |= VAR_5;
 else
  VAR_11->flags |= VAR_4;
}
