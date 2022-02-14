
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vbe_mode_ib {int bytes_per_scan_line; int mode_attr; } ;
struct uvesafb_par {scalar_t__ ypan; struct vbe_mode_ib* vbe_modes; } ;
struct TYPE_7__ {int length; } ;
struct TYPE_6__ {int length; } ;
struct TYPE_5__ {int length; } ;
struct fb_var_screeninfo {int bits_per_pixel; int yres; int vmode; int yres_virtual; int xres; int xres_virtual; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
struct TYPE_8__ {int smem_len; } ;
struct fb_info {TYPE_4__ fix; struct uvesafb_par* par; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fb_var_screeninfo*,struct fb_info*) ;
 int FUNC_2 (struct fb_var_screeninfo*,struct fb_info*,struct vbe_mode_ib*) ;
 int FUNC_3 (struct uvesafb_par*,int ,int,int,int ) ;

__attribute__((used)) static int FUNC_4(struct fb_var_screeninfo *VAR_4,
  struct fb_info *VAR_5)
{
 struct uvesafb_par *VAR_6 = VAR_5->par;
 struct vbe_mode_ib *VAR_7 = ((void*)0);
 int VAR_8 = -1;
 int VAR_9 = VAR_4->red.length + VAR_4->green.length + VAR_4->blue.length;






 if (VAR_9 == 0 || FUNC_0(VAR_9 - VAR_4->bits_per_pixel) >= 8)
  VAR_9 = VAR_4->bits_per_pixel;

 VAR_8 = FUNC_3(VAR_6, VAR_4->xres, VAR_4->yres, VAR_9,
      VAR_3);
 if (VAR_8 == -1)
  return -VAR_0;

 VAR_7 = &VAR_6->vbe_modes[VAR_8];
 FUNC_2(VAR_4, VAR_5, VAR_7);






 if (VAR_4->yres * VAR_7->bytes_per_scan_line > VAR_5->fix.smem_len
      && VAR_5->fix.smem_len)
  return -VAR_0;

 if ((VAR_4->vmode & VAR_1) &&
    !(VAR_6->vbe_modes[VAR_8].mode_attr & 0x100))
  VAR_4->vmode &= ~VAR_1;

 if ((VAR_4->vmode & VAR_2) &&
    !(VAR_6->vbe_modes[VAR_8].mode_attr & 0x200))
  VAR_4->vmode &= ~VAR_2;

 FUNC_1(VAR_4, VAR_5);

 VAR_4->xres_virtual = VAR_4->xres;
 VAR_4->yres_virtual = (VAR_6->ypan) ?
    VAR_5->fix.smem_len / VAR_7->bytes_per_scan_line :
    VAR_4->yres;
 return 0;
}
