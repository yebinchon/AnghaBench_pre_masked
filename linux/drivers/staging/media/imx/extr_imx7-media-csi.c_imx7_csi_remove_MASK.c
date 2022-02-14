
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct platform_device {int dummy; } ;
struct imx_media_dev {int md; int v4l2_dev; int notifier; } ;
struct imx7_csi {int lock; int ctrl_hdlr; int vdev; struct imx_media_dev* imxmd; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct v4l2_subdev* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct v4l2_subdev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct imx7_csi* FUNC_11 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_0)
{
 struct v4l2_subdev *VAR_1 = FUNC_5(VAR_0);
 struct imx7_csi *VAR_2 = FUNC_11(VAR_1);
 struct imx_media_dev *VAR_3 = VAR_2->imxmd;

 FUNC_7(&VAR_3->notifier);
 FUNC_6(&VAR_3->notifier);

 FUNC_3(&VAR_3->md);
 FUNC_10(&VAR_3->v4l2_dev);
 FUNC_2(&VAR_3->md);

 FUNC_1(VAR_2->vdev);
 FUNC_0(VAR_2->vdev);

 FUNC_8(VAR_1);
 FUNC_9(&VAR_2->ctrl_hdlr);

 FUNC_4(&VAR_2->lock);

 return 0;
}
