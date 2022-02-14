
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmpfb_info {int overlay; scalar_t__ fb_start_dma; } ;
struct mmp_addr {scalar_t__* phys; } ;
struct fb_var_screeninfo {int yoffset; int xres_virtual; int xoffset; int bits_per_pixel; } ;
struct fb_info {struct mmpfb_info* par; } ;
typedef int addr ;


 int FUNC_0 (struct mmp_addr*,int ,int) ;
 int FUNC_1 (int ,struct mmp_addr*) ;

__attribute__((used)) static int FUNC_2(struct fb_var_screeninfo *VAR_0,
  struct fb_info *VAR_1)
{
 struct mmpfb_info *VAR_2 = VAR_1->par;
 struct mmp_addr VAR_3;

 FUNC_0(&VAR_3, 0, sizeof(VAR_3));
 VAR_3.phys[0] = (VAR_0->yoffset * VAR_0->xres_virtual + VAR_0->xoffset)
  * VAR_0->bits_per_pixel / 8 + VAR_2->fb_start_dma;
 FUNC_1(VAR_2->overlay, &VAR_3);

 return 0;
}
