
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct fb_videomode {int name; } ;
struct da8xx_lcdc_platform_data {int type; } ;


 int FUNC_0 (struct fb_videomode*) ;
 int FUNC_1 (int *,char*) ;
 struct da8xx_lcdc_platform_data* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int ) ;
 struct fb_videomode* VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ) ;

__attribute__((used)) static struct fb_videomode *FUNC_5(struct platform_device *VAR_1)
{
 struct da8xx_lcdc_platform_data *VAR_2 = FUNC_2(&VAR_1->dev);
 struct fb_videomode *VAR_3;
 int VAR_4;

 for (VAR_4 = 0, VAR_3 = VAR_0;
  VAR_4 < FUNC_0(VAR_0); VAR_4++, VAR_3++) {
  if (FUNC_4(VAR_2->type, VAR_3->name) == 0)
   break;
 }

 if (VAR_4 == FUNC_0(VAR_0)) {
  FUNC_1(&VAR_1->dev, "no panel found\n");
  return ((void*)0);
 }
 FUNC_3(&VAR_1->dev, "found %s panel\n", VAR_3->name);

 return VAR_3;
}
