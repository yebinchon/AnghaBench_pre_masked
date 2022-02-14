
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_info {int display_width; int display_byte_stride; int bytes_per_pixel; scalar_t__ video_rbase; int set_osd_coords_y; int set_osd_coords_x; } ;
struct ivtv_osd_coords {int pixel_stride; int y; int x; int lines; scalar_t__ offset; } ;
struct ivtv {struct osd_info* osd_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct ivtv*,int ,int,scalar_t__,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ivtv *VAR_1, const struct ivtv_osd_coords *VAR_2)
{
 struct osd_info *VAR_3 = VAR_1->osd_info;

 VAR_3->display_width = VAR_2->pixel_stride;
 VAR_3->display_byte_stride = VAR_2->pixel_stride * VAR_3->bytes_per_pixel;
 VAR_3->set_osd_coords_x += VAR_2->x;
 VAR_3->set_osd_coords_y = VAR_2->y;

 return FUNC_0(VAR_1, VAR_0, 5,
   VAR_2->offset + VAR_3->video_rbase,
   VAR_2->pixel_stride,
   VAR_2->lines, VAR_2->x, VAR_2->y);
}
