
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh7760fb_par {TYPE_1__* pd; } ;
struct fb_var_screeninfo {int bits_per_pixel; scalar_t__ grayscale; } ;
struct fb_fix_screeninfo {int visual; } ;
struct fb_info {int dev; struct sh7760fb_par* par; struct fb_fix_screeninfo fix; } ;
struct TYPE_2__ {int lddfr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*,int *) ;

__attribute__((used)) static int FUNC_1(struct fb_var_screeninfo *VAR_3,
         struct fb_info *VAR_4)
{
 struct fb_fix_screeninfo *VAR_5 = &VAR_4->fix;
 struct sh7760fb_par *VAR_6 = VAR_4->par;
 int VAR_7, VAR_8;


 VAR_7 = FUNC_0(VAR_4->dev, VAR_6->pd->lddfr, &VAR_8, ((void*)0));
 if (VAR_7)
  return VAR_7;

 VAR_3->bits_per_pixel = VAR_8;

 if ((VAR_3->grayscale) && (VAR_3->bits_per_pixel == 1))
  VAR_5->visual = VAR_0;
 else if (VAR_3->bits_per_pixel >= 15)
  VAR_5->visual = VAR_2;
 else
  VAR_5->visual = VAR_1;


 return 0;
}
