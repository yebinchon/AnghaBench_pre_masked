
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct v4l2_window {scalar_t__ global_alpha; } ;
struct TYPE_6__ {struct v4l2_window win; } ;
struct v4l2_format {TYPE_1__ fmt; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct TYPE_8__ {int chromakey; scalar_t__ global_alpha; } ;
struct TYPE_9__ {int flags; } ;
struct omap_vout_device {TYPE_4__ win; TYPE_5__ fbuf; int crop; struct omapvideo_info vid_info; } ;
struct omap_overlay_manager_info {int trans_enabled; int trans_key_type; int trans_key; } ;
struct omap_overlay {int caps; TYPE_2__* manager; } ;
struct file {int dummy; } ;
typedef enum omap_dss_trans_key_type { ____Placeholder_omap_dss_trans_key_type } omap_dss_trans_key_type ;
struct TYPE_7__ {scalar_t__ (* set_manager_info ) (TYPE_2__*,struct omap_overlay_manager_info*) ;int (* get_manager_info ) (TYPE_2__*,struct omap_overlay_manager_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_4__*,TYPE_5__*,struct v4l2_window*) ;
 int FUNC_1 (TYPE_2__*,struct omap_overlay_manager_info*) ;
 scalar_t__ FUNC_2 (TYPE_2__*,struct omap_overlay_manager_info*) ;
 struct omap_vout_device* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7,
   struct v4l2_format *VAR_8)
{
 int VAR_9 = 0;
 struct omap_overlay *VAR_10;
 struct omapvideo_info *VAR_11;
 struct omap_vout_device *VAR_12 = FUNC_3(VAR_6);
 struct v4l2_window *VAR_13 = &VAR_8->fmt.win;

 VAR_11 = &VAR_12->vid_info;
 VAR_10 = VAR_11->overlays[0];

 VAR_9 = FUNC_0(&VAR_12->crop, &VAR_12->win, &VAR_12->fbuf, VAR_13);
 if (!VAR_9) {
  enum omap_dss_trans_key_type VAR_14 =
   VAR_1;
  int VAR_15;


  if (VAR_10->caps & VAR_3)
   VAR_12->win.global_alpha = VAR_13->global_alpha;
  else
   VAR_13->global_alpha = 0;
  if (VAR_12->fbuf.flags & (VAR_4 |
     VAR_5))
   VAR_15 = 1;
  else
   VAR_15 = 0;
  if (VAR_12->fbuf.flags & VAR_5)
   VAR_14 = VAR_2;

  if (VAR_10->manager && VAR_10->manager->get_manager_info &&
      VAR_10->manager->set_manager_info) {
   struct omap_overlay_manager_info VAR_16;

   VAR_10->manager->get_manager_info(VAR_10->manager, &VAR_16);
   VAR_16.trans_enabled = VAR_15;
   VAR_16.trans_key_type = VAR_14;
   VAR_16.trans_key = VAR_12->win.chromakey;

   if (VAR_10->manager->set_manager_info(VAR_10->manager, &VAR_16))
    return -VAR_0;
  }
 }
 return VAR_9;
}
