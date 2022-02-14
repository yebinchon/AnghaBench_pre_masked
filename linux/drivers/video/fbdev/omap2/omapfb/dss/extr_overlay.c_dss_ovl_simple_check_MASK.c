
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_overlay_info {scalar_t__ out_width; scalar_t__ width; scalar_t__ out_height; scalar_t__ height; int color_mode; scalar_t__ zorder; scalar_t__ rotation_type; } ;
struct omap_overlay {int caps; scalar_t__ id; int supported_modes; } ;


 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;

int FUNC_3(struct omap_overlay *VAR_2,
  const struct omap_overlay_info *VAR_3)
{
 if ((VAR_2->caps & VAR_1) == 0) {
  if (VAR_3->out_width != 0 && VAR_3->width != VAR_3->out_width) {
   FUNC_0("check_overlay: overlay %d doesn't support "
     "scaling\n", VAR_2->id);
   return -VAR_0;
  }

  if (VAR_3->out_height != 0 && VAR_3->height != VAR_3->out_height) {
   FUNC_0("check_overlay: overlay %d doesn't support "
     "scaling\n", VAR_2->id);
   return -VAR_0;
  }
 }

 if ((VAR_2->supported_modes & VAR_3->color_mode) == 0) {
  FUNC_0("check_overlay: overlay %d doesn't support mode %d\n",
    VAR_2->id, VAR_3->color_mode);
  return -VAR_0;
 }

 if (VAR_3->zorder >= FUNC_2()) {
  FUNC_0("check_overlay: zorder %d too high\n", VAR_3->zorder);
  return -VAR_0;
 }

 if (FUNC_1(VAR_3->rotation_type) == 0) {
  FUNC_0("check_overlay: rotation type %d not supported\n",
    VAR_3->rotation_type);
  return -VAR_0;
 }

 return 0;
}
