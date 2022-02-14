
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kyrofb_info {int PIXCLK; int VSP; int HSP; } ;
struct TYPE_3__ {int bits_per_pixel; int xres; int yres; } ;
struct fb_info {TYPE_1__ var; struct kyrofb_info* par; } ;
struct TYPE_4__ {int ulNextFreeVidMem; scalar_t__ ulOverlayOffset; int pSTGReg; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int,int,int,int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct kyrofb_info*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_8(struct fb_info *VAR_2)
{
 struct kyrofb_info *VAR_3 = VAR_2->par;


 FUNC_7(VAR_1.pSTGReg);
 FUNC_0(VAR_1.pSTGReg);


 FUNC_1(VAR_1.pSTGReg);

 if (FUNC_3(VAR_1.pSTGReg,
        VAR_2->var.bits_per_pixel,
        VAR_2->var.xres, VAR_2->var.yres,
        VAR_3->HSP, VAR_3->VSP, &VAR_3->PIXCLK) < 0)
  return -VAR_0;

 FUNC_5(VAR_1.pSTGReg, VAR_3);

 FUNC_4(VAR_1.pSTGReg);


 FUNC_2(VAR_1.pSTGReg);
 FUNC_6(VAR_1.pSTGReg);

 VAR_1.ulNextFreeVidMem = VAR_2->var.xres * VAR_2->var.yres *
          VAR_2->var.bits_per_pixel;
 VAR_1.ulOverlayOffset = 0;

 return 0;
}
