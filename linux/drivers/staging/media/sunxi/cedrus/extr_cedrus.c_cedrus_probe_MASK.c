
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct video_device {char* name; int num; TYPE_1__* v4l2_dev; int * lock; } ;
struct platform_device {int dev; } ;
struct TYPE_7__ {TYPE_5__* mdev; } ;
struct TYPE_8__ {int * ops; int model; int * dev; } ;
struct cedrus_dev {TYPE_1__ v4l2_dev; int m2m_dev; struct video_device vfd; TYPE_5__ mdev; int dev_mutex; int ** dec_ops; struct platform_device* pdev; int * dev; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct cedrus_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct video_device VAR_11 ;
 int FUNC_3 (int *,char*) ;
 struct cedrus_dev* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct platform_device*,struct cedrus_dev*) ;
 int FUNC_9 (char*,int,char*,char*) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int *,TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (TYPE_1__*,char*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,struct video_device*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct video_device*,int ,int ) ;
 int FUNC_20 (struct video_device*,struct cedrus_dev*) ;
 int FUNC_21 (struct video_device*) ;

__attribute__((used)) static int FUNC_22(struct platform_device *VAR_12)
{
 struct cedrus_dev *VAR_13;
 struct video_device *VAR_14;
 int VAR_15;

 VAR_13 = FUNC_4(&VAR_12->dev, sizeof(*VAR_13), VAR_4);
 if (!VAR_13)
  return -VAR_3;

 VAR_13->vfd = VAR_11;
 VAR_13->dev = &VAR_12->dev;
 VAR_13->pdev = VAR_12;

 VAR_15 = FUNC_2(VAR_13);
 if (VAR_15) {
  FUNC_3(&VAR_12->dev, "Failed to probe hardware\n");
  return VAR_15;
 }

 VAR_13->dec_ops[VAR_1] = &VAR_8;
 VAR_13->dec_ops[VAR_0] = &VAR_7;

 FUNC_7(&VAR_13->dev_mutex);

 VAR_15 = FUNC_11(&VAR_12->dev, &VAR_13->v4l2_dev);
 if (VAR_15) {
  FUNC_3(&VAR_12->dev, "Failed to register V4L2 device\n");
  return VAR_15;
 }

 VAR_14 = &VAR_13->vfd;
 VAR_14->lock = &VAR_13->dev_mutex;
 VAR_14->v4l2_dev = &VAR_13->v4l2_dev;

 FUNC_9(VAR_14->name, sizeof(VAR_14->name), "%s", VAR_11.name);
 FUNC_20(VAR_14, VAR_13);

 VAR_13->m2m_dev = FUNC_15(&VAR_10);
 if (FUNC_0(VAR_13->m2m_dev)) {
  FUNC_13(&VAR_13->v4l2_dev,
    "Failed to initialize V4L2 M2M device\n");
  VAR_15 = FUNC_1(VAR_13->m2m_dev);

  goto err_v4l2;
 }

 VAR_13->mdev.dev = &VAR_12->dev;
 FUNC_10(VAR_13->mdev.model, VAR_2, sizeof(VAR_13->mdev.model));

 FUNC_5(&VAR_13->mdev);
 VAR_13->mdev.ops = &VAR_9;
 VAR_13->v4l2_dev.mdev = &VAR_13->mdev;

 VAR_15 = FUNC_19(VAR_14, VAR_6, 0);
 if (VAR_15) {
  FUNC_13(&VAR_13->v4l2_dev, "Failed to register video device\n");
  goto err_m2m;
 }

 FUNC_14(&VAR_13->v4l2_dev,
    "Device registered as /dev/video%d\n", VAR_14->num);

 VAR_15 = FUNC_16(VAR_13->m2m_dev, VAR_14,
       VAR_5);
 if (VAR_15) {
  FUNC_13(&VAR_13->v4l2_dev,
    "Failed to initialize V4L2 M2M media controller\n");
  goto err_video;
 }

 VAR_15 = FUNC_6(&VAR_13->mdev);
 if (VAR_15) {
  FUNC_13(&VAR_13->v4l2_dev, "Failed to register media device\n");
  goto err_m2m_mc;
 }

 FUNC_8(VAR_12, VAR_13);

 return 0;

err_m2m_mc:
 FUNC_18(VAR_13->m2m_dev);
err_video:
 FUNC_21(&VAR_13->vfd);
err_m2m:
 FUNC_17(VAR_13->m2m_dev);
err_v4l2:
 FUNC_12(&VAR_13->v4l2_dev);

 return VAR_15;
}
