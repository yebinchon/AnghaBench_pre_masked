
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omapfb_plane_info {scalar_t__ enabled; int out_height; int out_width; int pos_y; int pos_x; int mem_idx; } ;
struct omapfb_info {scalar_t__ num_overlays; struct omapfb2_mem_region* region; struct omap_overlay** overlays; struct omapfb2_device* fbdev; } ;
struct omapfb2_mem_region {scalar_t__ id; int size; } ;
struct omapfb2_device {int dev; } ;
struct omap_overlay_info {int out_height; int out_width; int pos_y; int pos_x; } ;
struct omap_overlay {int (* disable ) (struct omap_overlay*) ;int (* set_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;int (* enable ) (struct omap_overlay*) ;TYPE_1__* manager; int (* get_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;} ;
struct fb_info {int dummy; } ;
struct TYPE_2__ {int (* apply ) (TYPE_1__*) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 struct omapfb_info* FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ,char*) ;
 struct omapfb2_mem_region* FUNC_3 (struct omapfb_info*,int ) ;
 int FUNC_4 (struct omapfb2_mem_region*) ;
 int FUNC_5 (struct omapfb2_mem_region*) ;
 int FUNC_6 (struct fb_info*,struct omap_overlay*,int ,int ,int ,int ) ;
 int FUNC_7 (struct fb_info*) ;
 int FUNC_8 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_9 (struct omap_overlay*) ;
 int FUNC_10 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_11 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (struct omap_overlay*) ;
 int FUNC_14 (struct omap_overlay*,struct omap_overlay_info*) ;

__attribute__((used)) static int FUNC_15(struct fb_info *VAR_1, struct omapfb_plane_info *VAR_2)
{
 struct omapfb_info *VAR_3 = FUNC_1(VAR_1);
 struct omapfb2_device *VAR_4 = VAR_3->fbdev;
 struct omap_overlay *VAR_5;
 struct omap_overlay_info VAR_6;
 struct omapfb2_mem_region *VAR_7, *VAR_8;
 int VAR_9 = 0;

 FUNC_0("omapfb_setup_plane\n");

 if (VAR_3->num_overlays == 0) {
  VAR_9 = -VAR_0;
  goto out;
 }


 VAR_5 = VAR_3->overlays[0];

 VAR_7 = VAR_3->region;
 VAR_8 = FUNC_3(VAR_3, VAR_2->mem_idx);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto out;
 }


 if (VAR_7->id < VAR_8->id) {
  FUNC_4(VAR_7);
  FUNC_4(VAR_8);
 } else if (VAR_8->id < VAR_7->id) {
  FUNC_4(VAR_8);
  FUNC_4(VAR_7);
 } else
  FUNC_4(VAR_7);

 if (VAR_2->enabled && !VAR_8->size) {




  VAR_9 = -VAR_0;
  goto put_mem;
 }

 VAR_5->get_overlay_info(VAR_5, &VAR_6);

 if (VAR_7 != VAR_8) {
  VAR_3->region = VAR_8;
  FUNC_7(VAR_1);
 }

 if (!VAR_2->enabled) {
  VAR_9 = VAR_5->disable(VAR_5);
  if (VAR_9)
   goto undo;
 }

 if (VAR_2->enabled) {
  VAR_9 = FUNC_6(VAR_1, VAR_5, VAR_2->pos_x, VAR_2->pos_y,
   VAR_2->out_width, VAR_2->out_height);
  if (VAR_9)
   goto undo;
 } else {
  struct omap_overlay_info VAR_10;

  VAR_5->get_overlay_info(VAR_5, &VAR_10);

  VAR_10.pos_x = VAR_2->pos_x;
  VAR_10.pos_y = VAR_2->pos_y;
  VAR_10.out_width = VAR_2->out_width;
  VAR_10.out_height = VAR_2->out_height;

  VAR_9 = VAR_5->set_overlay_info(VAR_5, &VAR_10);
  if (VAR_9)
   goto undo;
 }

 if (VAR_5->manager) {
  VAR_9 = VAR_5->manager->apply(VAR_5->manager);
  if (VAR_9)
   goto undo;
 }

 if (VAR_2->enabled) {
  VAR_9 = VAR_5->enable(VAR_5);
  if (VAR_9)
   goto undo;
 }


 if (VAR_7->id > VAR_8->id) {
  FUNC_5(VAR_7);
  FUNC_5(VAR_8);
 } else if (VAR_8->id > VAR_7->id) {
  FUNC_5(VAR_8);
  FUNC_5(VAR_7);
 } else
  FUNC_5(VAR_7);

 return 0;

 undo:
 if (VAR_7 != VAR_8) {
  VAR_3->region = VAR_7;
  FUNC_7(VAR_1);
 }

 VAR_5->set_overlay_info(VAR_5, &VAR_6);
 put_mem:

 if (VAR_7->id > VAR_8->id) {
  FUNC_5(VAR_7);
  FUNC_5(VAR_8);
 } else if (VAR_8->id > VAR_7->id) {
  FUNC_5(VAR_8);
  FUNC_5(VAR_7);
 } else
  FUNC_5(VAR_7);
 out:
 FUNC_2(VAR_4->dev, "setup_plane failed\n");

 return VAR_9;
}
