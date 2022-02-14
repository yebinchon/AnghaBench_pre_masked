
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct videomode {int flags; int vsync_len; int vfront_porch; int vback_porch; int vactive; int hsync_len; int hfront_porch; int hback_porch; int hactive; int pixelclock; } ;
struct omap_video_timings {int data_pclk_edge; int sync_pclk_edge; void* de_level; void* hsync_level; void* vsync_level; int vsw; int vfp; int vbp; int y_res; int hsw; int hfp; int hbp; int x_res; int pixelclock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct omap_video_timings*,int ,int) ;

void FUNC_1(const struct videomode *VAR_8,
  struct omap_video_timings *VAR_9)
{
 FUNC_0(VAR_9, 0, sizeof(*VAR_9));

 VAR_9->pixelclock = VAR_8->pixelclock;
 VAR_9->x_res = VAR_8->hactive;
 VAR_9->hbp = VAR_8->hback_porch;
 VAR_9->hfp = VAR_8->hfront_porch;
 VAR_9->hsw = VAR_8->hsync_len;
 VAR_9->y_res = VAR_8->vactive;
 VAR_9->vbp = VAR_8->vback_porch;
 VAR_9->vfp = VAR_8->vfront_porch;
 VAR_9->vsw = VAR_8->vsync_len;

 VAR_9->vsync_level = VAR_8->flags & VAR_3 ?
  VAR_6 :
  VAR_7;
 VAR_9->hsync_level = VAR_8->flags & VAR_1 ?
  VAR_6 :
  VAR_7;
 VAR_9->de_level = VAR_8->flags & VAR_0 ?
  VAR_6 :
  VAR_7;
 VAR_9->data_pclk_edge = VAR_8->flags & VAR_2 ?
  VAR_5 :
  VAR_4;

 VAR_9->sync_pclk_edge = VAR_9->data_pclk_edge;
}
