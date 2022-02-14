
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fb_var_screeninfo {int bits_per_pixel; } ;
struct fb_info {int dummy; } ;
struct fb_blit_caps {int x; int y; int len; } ;



void FUNC_0(struct fb_info *VAR_0, struct fb_blit_caps *VAR_1,
     struct fb_var_screeninfo *VAR_2)
{
 if (VAR_2->bits_per_pixel == 0) {

  VAR_1->x = 1 << (8 - 1);
  VAR_1->y = 1 << (16 - 1);
  VAR_1->len = 256;
 } else {
  VAR_1->x = (VAR_2->bits_per_pixel == 4) ? 1 << (8 - 1) : ~(u32)0;
  VAR_1->y = ~(u32)0;
  VAR_1->len = ~(u32)0;
 }
}
