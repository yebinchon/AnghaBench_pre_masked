
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_window {scalar_t__ global_alpha; } ;
struct TYPE_2__ {struct v4l2_window win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct omap_vout_device {int fbuf; struct omapvideo_info vid_info; } ;
struct omap_overlay {int caps; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_window*) ;
 struct omap_vout_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
   struct v4l2_format *VAR_3)
{
 int VAR_4 = 0;
 struct omap_vout_device *VAR_5 = FUNC_1(VAR_1);
 struct omap_overlay *VAR_6;
 struct omapvideo_info *VAR_7;
 struct v4l2_window *VAR_8 = &VAR_3->fmt.win;

 VAR_7 = &VAR_5->vid_info;
 VAR_6 = VAR_7->overlays[0];

 VAR_4 = FUNC_0(&VAR_5->fbuf, VAR_8);

 if (!VAR_4 && !(VAR_6->caps & VAR_0))
  VAR_8->global_alpha = 0;

 return VAR_4;
}
