
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w100fb_par {int saved_extmem; int saved_intmem; } ;
struct platform_device {int dummy; } ;
struct fb_info {int cmap; int pseudo_palette; struct w100fb_par* par; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct fb_info* FUNC_4 (struct platform_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct fb_info*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_3)
{
 struct fb_info *VAR_4 = FUNC_4(VAR_3);
 struct w100fb_par *VAR_5=VAR_4->par;

 FUNC_5(VAR_4);

 FUNC_6(VAR_5->saved_intmem);
 FUNC_6(VAR_5->saved_extmem);
 FUNC_3(VAR_4->pseudo_palette);
 FUNC_0(&VAR_4->cmap);

 FUNC_2(VAR_0);
 FUNC_2(VAR_2);
 FUNC_2(VAR_1);

 FUNC_1(VAR_4);

 return 0;
}
