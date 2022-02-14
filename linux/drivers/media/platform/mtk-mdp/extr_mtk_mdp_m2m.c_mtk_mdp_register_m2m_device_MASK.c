
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mtk_mdp_dev {TYPE_2__* vdev; int m2m_dev; int v4l2_dev; int lock; int * variant; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_7__ {int device_caps; int num; int name; int * v4l2_dev; int vfl_dir; int * lock; int (* release ) (TYPE_2__*) ;int * ioctl_ops; int * fops; } ;
struct TYPE_6__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 char* VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct device*,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int,char*,char*) ;
 int FUNC_4 (int *,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 TYPE_2__* FUNC_7 () ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (TYPE_2__*,struct mtk_mdp_dev*) ;

int FUNC_11(struct mtk_mdp_dev *VAR_10)
{
 struct device *VAR_11 = &VAR_10->pdev->dev;
 int VAR_12;

 VAR_10->variant = &VAR_6;
 VAR_10->vdev = FUNC_7();
 if (!VAR_10->vdev) {
  FUNC_2(VAR_11, "failed to allocate video device\n");
  VAR_12 = -VAR_0;
  goto err_video_alloc;
 }
 VAR_10->vdev->device_caps = VAR_3 | VAR_2;
 VAR_10->vdev->fops = &VAR_7;
 VAR_10->vdev->ioctl_ops = &VAR_8;
 VAR_10->vdev->release = FUNC_8;
 VAR_10->vdev->lock = &VAR_10->lock;
 VAR_10->vdev->vfl_dir = VAR_4;
 VAR_10->vdev->v4l2_dev = &VAR_10->v4l2_dev;
 FUNC_3(VAR_10->vdev->name, sizeof(VAR_10->vdev->name), "%s:m2m",
   VAR_1);
 FUNC_10(VAR_10->vdev, VAR_10);

 VAR_10->m2m_dev = FUNC_5(&VAR_9);
 if (FUNC_0(VAR_10->m2m_dev)) {
  FUNC_2(VAR_11, "failed to initialize v4l2-m2m device\n");
  VAR_12 = FUNC_1(VAR_10->m2m_dev);
  goto err_m2m_init;
 }

 VAR_12 = FUNC_9(VAR_10->vdev, VAR_5, 2);
 if (VAR_12) {
  FUNC_2(VAR_11, "failed to register video device\n");
  goto err_vdev_register;
 }

 FUNC_4(&VAR_10->v4l2_dev, "driver registered as /dev/video%d",
    VAR_10->vdev->num);
 return 0;

err_vdev_register:
 FUNC_6(VAR_10->m2m_dev);
err_m2m_init:
 FUNC_8(VAR_10->vdev);
err_video_alloc:

 return VAR_12;
}
