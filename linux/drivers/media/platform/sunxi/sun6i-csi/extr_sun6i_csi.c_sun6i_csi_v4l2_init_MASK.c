
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct v4l2_async_subdev {int dummy; } ;
struct TYPE_12__ {scalar_t__ hw_revision; int model; int dev; } ;
struct TYPE_11__ {int * ops; } ;
struct TYPE_10__ {int * ctrl_handler; TYPE_8__* mdev; } ;
struct sun6i_csi {TYPE_8__ media_dev; TYPE_4__ notifier; int ctrl_handler; TYPE_1__ v4l2_dev; int video; int dev; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct sun6i_csi*,char*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (int ,TYPE_4__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int ,TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_14(struct sun6i_csi *VAR_2)
{
 int VAR_3;

 VAR_2->media_dev.dev = VAR_2->dev;
 FUNC_3(VAR_2->media_dev.model, "Allwinner Video Capture Device",
  sizeof(VAR_2->media_dev.model));
 VAR_2->media_dev.hw_revision = 0;

 FUNC_2(&VAR_2->media_dev);
 FUNC_7(&VAR_2->notifier);

 VAR_3 = FUNC_11(&VAR_2->ctrl_handler, 0);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "V4L2 controls handler init failed (%d)\n",
   VAR_3);
  goto clean_media;
 }

 VAR_2->v4l2_dev.mdev = &VAR_2->media_dev;
 VAR_2->v4l2_dev.ctrl_handler = &VAR_2->ctrl_handler;
 VAR_3 = FUNC_12(VAR_2->dev, &VAR_2->v4l2_dev);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "V4L2 device registration failed (%d)\n",
   VAR_3);
  goto free_ctrl;
 }

 VAR_3 = FUNC_5(&VAR_2->video, VAR_2, "sun6i-csi");
 if (VAR_3)
  goto unreg_v4l2;

 VAR_3 = FUNC_8(VAR_2->dev,
        &VAR_2->notifier,
        sizeof(struct v4l2_async_subdev),
        VAR_1);
 if (VAR_3)
  goto clean_video;

 VAR_2->notifier.ops = &VAR_0;

 VAR_3 = FUNC_9(&VAR_2->v4l2_dev, &VAR_2->notifier);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "notifier registration failed\n");
  goto clean_video;
 }

 return 0;

clean_video:
 FUNC_4(&VAR_2->video);
unreg_v4l2:
 FUNC_13(&VAR_2->v4l2_dev);
free_ctrl:
 FUNC_10(&VAR_2->ctrl_handler);
clean_media:
 FUNC_6(&VAR_2->notifier);
 FUNC_1(&VAR_2->media_dev);

 return VAR_3;
}
