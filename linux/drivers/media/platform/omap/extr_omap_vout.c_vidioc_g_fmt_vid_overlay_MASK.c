
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_window {int * bitmap; scalar_t__ clipcount; int * clips; scalar_t__ global_alpha; int chromakey; int field; int w; } ;
struct TYPE_3__ {struct v4l2_window win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct TYPE_4__ {scalar_t__ global_alpha; int chromakey; int field; int w; } ;
struct omap_vout_device {TYPE_2__ win; struct omapvideo_info vid_info; } ;
struct omap_overlay {int caps; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct omap_vout_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
   struct v4l2_format *VAR_3)
{
 struct omap_overlay *VAR_4;
 struct omapvideo_info *VAR_5;
 struct omap_vout_device *VAR_6 = FUNC_0(VAR_1);
 struct v4l2_window *VAR_7 = &VAR_3->fmt.win;

 VAR_5 = &VAR_6->vid_info;
 VAR_4 = VAR_5->overlays[0];

 VAR_7->w = VAR_6->win.w;
 VAR_7->field = VAR_6->win.field;
 VAR_7->chromakey = VAR_6->win.chromakey;
 if (VAR_4->caps & VAR_0)
  VAR_7->global_alpha = VAR_6->win.global_alpha;
 else
  VAR_7->global_alpha = 0;
 VAR_7->clips = ((void*)0);
 VAR_7->clipcount = 0;
 VAR_7->bitmap = ((void*)0);
 return 0;
}
