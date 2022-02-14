
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fb_info {int cmap; struct da8xx_fb_par* par; } ;
struct da8xx_fb_par {scalar_t__ lcd_supply; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fb_info* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fb_info*) ;
 int FUNC_3 (struct da8xx_fb_par*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct fb_info*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_3)
{
 struct fb_info *VAR_4 = FUNC_0(&VAR_3->dev);
 struct da8xx_fb_par *VAR_5 = VAR_4->par;
 int VAR_6;




 if (VAR_5->lcd_supply) {
  VAR_6 = FUNC_8(VAR_5->lcd_supply);
  if (VAR_6)
   return VAR_6;
 }

 FUNC_4(VAR_0);
 FUNC_5(0, VAR_2);


 FUNC_5(0, VAR_1);

 FUNC_9(VAR_4);
 FUNC_1(&VAR_4->cmap);
 FUNC_7(&VAR_3->dev);
 FUNC_6(&VAR_3->dev);
 FUNC_2(VAR_4);

 return 0;
}
