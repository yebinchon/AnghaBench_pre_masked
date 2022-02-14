
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i740fb_par {int* crtc; int ext_start_addr_hi; int ext_start_addr; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct TYPE_2__ {int xres_virtual; int bits_per_pixel; } ;
struct fb_info {TYPE_1__ var; int device; struct i740fb_par* par; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (struct i740fb_par*,int ,size_t,int) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_6,
     struct fb_info *VAR_7)
{
 struct i740fb_par *VAR_8 = VAR_7->par;
 u32 VAR_9 = (VAR_6->yoffset * VAR_7->var.xres_virtual
   + (VAR_6->xoffset & ~7)) >> 2;

 FUNC_0(VAR_7->device, "pan_display: xoffset: %i yoffset: %i base: %i\n",
  VAR_6->xoffset, VAR_6->yoffset, VAR_9);

 switch (VAR_7->var.bits_per_pixel) {
 case 8:
  break;
 case 15:
 case 16:
  VAR_9 *= 2;
  break;
 case 24:




  VAR_9 &= 0xFFFFFFFE;
  VAR_9 *= 3;
  break;
 case 32:
  VAR_9 *= 4;
  break;
 }

 VAR_8->crtc[VAR_4] = VAR_9 & 0x000000FF;
 VAR_8->crtc[VAR_3] = (VAR_9 & 0x0000FF00) >> 8;
 VAR_8->ext_start_addr_hi = (VAR_9 & 0x3FC00000) >> 22;
 VAR_8->ext_start_addr =
   ((VAR_9 & 0x003F0000) >> 16) | VAR_1;

 FUNC_1(VAR_8, VAR_5, VAR_4, VAR_9 & 0x000000FF);
 FUNC_1(VAR_8, VAR_5, VAR_3,
   (VAR_9 & 0x0000FF00) >> 8);
 FUNC_1(VAR_8, VAR_5, VAR_2,
   (VAR_9 & 0x3FC00000) >> 22);
 FUNC_1(VAR_8, VAR_5, VAR_0,
   ((VAR_9 & 0x003F0000) >> 16) | VAR_1);

 return 0;
}
