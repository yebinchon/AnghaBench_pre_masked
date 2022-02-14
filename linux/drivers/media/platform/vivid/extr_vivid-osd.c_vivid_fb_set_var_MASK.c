
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivid_dev {int display_byte_stride; int bytes_per_pixel; } ;
struct fb_var_screeninfo {int bits_per_pixel; int xres; } ;


 int VAR_0 ;
 int FUNC_0 (struct vivid_dev*,int,char*) ;

__attribute__((used)) static int FUNC_1(struct vivid_dev *VAR_1, struct fb_var_screeninfo *VAR_2)
{
 FUNC_0(VAR_1, 1, "vivid_fb_set_var\n");

 if (VAR_2->bits_per_pixel != 16) {
  FUNC_0(VAR_1, 1, "vivid_fb_set_var - Invalid bpp\n");
  return -VAR_0;
 }
 VAR_1->display_byte_stride = VAR_2->xres * VAR_1->bytes_per_pixel;

 return 0;
}
