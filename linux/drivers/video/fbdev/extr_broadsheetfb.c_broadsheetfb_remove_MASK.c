
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct fb_info {scalar_t__ screen_base; int cmap; int dev; struct broadsheetfb_par* par; } ;
struct broadsheetfb_par {TYPE_1__* board; } ;
struct TYPE_2__ {int owner; int (* cleanup ) (struct broadsheetfb_par*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (int ) ;
 struct fb_info* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (struct broadsheetfb_par*) ;
 int FUNC_7 (struct fb_info*) ;
 int FUNC_8 (void*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_5(VAR_1);

 if (VAR_2) {
  struct broadsheetfb_par *VAR_3 = VAR_2->par;

  FUNC_0(VAR_2->dev, &VAR_0);
  FUNC_7(VAR_2);
  FUNC_2(VAR_2);
  VAR_3->board->cleanup(VAR_3);
  FUNC_1(&VAR_2->cmap);
  FUNC_8((void *)VAR_2->screen_base);
  FUNC_4(VAR_3->board->owner);
  FUNC_3(VAR_2);
 }
 return 0;
}
