
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmpfb_info {int overlay; scalar_t__ fb_start_dma; int path; int output_fmt; int mode; } ;
struct mmp_mode {int dummy; } ;
struct mmp_addr {scalar_t__* phys; } ;
struct fb_var_screeninfo {int yoffset; int xres_virtual; int xoffset; int bits_per_pixel; } ;
struct fb_info {struct fb_var_screeninfo var; struct mmpfb_info* par; } ;
typedef int addr ;


 int FUNC_0 (struct mmp_mode*,int *,int ) ;
 int FUNC_1 (struct mmp_addr*,int ,int) ;
 int FUNC_2 (int ,struct mmp_addr*) ;
 int FUNC_3 (int ,struct mmp_mode*) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct fb_info*) ;

__attribute__((used)) static int FUNC_6(struct fb_info *VAR_0)
{
 struct mmpfb_info *VAR_1 = VAR_0->par;
 struct fb_var_screeninfo *VAR_2 = &VAR_0->var;
 struct mmp_addr VAR_3;
 struct mmp_mode VAR_4;
 int VAR_5;

 VAR_5 = FUNC_5(VAR_0);
 if (VAR_5 != 0)
  return VAR_5;


 FUNC_0(&VAR_4, &VAR_1->mode, VAR_1->output_fmt);
 FUNC_3(VAR_1->path, &VAR_4);


 FUNC_4(VAR_0);


 FUNC_1(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.phys[0] = (VAR_2->yoffset * VAR_2->xres_virtual + VAR_2->xoffset)
  * VAR_2->bits_per_pixel / 8 + VAR_1->fb_start_dma;
 FUNC_2(VAR_1->overlay, &VAR_3);

 return 0;
}
