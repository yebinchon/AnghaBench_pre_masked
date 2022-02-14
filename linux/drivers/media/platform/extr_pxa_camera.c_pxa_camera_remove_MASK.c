
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_camera_dev {int v4l2_dev; int * mclk_clk; int notifier; int * dma_chans; } ;
struct platform_device {int dev; } ;


 struct pxa_camera_dev* FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pxa_camera_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct pxa_camera_dev *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_3(VAR_1);
 FUNC_2(VAR_1->dma_chans[0]);
 FUNC_2(VAR_1->dma_chans[1]);
 FUNC_2(VAR_1->dma_chans[2]);

 FUNC_5(&VAR_1->notifier);
 FUNC_4(&VAR_1->notifier);

 if (VAR_1->mclk_clk) {
  FUNC_6(VAR_1->mclk_clk);
  VAR_1->mclk_clk = ((void*)0);
 }

 FUNC_7(&VAR_1->v4l2_dev);

 FUNC_1(&VAR_0->dev, "PXA Camera driver unloaded\n");

 return 0;
}
