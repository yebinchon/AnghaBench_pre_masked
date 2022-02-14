
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct media_device_ops {int dummy; } ;
struct TYPE_6__ {struct device* dev; struct media_device_ops const* ops; int model; } ;
struct TYPE_5__ {int name; int notify; TYPE_3__* mdev; } ;
struct imx_media_dev {TYPE_3__ md; int notifier; int vdev_list; TYPE_1__ v4l2_dev; int mutex; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct imx_media_dev* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,struct imx_media_dev*) ;
 struct imx_media_dev* FUNC_3 (struct device*,int,int ) ;
 struct media_device_ops const VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,char*,int) ;

struct imx_media_dev *FUNC_11(struct device *VAR_4,
      const struct media_device_ops *VAR_5)
{
 struct imx_media_dev *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_4, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 FUNC_2(VAR_4, VAR_6);

 FUNC_7(VAR_6->md.model, "imx-media", sizeof(VAR_6->md.model));
 VAR_6->md.ops = VAR_5 ? VAR_5 : &VAR_2;
 VAR_6->md.dev = VAR_4;

 FUNC_6(&VAR_6->mutex);

 VAR_6->v4l2_dev.mdev = &VAR_6->md;
 VAR_6->v4l2_dev.notify = VAR_3;
 FUNC_7(VAR_6->v4l2_dev.name, "imx-media",
  sizeof(VAR_6->v4l2_dev.name));

 FUNC_5(&VAR_6->md);

 VAR_7 = FUNC_9(VAR_4, &VAR_6->v4l2_dev);
 if (VAR_7 < 0) {
  FUNC_10(&VAR_6->v4l2_dev,
    "Failed to register v4l2_device: %d\n", VAR_7);
  goto cleanup;
 }

 FUNC_1(&VAR_6->vdev_list);

 FUNC_8(&VAR_6->notifier);

 return VAR_6;

cleanup:
 FUNC_4(&VAR_6->md);

 return FUNC_0(VAR_7);
}
