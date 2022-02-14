
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int rotate; int xres; int yres; int xres_virtual; int yres_virtual; scalar_t__ xoffset; scalar_t__ bits_per_pixel; scalar_t__ grayscale; } ;
struct TYPE_2__ {int rotate; int yres; int xres; scalar_t__ xoffset; scalar_t__ bits_per_pixel; scalar_t__ grayscale; } ;
struct fb_info {TYPE_1__ var; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct fb_var_screeninfo *VAR_1,
       struct fb_info *VAR_2)
{
 if ((VAR_1->rotate & 1) != (VAR_2->var.rotate & 1)) {
  if ((VAR_1->xres != VAR_2->var.yres) ||
    (VAR_1->yres != VAR_2->var.xres) ||
    (VAR_1->xres_virtual != VAR_2->var.yres) ||
    (VAR_1->yres_virtual > VAR_2->var.xres * 2) ||
    (VAR_1->yres_virtual < VAR_2->var.xres)) {
   return -VAR_0;
  }
 } else {
  if ((VAR_1->xres != VAR_2->var.xres) ||
     (VAR_1->yres != VAR_2->var.yres) ||
     (VAR_1->xres_virtual != VAR_2->var.xres) ||
     (VAR_1->yres_virtual > VAR_2->var.yres * 2) ||
     (VAR_1->yres_virtual < VAR_2->var.yres)) {
   return -VAR_0;
  }
 }
 if ((VAR_1->xoffset != VAR_2->var.xoffset) ||
   (VAR_1->bits_per_pixel != VAR_2->var.bits_per_pixel) ||
   (VAR_1->grayscale != VAR_2->var.grayscale)) {
  return -VAR_0;
 }
 return 0;
}
