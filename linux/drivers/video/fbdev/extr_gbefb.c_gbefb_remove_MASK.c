
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgi_gbe {int dummy; } ;
struct platform_device {int dev; } ;
struct gbefb_par {int wc_cookie; } ;
struct fb_info {struct gbefb_par* par; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fb_info*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 struct fb_info* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct fb_info*) ;

__attribute__((used)) static int FUNC_7(struct platform_device* VAR_1)
{
 struct fb_info *VAR_2 = FUNC_4(VAR_1);
 struct gbefb_par *VAR_3 = VAR_2->par;

 FUNC_6(VAR_2);
 FUNC_2();
 FUNC_0(VAR_3->wc_cookie);
 FUNC_5(VAR_0, sizeof(struct sgi_gbe));
 FUNC_3(&VAR_1->dev);
 FUNC_1(VAR_2);

 return 0;
}
