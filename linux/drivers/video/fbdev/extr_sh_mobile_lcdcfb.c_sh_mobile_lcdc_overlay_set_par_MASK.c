
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sh_mobile_lcdc_overlay {int xres_virtual; int pitch; TYPE_3__* format; int yres_virtual; int yres; int xres; } ;
struct TYPE_5__ {int line_length; int visual; int type; } ;
struct TYPE_6__ {int xres_virtual; int yres_virtual; int yres; int xres; } ;
struct fb_info {TYPE_1__ fix; TYPE_2__ var; struct sh_mobile_lcdc_overlay* par; } ;
struct TYPE_7__ {int bpp; scalar_t__ yuv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct sh_mobile_lcdc_overlay*) ;

__attribute__((used)) static int FUNC_4(struct fb_info *VAR_4)
{
 struct sh_mobile_lcdc_overlay *VAR_5 = VAR_4->par;

 VAR_5->format =
  FUNC_1(FUNC_0(&VAR_4->var));

 VAR_5->xres = VAR_4->var.xres;
 VAR_5->xres_virtual = VAR_4->var.xres_virtual;
 VAR_5->yres = VAR_4->var.yres;
 VAR_5->yres_virtual = VAR_4->var.yres_virtual;

 if (VAR_5->format->yuv)
  VAR_5->pitch = VAR_4->var.xres_virtual;
 else
  VAR_5->pitch = VAR_4->var.xres_virtual * VAR_5->format->bpp / 8;

 FUNC_3(VAR_5);

 VAR_4->fix.line_length = VAR_5->pitch;

 if (FUNC_2(&VAR_4->var)) {
  VAR_4->fix.type = VAR_0;
  VAR_4->fix.visual = VAR_2;
 } else {
  VAR_4->fix.type = VAR_1;
  VAR_4->fix.visual = VAR_3;
 }

 return 0;
}
