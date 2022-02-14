
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stm32_dcmi {int dma_chan; int mdev; int v4l2_dev; TYPE_1__* vdev; int notifier; } ;
struct platform_device {int dev; } ;
struct TYPE_2__ {int entity; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct stm32_dcmi* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct stm32_dcmi *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(&VAR_0->dev);

 FUNC_6(&VAR_1->notifier);
 FUNC_5(&VAR_1->notifier);
 FUNC_2(&VAR_1->vdev->entity);
 FUNC_7(&VAR_1->v4l2_dev);
 FUNC_1(&VAR_1->mdev);

 FUNC_0(VAR_1->dma_chan);

 return 0;
}
