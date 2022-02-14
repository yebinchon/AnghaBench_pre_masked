
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mb862xxfb_par {int dummy; } ;
struct TYPE_6__ {int accel; } ;
struct TYPE_4__ {int bits_per_pixel; } ;
struct fb_info {int flags; TYPE_3__ fix; TYPE_2__* fbops; TYPE_1__ var; struct mb862xxfb_par* par; } ;
struct TYPE_5__ {int fb_imageblit; int fb_copyarea; int fb_fillrect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int ,int) ;

void FUNC_1(struct fb_info *VAR_15, int VAR_16)
{
 struct mb862xxfb_par *VAR_17 = VAR_15->par;

 if (VAR_15->var.bits_per_pixel == 32) {
  VAR_15->fbops->fb_fillrect = VAR_8;
  VAR_15->fbops->fb_copyarea = VAR_7;
  VAR_15->fbops->fb_imageblit = VAR_9;
 } else {
  FUNC_0(VAR_10, VAR_3, 3);
  VAR_15->fbops->fb_fillrect = VAR_13;
  VAR_15->fbops->fb_copyarea = VAR_12;
  VAR_15->fbops->fb_imageblit = VAR_14;
 }
 FUNC_0(VAR_11, VAR_4, 0);
 FUNC_0(VAR_11, VAR_5, 0x8000);
 FUNC_0(VAR_11, VAR_6, VAR_16);

 VAR_15->flags |=
     VAR_0 | VAR_1 |
     VAR_2;
 VAR_15->fix.accel = 0xff;
}
