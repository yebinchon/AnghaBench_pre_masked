
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int vgabase; } ;
struct vt8623fb_info {TYPE_3__ state; } ;
struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct TYPE_5__ {int bits_per_pixel; int xres_virtual; } ;
struct TYPE_4__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct vt8623fb_info* par; } ;


 int FUNC_0 (int ,int ,unsigned int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1, struct fb_info *VAR_2)
{
 struct vt8623fb_info *VAR_3 = VAR_2->par;
 unsigned int VAR_4;


 if (VAR_2->var.bits_per_pixel == 0) {
  VAR_4 = (VAR_1->yoffset / 16) * VAR_2->var.xres_virtual
         + VAR_1->xoffset;
  VAR_4 = VAR_4 >> 3;
 } else {
  VAR_4 = (VAR_1->yoffset * VAR_2->fix.line_length) +
    (VAR_1->xoffset * VAR_2->var.bits_per_pixel / 8);
  VAR_4 = VAR_4 >> ((VAR_2->var.bits_per_pixel == 4) ? 2 : 1);
 }


 FUNC_0(VAR_3->state.vgabase, VAR_0, VAR_4);

 return 0;
}
