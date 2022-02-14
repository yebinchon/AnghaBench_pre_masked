
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tmiofb_par {int ccr; int lcr; } ;
struct platform_device {int dummy; } ;
struct mfd_cell {int (* disable ) (struct platform_device*) ;} ;
struct fb_info {int screen_base; struct tmiofb_par* par; } ;


 int FUNC_0 (struct fb_info*) ;
 int FUNC_1 (int,struct fb_info*) ;
 int FUNC_2 (int ) ;
 struct mfd_cell* FUNC_3 (struct platform_device*) ;
 struct fb_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct fb_info*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 const struct mfd_cell *VAR_1 = FUNC_3(VAR_0);
 struct fb_info *VAR_2 = FUNC_4(VAR_0);
 int VAR_3 = FUNC_5(VAR_0, 0);
 struct tmiofb_par *VAR_4;

 if (VAR_2) {
  VAR_4 = VAR_2->par;
  FUNC_8(VAR_2);

  FUNC_7(VAR_0);

  if (VAR_1->disable)
   VAR_1->disable(VAR_0);

  FUNC_1(VAR_3, VAR_2);

  FUNC_2(VAR_2->screen_base);
  FUNC_2(VAR_4->lcr);
  FUNC_2(VAR_4->ccr);

  FUNC_0(VAR_2);
 }

 return 0;
}
