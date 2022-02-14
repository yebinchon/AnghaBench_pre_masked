
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int win ;
typedef int u32 ;
struct TYPE_2__ {int yres; int xres; } ;
struct mmpfb_info {int overlay; int pix_fmt; TYPE_1__ mode; } ;
struct mmp_win {int* pitch; int pix_fmt; int ydst; int ysrc; int xdst; int xsrc; } ;
struct fb_var_screeninfo {int xres_virtual; } ;
struct fb_info {struct fb_var_screeninfo var; struct mmpfb_info* par; } ;


 int FUNC_0 (struct mmp_win*,int ,int) ;
 int FUNC_1 (int ,struct mmp_win*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_0)
{
 struct mmpfb_info *VAR_1 = VAR_0->par;
 struct fb_var_screeninfo *VAR_2 = &VAR_0->var;
 struct mmp_win VAR_3;
 u32 VAR_4;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.xsrc = VAR_3.xdst = VAR_1->mode.xres;
 VAR_3.ysrc = VAR_3.ydst = VAR_1->mode.yres;
 VAR_3.pix_fmt = VAR_1->pix_fmt;
 VAR_4 = FUNC_2(VAR_3.pix_fmt);
 VAR_3.pitch[0] = VAR_2->xres_virtual * VAR_4;
 VAR_3.pitch[1] = VAR_3.pitch[2] =
  (VAR_4 == 1) ? (VAR_2->xres_virtual >> 1) : 0;
 FUNC_1(VAR_1->overlay, &VAR_3);
}
