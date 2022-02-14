
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh7760fb_par {scalar_t__ irq; TYPE_1__* ioarea; int base; int vsync; } ;
struct platform_device {int dummy; } ;
struct fb_info {int cmap; struct sh7760fb_par* par; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int ) ;
 struct fb_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,struct fb_info*) ;
 int FUNC_8 (struct fb_info*) ;
 int FUNC_9 (struct fb_info*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct fb_info *VAR_2 = FUNC_4(VAR_1);
 struct sh7760fb_par *VAR_3 = VAR_2->par;

 FUNC_7(VAR_0, VAR_2);
 FUNC_9(VAR_2);
 FUNC_0(&VAR_2->cmap);
 FUNC_8(VAR_2);
 if (VAR_3->irq >= 0)
  FUNC_2(VAR_3->irq, &VAR_3->vsync);
 FUNC_3(VAR_3->base);
 FUNC_5(VAR_3->ioarea->start, FUNC_6(VAR_3->ioarea));
 FUNC_1(VAR_2);

 return 0;
}
