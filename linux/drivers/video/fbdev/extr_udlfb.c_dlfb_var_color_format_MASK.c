
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_bitfield {int member_0; int member_1; int member_2; } ;
struct fb_var_screeninfo {int bits_per_pixel; struct fb_bitfield blue; struct fb_bitfield green; struct fb_bitfield red; } ;



__attribute__((used)) static void FUNC_0(struct fb_var_screeninfo *VAR_0)
{
 const struct fb_bitfield VAR_1 = { 11, 5, 0 };
 const struct fb_bitfield VAR_2 = { 5, 6, 0 };
 const struct fb_bitfield VAR_3 = { 0, 5, 0 };

 VAR_0->bits_per_pixel = 16;
 VAR_0->red = VAR_1;
 VAR_0->green = VAR_2;
 VAR_0->blue = VAR_3;
}
