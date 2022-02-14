
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct imx_media_dev {int md; int v4l2_dev; int m2m_vdev; int notifier; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct imx_media_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_0)
{
 struct imx_media_dev *VAR_1 =
  (struct imx_media_dev *)FUNC_4(VAR_0);

 FUNC_8(&VAR_1->v4l2_dev, "Removing imx-media\n");

 FUNC_6(&VAR_1->notifier);
 FUNC_1(VAR_1);
 FUNC_5(&VAR_1->notifier);
 FUNC_0(VAR_1->m2m_vdev);
 FUNC_3(&VAR_1->md);
 FUNC_7(&VAR_1->v4l2_dev);
 FUNC_2(&VAR_1->md);

 return 0;
}
