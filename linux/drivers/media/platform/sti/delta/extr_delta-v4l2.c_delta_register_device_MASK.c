
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int device_caps; int name; int * v4l2_dev; int vfl_dir; int * lock; int (* release ) (struct video_device*) ;int * ioctl_ops; int * fops; } ;
struct delta_dev {int m2m_dev; struct video_device* vdev; int dev; int v4l2_dev; int lock; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,int,char*,char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct video_device* FUNC_6 () ;
 int FUNC_7 (struct video_device*) ;
 int FUNC_8 (struct video_device*,int ,int) ;
 int FUNC_9 (struct video_device*,struct delta_dev*) ;

__attribute__((used)) static int FUNC_10(struct delta_dev *VAR_12)
{
 int VAR_13;
 struct video_device *VAR_14;

 if (!VAR_12)
  return -VAR_3;

 VAR_12->m2m_dev = FUNC_4(&VAR_11);
 if (FUNC_0(VAR_12->m2m_dev)) {
  FUNC_2(VAR_12->dev, "%s failed to initialize v4l2-m2m device\n",
   VAR_2);
  VAR_13 = FUNC_1(VAR_12->m2m_dev);
  goto err;
 }

 VAR_14 = FUNC_6();
 if (!VAR_14) {
  FUNC_2(VAR_12->dev, "%s failed to allocate video device\n",
   VAR_2);
  VAR_13 = -VAR_4;
  goto err_m2m_release;
 }

 VAR_14->fops = &VAR_9;
 VAR_14->ioctl_ops = &VAR_10;
 VAR_14->release = FUNC_7;
 VAR_14->lock = &VAR_12->lock;
 VAR_14->vfl_dir = VAR_7;
 VAR_14->device_caps = VAR_5 | VAR_6;
 VAR_14->v4l2_dev = &VAR_12->v4l2_dev;
 FUNC_3(VAR_14->name, sizeof(VAR_14->name), "%s-%s",
   VAR_1, VAR_0);

 VAR_13 = FUNC_8(VAR_14, VAR_8, -1);
 if (VAR_13) {
  FUNC_2(VAR_12->dev, "%s failed to register video device\n",
   VAR_2);
  goto err_vdev_release;
 }

 VAR_12->vdev = VAR_14;
 FUNC_9(VAR_14, VAR_12);
 return 0;

err_vdev_release:
 FUNC_7(VAR_14);
err_m2m_release:
 FUNC_5(VAR_12->m2m_dev);
err:
 return VAR_13;
}
