
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct imxfb_info {int regs; int map_dma; int map_size; int pdev; } ;
struct imx_fb_platform_data {int (* exit ) (int ) ;} ;
struct fb_info {int pseudo_palette; int screen_buffer; int cmap; struct imxfb_info* par; } ;


 int VAR_0 ;
 struct imx_fb_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fb_info*) ;
 int FUNC_4 (struct imxfb_info*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct fb_info* FUNC_7 (struct platform_device*) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct fb_info*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_1)
{
 struct imx_fb_platform_data *VAR_2;
 struct fb_info *VAR_3 = FUNC_7(VAR_1);
 struct imxfb_info *VAR_4 = VAR_3->par;
 struct resource *VAR_5;

 VAR_5 = FUNC_8(VAR_1, VAR_0, 0);

 FUNC_4(VAR_4);

 FUNC_12(VAR_3);
 FUNC_2(&VAR_3->cmap);
 VAR_2 = FUNC_0(&VAR_1->dev);
 if (VAR_2 && VAR_2->exit)
  VAR_2->exit(VAR_4->pdev);
 FUNC_1(&VAR_1->dev, VAR_4->map_size, VAR_3->screen_buffer,
      VAR_4->map_dma);
 FUNC_5(VAR_4->regs);
 FUNC_9(VAR_5->start, FUNC_10(VAR_5));
 FUNC_6(VAR_3->pseudo_palette);
 FUNC_3(VAR_3);

 return 0;
}
