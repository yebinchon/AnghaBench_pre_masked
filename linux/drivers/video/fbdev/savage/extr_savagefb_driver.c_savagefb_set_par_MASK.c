
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct savagefb_par {scalar_t__ dacSpeedBpp; scalar_t__* clock; scalar_t__ maxClock; int minClock; int state; } ;
struct fb_var_screeninfo {int bits_per_pixel; } ;
struct fb_info {int cmap; struct fb_var_screeninfo var; struct savagefb_par* par; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct savagefb_par*) ;
 int FUNC_2 (int *,struct fb_info*) ;
 int FUNC_3 (struct fb_var_screeninfo*,struct savagefb_par*,int *) ;
 int FUNC_4 (struct fb_info*) ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (struct savagefb_par*,int *) ;

__attribute__((used)) static int FUNC_7(struct fb_info *VAR_0)
{
 struct savagefb_par *VAR_1 = VAR_0->par;
 struct fb_var_screeninfo *VAR_2 = &VAR_0->var;
 int VAR_3;

 FUNC_0("savagefb_set_par");
 VAR_3 = FUNC_3(VAR_2, VAR_1, &VAR_1->state);
 if (VAR_3)
  return VAR_3;

 if (VAR_1->dacSpeedBpp <= 0) {
  if (VAR_2->bits_per_pixel > 24)
   VAR_1->dacSpeedBpp = VAR_1->clock[3];
  else if (VAR_2->bits_per_pixel >= 24)
   VAR_1->dacSpeedBpp = VAR_1->clock[2];
  else if ((VAR_2->bits_per_pixel > 8) && (VAR_2->bits_per_pixel < 24))
   VAR_1->dacSpeedBpp = VAR_1->clock[1];
  else if (VAR_2->bits_per_pixel <= 8)
   VAR_1->dacSpeedBpp = VAR_1->clock[0];
 }


 VAR_1->maxClock = VAR_1->dacSpeedBpp;
 VAR_1->minClock = 10000;

 FUNC_6(VAR_1, &VAR_1->state);
 FUNC_2(&VAR_0->cmap, VAR_0);
 FUNC_5(VAR_0);
 FUNC_4(VAR_0);

 FUNC_1(VAR_1);
 return 0;
}
