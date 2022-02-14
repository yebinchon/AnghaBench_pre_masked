
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fb_var_screeninfo {int yoffset; int xoffset; } ;
struct TYPE_2__ {int bits_per_pixel; } ;
struct fb_fix_screeninfo {int smem_start; int line_length; } ;
struct fb_info {TYPE_1__ var; struct fb_fix_screeninfo fix; struct atmel_lcdfb_info* par; } ;
struct atmel_lcdfb_info {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct atmel_lcdfb_info*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_1,
          struct fb_var_screeninfo *VAR_2)
{
 struct atmel_lcdfb_info *VAR_3 = VAR_1->par;
 struct fb_fix_screeninfo *VAR_4 = &VAR_1->fix;
 unsigned long VAR_5;

 VAR_5 = (VAR_4->smem_start + VAR_2->yoffset * VAR_4->line_length
      + VAR_2->xoffset * VAR_1->var.bits_per_pixel / 8);

 VAR_5 &= ~3UL;


 FUNC_0(VAR_3, VAR_0, VAR_5);
}
