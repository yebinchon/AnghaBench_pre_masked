
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_rect {int height; int width; int top; int left; } ;
struct TYPE_2__ {int osd_vis_w; int osd_vis_h; int osd_x_offset; int osd_y_offset; } ;
struct ivtv {TYPE_1__ yuv_info; scalar_t__ is_out_50hz; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(struct ivtv *VAR_2, struct v4l2_rect *VAR_3)
{
 int VAR_4 = VAR_2->is_out_50hz ? 576 : 480;


 if ((VAR_3->height > VAR_4) || (VAR_3->width > VAR_1))
  return -VAR_0;


 if (VAR_3->top + VAR_3->height > VAR_4) {
  FUNC_0("ivtv_ioctl_fb_set_display_window - Invalid height setting (%d, %d)\n",
   VAR_3->top, VAR_3->height);
  VAR_3->top = VAR_4 - VAR_3->height;
 }

 if (VAR_3->left + VAR_3->width > VAR_1) {
  FUNC_0("ivtv_ioctl_fb_set_display_window - Invalid width setting (%d, %d)\n",
   VAR_3->left, VAR_3->width);
  VAR_3->left = VAR_1 - VAR_3->width;
 }


 FUNC_1((VAR_3->top << 16) | VAR_3->left, 0x02a04);


 FUNC_1(((VAR_3->top+VAR_3->height) << 16) | (VAR_3->left+VAR_3->width), 0x02a08);


 VAR_2->yuv_info.osd_vis_w = VAR_3->width;
 VAR_2->yuv_info.osd_vis_h = VAR_3->height;
 VAR_2->yuv_info.osd_x_offset = VAR_3->left;
 VAR_2->yuv_info.osd_y_offset = VAR_3->top;

 return 0;
}
