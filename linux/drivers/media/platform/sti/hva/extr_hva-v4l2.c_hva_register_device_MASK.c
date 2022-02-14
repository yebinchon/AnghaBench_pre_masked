
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int device_caps; int name; int * v4l2_dev; int vfl_dir; int * lock; int (* release ) (struct video_device*) ;int * ioctl_ops; int * fops; } ;
struct hva_dev {int m2m_dev; struct video_device* vdev; int ip_version; int v4l2_dev; int lock; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct device*,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct device* FUNC_3 (struct hva_dev*) ;
 int FUNC_4 (int ,int,char*,char*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct video_device* FUNC_7 () ;
 int FUNC_8 (struct video_device*) ;
 int FUNC_9 (struct video_device*,int ,int) ;
 int FUNC_10 (struct video_device*,struct hva_dev*) ;

__attribute__((used)) static int FUNC_11(struct hva_dev *VAR_11)
{
 int VAR_12;
 struct video_device *VAR_13;
 struct device *VAR_14;

 if (!VAR_11)
  return -VAR_0;
 VAR_14 = FUNC_3(VAR_11);

 VAR_11->m2m_dev = FUNC_5(&VAR_10);
 if (FUNC_0(VAR_11->m2m_dev)) {
  FUNC_2(VAR_14, "%s failed to initialize v4l2-m2m device\n",
   VAR_3);
  VAR_12 = FUNC_1(VAR_11->m2m_dev);
  goto err;
 }

 VAR_13 = FUNC_7();
 if (!VAR_13) {
  FUNC_2(VAR_14, "%s failed to allocate video device\n",
   VAR_3);
  VAR_12 = -VAR_1;
  goto err_m2m_release;
 }

 VAR_13->fops = &VAR_8;
 VAR_13->ioctl_ops = &VAR_9;
 VAR_13->release = FUNC_8;
 VAR_13->lock = &VAR_11->lock;
 VAR_13->vfl_dir = VAR_6;
 VAR_13->device_caps = VAR_4 | VAR_5;
 VAR_13->v4l2_dev = &VAR_11->v4l2_dev;
 FUNC_4(VAR_13->name, sizeof(VAR_13->name), "%s%lx", VAR_2,
   VAR_11->ip_version);

 VAR_12 = FUNC_9(VAR_13, VAR_7, -1);
 if (VAR_12) {
  FUNC_2(VAR_14, "%s failed to register video device\n",
   VAR_3);
  goto err_vdev_release;
 }

 VAR_11->vdev = VAR_13;
 FUNC_10(VAR_13, VAR_11);
 return 0;

err_vdev_release:
 FUNC_8(VAR_13);
err_m2m_release:
 FUNC_6(VAR_11->m2m_dev);
err:
 return VAR_12;
}
