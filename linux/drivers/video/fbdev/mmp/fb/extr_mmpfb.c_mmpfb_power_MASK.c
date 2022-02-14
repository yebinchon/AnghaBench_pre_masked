
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmpfb_info {int overlay; scalar_t__ fb_start_dma; TYPE_1__* fb_info; } ;
struct mmp_addr {scalar_t__* phys; } ;
struct fb_var_screeninfo {int yoffset; int xres_virtual; int xoffset; int bits_per_pixel; } ;
typedef int addr ;
struct TYPE_2__ {struct fb_var_screeninfo var; } ;


 int FUNC_0 (struct mmp_addr*,int ,int) ;
 int FUNC_1 (int ,struct mmp_addr*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct mmpfb_info *VAR_0, int VAR_1)
{
 struct mmp_addr VAR_2;
 struct fb_var_screeninfo *VAR_3 = &VAR_0->fb_info->var;


 if (VAR_1) {

  FUNC_3(VAR_0->fb_info);


  FUNC_0(&VAR_2, 0, sizeof(VAR_2));
  VAR_2.phys[0] = VAR_0->fb_start_dma +
   (VAR_3->yoffset * VAR_3->xres_virtual + VAR_3->xoffset)
   * VAR_3->bits_per_pixel / 8;
  FUNC_1(VAR_0->overlay, &VAR_2);
 }
 FUNC_2(VAR_0->overlay, VAR_1);
}
