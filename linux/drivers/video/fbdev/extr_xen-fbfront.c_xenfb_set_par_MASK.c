
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ offset; int depth; int stride; int height; int width; int type; } ;
struct xenfb_info {int resize_dpy; int resize_lock; TYPE_3__ resize; } ;
struct TYPE_5__ {int bits_per_pixel; int yres; int xres; } ;
struct TYPE_4__ {int line_length; } ;
struct fb_info {TYPE_2__ var; TYPE_1__ fix; struct xenfb_info* par; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct fb_info *VAR_1)
{
 struct xenfb_info *VAR_2;
 unsigned long VAR_3;

 VAR_2 = VAR_1->par;

 FUNC_0(&VAR_2->resize_lock, VAR_3);
 VAR_2->resize.type = VAR_0;
 VAR_2->resize.width = VAR_1->var.xres;
 VAR_2->resize.height = VAR_1->var.yres;
 VAR_2->resize.stride = VAR_1->fix.line_length;
 VAR_2->resize.depth = VAR_1->var.bits_per_pixel;
 VAR_2->resize.offset = 0;
 VAR_2->resize_dpy = 1;
 FUNC_1(&VAR_2->resize_lock, VAR_3);
 return 0;
}
