
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union aty_pll {int dummy; } aty_pll ;
typedef scalar_t__ u32 ;
struct fb_var_screeninfo {int activate; int accel_flags; int pixclock; int bits_per_pixel; } ;
struct TYPE_3__ {int accel_flags; } ;
struct fb_info {TYPE_1__ var; scalar_t__ par; } ;
struct crtc {int dummy; } ;
struct atyfb_par {TYPE_2__* pll_ops; int pll; } ;
typedef int pll ;
struct TYPE_4__ {int (* var_to_pll ) (struct fb_info*,scalar_t__,int ,union aty_pll*) ;int (* pll_to_var ) (struct fb_info*,union aty_pll*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct crtc*,struct fb_var_screeninfo*) ;
 int FUNC_2 (struct fb_info*,struct fb_var_screeninfo*,struct crtc*) ;
 scalar_t__ FUNC_3 (struct fb_var_screeninfo*,struct atyfb_par*) ;
 int FUNC_4 (union aty_pll*,int *,int) ;
 int FUNC_5 (struct fb_info*,scalar_t__,int ,union aty_pll*) ;
 int FUNC_6 (struct fb_info*,union aty_pll*) ;

__attribute__((used)) static int FUNC_7(struct fb_var_screeninfo *VAR_3, struct fb_info *VAR_4)
{
 struct atyfb_par *VAR_5 = (struct atyfb_par *) VAR_4->par;
 int VAR_6;
 struct crtc VAR_7;
 union aty_pll VAR_8;
 u32 VAR_9;

 FUNC_4(&VAR_8, &VAR_5->pll, sizeof(VAR_8));

 VAR_6 = FUNC_2(VAR_4, VAR_3, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_9 = FUNC_3(VAR_3, VAR_5);

 if (VAR_9 == 0) {
  if (!(VAR_3->activate & VAR_2))
   FUNC_0("Invalid pixclock\n");
  return -VAR_0;
 } else {
  VAR_6 = VAR_5->pll_ops->var_to_pll(VAR_4, VAR_9,
            VAR_3->bits_per_pixel, &VAR_8);
  if (VAR_6)
   return VAR_6;
 }

 if (VAR_3->accel_flags & VAR_1)
  VAR_4->var.accel_flags = VAR_1;
 else
  VAR_4->var.accel_flags = 0;

 FUNC_1(&VAR_7, VAR_3);
 VAR_3->pixclock = VAR_5->pll_ops->pll_to_var(VAR_4, &VAR_8);
 return 0;
}
