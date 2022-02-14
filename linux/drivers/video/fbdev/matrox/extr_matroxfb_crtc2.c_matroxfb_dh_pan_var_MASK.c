
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ offbase; } ;
struct TYPE_4__ {unsigned int xoffset; unsigned int yoffset; int bits_per_pixel; unsigned int xres_virtual; } ;
struct TYPE_5__ {TYPE_1__ var; } ;
struct matroxfb_dh_fb_info {scalar_t__ interlaced; TYPE_3__ video; TYPE_2__ fbcon; struct matrox_fb_info* primary_dev; } ;
struct matrox_fb_info {int dummy; } ;
struct fb_var_screeninfo {unsigned int xoffset; unsigned int yoffset; } ;


 int FUNC_0 (int,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct matroxfb_dh_fb_info* VAR_0,
  struct fb_var_screeninfo* VAR_1) {
 unsigned int VAR_2;
 unsigned int VAR_3;
 unsigned int VAR_4;
 struct matrox_fb_info *VAR_5 = VAR_0->primary_dev;

 VAR_0->fbcon.var.xoffset = VAR_1->xoffset;
 VAR_0->fbcon.var.yoffset = VAR_1->yoffset;
 VAR_4 = VAR_0->fbcon.var.bits_per_pixel >> 3;
 VAR_3 = VAR_0->fbcon.var.xres_virtual * VAR_4;
 VAR_2 = VAR_0->fbcon.var.yoffset * VAR_3 + VAR_0->fbcon.var.xoffset * VAR_4;
 VAR_2 += VAR_0->video.offbase;
 if (VAR_0->interlaced) {
  FUNC_0(0x3C2C, VAR_2);
  FUNC_0(0x3C28, VAR_2 + VAR_3);
 } else {
  FUNC_0(0x3C28, VAR_2);
 }
}
