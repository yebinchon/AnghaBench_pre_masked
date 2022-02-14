
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_device {int dummy; } ;
struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct TYPE_2__ {int dma; int virt; } ;
struct aspeed_video {TYPE_1__ jpeg; int dev; int ctrl_handler; int queue; int vdev; int eclk; int vclk; } ;


 int VAR_0 ;
 int FUNC_0 (struct aspeed_video*) ;
 int FUNC_1 (int ) ;
 struct v4l2_device* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct device*) ;
 struct aspeed_video* FUNC_5 (struct v4l2_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct v4l2_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct v4l2_device *VAR_3 = FUNC_2(VAR_2);
 struct aspeed_video *VAR_4 = FUNC_5(VAR_3);

 FUNC_0(VAR_4);

 FUNC_1(VAR_4->vclk);
 FUNC_1(VAR_4->eclk);

 FUNC_9(&VAR_4->vdev);

 FUNC_8(&VAR_4->queue);

 FUNC_6(&VAR_4->ctrl_handler);

 FUNC_7(VAR_3);

 FUNC_3(VAR_4->dev, VAR_0, VAR_4->jpeg.virt,
     VAR_4->jpeg.dma);

 FUNC_4(VAR_2);

 return 0;
}
