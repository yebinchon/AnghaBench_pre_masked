
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long u32 ;
struct grvga_par {TYPE_1__* regs; } ;
struct fb_var_screeninfo {scalar_t__ xoffset; int yoffset; } ;
struct fb_fix_screeninfo {unsigned long smem_start; int line_length; } ;
struct fb_info {struct fb_fix_screeninfo fix; struct grvga_par* par; } ;
struct TYPE_2__ {int fb_pos; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int *) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_1,
        struct fb_info *VAR_2)
{
 struct grvga_par *VAR_3 = VAR_2->par;
 struct fb_fix_screeninfo *VAR_4 = &VAR_2->fix;
 u32 VAR_5;

 if (VAR_1->xoffset != 0)
  return -VAR_0;

 VAR_5 = VAR_4->smem_start + (VAR_1->yoffset * VAR_4->line_length);
 VAR_5 &= ~3UL;


 FUNC_0(VAR_5,
       &VAR_3->regs->fb_pos);

 return 0;
}
