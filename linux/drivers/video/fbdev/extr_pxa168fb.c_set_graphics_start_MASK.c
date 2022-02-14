
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa168fb_info {int fb_start_dma; scalar_t__ reg_base; } ;
struct fb_var_screeninfo {int xres_virtual; int bits_per_pixel; } ;
struct fb_info {struct fb_var_screeninfo var; struct pxa168fb_info* par; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct fb_info *VAR_1, int VAR_2, int VAR_3)
{
 struct pxa168fb_info *VAR_4 = VAR_1->par;
 struct fb_var_screeninfo *VAR_5 = &VAR_1->var;
 int VAR_6;
 unsigned long VAR_7;

 VAR_6 = (VAR_3 * VAR_5->xres_virtual) + VAR_2;

 VAR_7 = VAR_4->fb_start_dma + (VAR_6 * (VAR_5->bits_per_pixel >> 3));
 FUNC_0(VAR_7, VAR_4->reg_base + VAR_0);
}
