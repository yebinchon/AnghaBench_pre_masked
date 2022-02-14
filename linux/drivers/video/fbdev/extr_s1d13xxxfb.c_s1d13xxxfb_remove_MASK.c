
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s1d13xxxfb_par {scalar_t__ regs; } ;
struct platform_device {TYPE_1__* resource; } ;
struct fb_info {scalar_t__ screen_base; int cmap; struct s1d13xxxfb_par* par; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (scalar_t__) ;
 struct fb_info* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (struct s1d13xxxfb_par*,int ,int) ;

__attribute__((used)) static int
FUNC_6(struct platform_device *VAR_2)
{
 struct fb_info *VAR_3 = FUNC_3(VAR_2);
 struct s1d13xxxfb_par *VAR_4 = ((void*)0);

 if (VAR_3) {
  VAR_4 = VAR_3->par;
  if (VAR_4 && VAR_4->regs) {

   FUNC_5(VAR_4, VAR_0, 0x00);
   FUNC_5(VAR_4, VAR_1, 0x11);
   FUNC_2(VAR_4->regs);
  }

  FUNC_0(&VAR_3->cmap);

  if (VAR_3->screen_base)
   FUNC_2(VAR_3->screen_base);

  FUNC_1(VAR_3);
 }

 FUNC_4(VAR_2->resource[0].start,
   VAR_2->resource[0].end - VAR_2->resource[0].start +1);
 FUNC_4(VAR_2->resource[1].start,
   VAR_2->resource[1].end - VAR_2->resource[1].start +1);
 return 0;
}
