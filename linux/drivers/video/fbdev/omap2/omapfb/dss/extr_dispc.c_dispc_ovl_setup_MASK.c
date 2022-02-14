
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_video_timings {int dummy; } ;
struct omap_overlay_info {int rotation_type; int global_alpha; int pre_mult_alpha; int zorder; int mirror; int rotation; int color_mode; int out_height; int out_width; int height; int width; int pos_y; int pos_x; int screen_width; int p_uv_addr; int paddr; } ;
typedef enum omap_plane { ____Placeholder_omap_plane } omap_plane ;
typedef enum omap_overlay_caps { ____Placeholder_omap_overlay_caps } omap_overlay_caps ;
typedef enum omap_channel { ____Placeholder_omap_channel } omap_channel ;


 int FUNC_0 (char*,int,int *,int *,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int,struct omap_video_timings const*,int) ;
 int FUNC_3 (int) ;

int FUNC_4(enum omap_plane VAR_0, const struct omap_overlay_info *VAR_1,
  bool VAR_2, const struct omap_video_timings *VAR_3,
  bool VAR_4)
{
 int VAR_5;
 enum omap_overlay_caps VAR_6 = FUNC_3(VAR_0);
 enum omap_channel VAR_7;

 VAR_7 = FUNC_1(VAR_0);

 FUNC_0("dispc_ovl_setup %d, pa %pad, pa_uv %pad, sw %d, %d,%d, %dx%d ->"
  " %dx%d, cmode %x, rot %d, mir %d, chan %d repl %d\n",
  VAR_0, &VAR_1->paddr, &VAR_1->p_uv_addr, VAR_1->screen_width, VAR_1->pos_x,
  VAR_1->pos_y, VAR_1->width, VAR_1->height, VAR_1->out_width, VAR_1->out_height,
  VAR_1->color_mode, VAR_1->rotation, VAR_1->mirror, VAR_7, VAR_2);

 VAR_5 = FUNC_2(VAR_0, VAR_6, VAR_1->paddr, VAR_1->p_uv_addr,
  VAR_1->screen_width, VAR_1->pos_x, VAR_1->pos_y, VAR_1->width, VAR_1->height,
  VAR_1->out_width, VAR_1->out_height, VAR_1->color_mode, VAR_1->rotation,
  VAR_1->mirror, VAR_1->zorder, VAR_1->pre_mult_alpha, VAR_1->global_alpha,
  VAR_1->rotation_type, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
