
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omapfb_plane_info {int out_height; int out_width; int mem_idx; scalar_t__ mirror; scalar_t__ channel_out; int enabled; int pos_y; int pos_x; } ;
struct omapfb_info {scalar_t__ num_overlays; struct omap_overlay** overlays; } ;
struct omap_overlay_info {int out_height; int out_width; int pos_y; int pos_x; } ;
struct omap_overlay {int (* is_enabled ) (struct omap_overlay*) ;int (* get_overlay_info ) (struct omap_overlay*,struct omap_overlay_info*) ;} ;
struct fb_info {int dummy; } ;


 struct omapfb_info* FUNC_0 (struct fb_info*) ;
 int FUNC_1 (struct omapfb_info*) ;
 int FUNC_2 (struct omapfb_plane_info*,int ,int) ;
 int FUNC_3 (struct omap_overlay*,struct omap_overlay_info*) ;
 int FUNC_4 (struct omap_overlay*) ;

__attribute__((used)) static int FUNC_5(struct fb_info *VAR_0, struct omapfb_plane_info *VAR_1)
{
 struct omapfb_info *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2->num_overlays == 0) {
  FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 } else {
  struct omap_overlay *VAR_3;
  struct omap_overlay_info VAR_4;

  VAR_3 = VAR_2->overlays[0];
  VAR_3->get_overlay_info(VAR_3, &VAR_4);

  VAR_1->pos_x = VAR_4.pos_x;
  VAR_1->pos_y = VAR_4.pos_y;
  VAR_1->enabled = VAR_3->is_enabled(VAR_3);
  VAR_1->channel_out = 0;
  VAR_1->mirror = 0;
  VAR_1->mem_idx = FUNC_1(VAR_2);
  VAR_1->out_width = VAR_4.out_width;
  VAR_1->out_height = VAR_4.out_height;
 }

 return 0;
}
