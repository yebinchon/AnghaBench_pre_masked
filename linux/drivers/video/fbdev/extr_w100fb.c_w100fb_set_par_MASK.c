
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct w100fb_par {scalar_t__ xres; scalar_t__ yres; int extmem_active; TYPE_3__* mach; int mode; } ;
struct TYPE_8__ {int line_length; int smem_len; scalar_t__ ywrapstep; scalar_t__ ypanstep; int visual; } ;
struct TYPE_5__ {scalar_t__ xres; scalar_t__ yres; } ;
struct fb_info {int mm_lock; TYPE_4__ fix; TYPE_1__ var; struct w100fb_par* par; } ;
struct TYPE_7__ {TYPE_2__* mem; } ;
struct TYPE_6__ {int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct w100fb_par*) ;
 int FUNC_3 (struct w100fb_par*,scalar_t__*,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_3)
{
 struct w100fb_par *VAR_4=VAR_3->par;

 if (VAR_4->xres != VAR_3->var.xres || VAR_4->yres != VAR_3->var.yres) {
  VAR_4->xres = VAR_3->var.xres;
  VAR_4->yres = VAR_3->var.yres;
  VAR_4->mode = FUNC_3(VAR_4, &VAR_4->xres, &VAR_4->yres, 0);

  VAR_3->fix.visual = VAR_1;
  VAR_3->fix.ypanstep = 0;
  VAR_3->fix.ywrapstep = 0;
  VAR_3->fix.line_length = VAR_4->xres * VAR_0 / 8;

  FUNC_0(&VAR_3->mm_lock);
  if ((VAR_4->xres*VAR_4->yres*VAR_0/8) > (VAR_2+1)) {
   VAR_4->extmem_active = 1;
   VAR_3->fix.smem_len = VAR_4->mach->mem->size+1;
  } else {
   VAR_4->extmem_active = 0;
   VAR_3->fix.smem_len = VAR_2+1;
  }
  FUNC_1(&VAR_3->mm_lock);

  FUNC_2(VAR_4);
 }
 return 0;
}
