
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct omap_video_timings {scalar_t__ x_res; scalar_t__ y_res; } ;
struct omap_overlay_info {scalar_t__ width; scalar_t__ height; scalar_t__ out_width; scalar_t__ out_height; scalar_t__ pos_x; scalar_t__ pos_y; } ;
struct omap_overlay {int caps; int id; } ;


 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_1(struct omap_overlay *VAR_2, struct omap_overlay_info *VAR_3,
  const struct omap_video_timings *VAR_4)
{
 u16 VAR_5, VAR_6;
 u16 VAR_7, VAR_8;

 VAR_7 = VAR_4->x_res;
 VAR_8 = VAR_4->y_res;

 if ((VAR_2->caps & VAR_1) == 0) {
  VAR_5 = VAR_3->width;
  VAR_6 = VAR_3->height;
 } else {
  if (VAR_3->out_width == 0)
   VAR_5 = VAR_3->width;
  else
   VAR_5 = VAR_3->out_width;

  if (VAR_3->out_height == 0)
   VAR_6 = VAR_3->height;
  else
   VAR_6 = VAR_3->out_height;
 }

 if (VAR_7 < VAR_3->pos_x + VAR_5) {
  FUNC_0("overlay %d horizontally not inside the display area "
    "(%d + %d >= %d)\n",
    VAR_2->id, VAR_3->pos_x, VAR_5, VAR_7);
  return -VAR_0;
 }

 if (VAR_8 < VAR_3->pos_y + VAR_6) {
  FUNC_0("overlay %d vertically not inside the display area "
    "(%d + %d >= %d)\n",
    VAR_2->id, VAR_3->pos_y, VAR_6, VAR_8);
  return -VAR_0;
 }

 return 0;
}
