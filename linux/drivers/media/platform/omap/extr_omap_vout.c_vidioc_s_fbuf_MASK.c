
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct v4l2_framebuffer {int flags; } ;
struct omapvideo_info {struct omap_overlay** overlays; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int chromakey; } ;
struct omap_vout_device {TYPE_2__ fbuf; TYPE_1__ win; struct omapvideo_info vid_info; } ;
struct omap_overlay_manager_info {int trans_enabled; int trans_key_type; int partial_alpha_enabled; int trans_key; } ;
struct omap_overlay {int caps; TYPE_3__* manager; } ;
struct file {int dummy; } ;
typedef enum omap_dss_trans_key_type { ____Placeholder_omap_dss_trans_key_type } omap_dss_trans_key_type ;
struct TYPE_9__ {scalar_t__ (* set_manager_info ) (TYPE_3__*,struct omap_overlay_manager_info*) ;int (* get_manager_info ) (TYPE_3__*,struct omap_overlay_manager_info*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,struct omap_overlay_manager_info*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,struct omap_overlay_manager_info*) ;
 int FUNC_2 (TYPE_3__*,struct omap_overlay_manager_info*) ;
 scalar_t__ FUNC_3 (TYPE_3__*,struct omap_overlay_manager_info*) ;
 struct omap_vout_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_7, void *VAR_8,
    const struct v4l2_framebuffer *VAR_9)
{
 int VAR_10 = 0;
 struct omap_overlay *VAR_11;
 struct omapvideo_info *VAR_12;
 struct omap_vout_device *VAR_13 = FUNC_4(VAR_7);
 struct omap_overlay_manager_info VAR_14;
 enum omap_dss_trans_key_type VAR_15 = VAR_1;

 VAR_12 = &VAR_13->vid_info;
 VAR_11 = VAR_12->overlays[0];



 if ((VAR_9->flags & VAR_6) &&
   (VAR_9->flags & VAR_4))
  return -VAR_0;


 if ((VAR_9->flags & VAR_4) &&
   (VAR_9->flags & VAR_5))
  return -VAR_0;

 if ((VAR_9->flags & VAR_6)) {
  VAR_13->fbuf.flags |= VAR_6;
  VAR_15 = VAR_2;
 } else
  VAR_13->fbuf.flags &= ~VAR_6;

 if ((VAR_9->flags & VAR_4)) {
  VAR_13->fbuf.flags |= VAR_4;
  VAR_15 = VAR_1;
 } else
  VAR_13->fbuf.flags &= ~VAR_4;

 if (VAR_9->flags & (VAR_4 |
    VAR_6))
  VAR_10 = 1;
 else
  VAR_10 = 0;
 if (VAR_11->manager && VAR_11->manager->get_manager_info &&
   VAR_11->manager->set_manager_info) {

  VAR_11->manager->get_manager_info(VAR_11->manager, &VAR_14);
  VAR_14.trans_enabled = VAR_10;
  VAR_14.trans_key_type = VAR_15;
  VAR_14.trans_key = VAR_13->win.chromakey;

  if (VAR_11->manager->set_manager_info(VAR_11->manager, &VAR_14))
   return -VAR_0;
 }
 if (VAR_9->flags & VAR_5) {
  VAR_13->fbuf.flags |= VAR_5;
  VAR_10 = 1;
 } else {
  VAR_13->fbuf.flags &= ~VAR_5;
  VAR_10 = 0;
 }
 if (VAR_11->manager && VAR_11->manager->get_manager_info &&
   VAR_11->manager->set_manager_info) {
  VAR_11->manager->get_manager_info(VAR_11->manager, &VAR_14);

  if ((VAR_11->caps & VAR_3) == 0)
   VAR_14.partial_alpha_enabled = VAR_10;
  if (VAR_11->manager->set_manager_info(VAR_11->manager, &VAR_14))
   return -VAR_0;
 }

 return 0;
}
