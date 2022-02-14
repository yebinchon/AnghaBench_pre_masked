
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {int * queue; int * lock; int name; } ;
struct v4l2_subdev {char* name; } ;
struct imx_media_video_dev {int list; struct video_device* vfd; } ;
struct device {int dummy; } ;
struct capture_priv {int src_sd_pad; struct imx_media_video_dev vdev; int ctrl_hdlr; int q; int mutex; int q_lock; struct device* dev; struct v4l2_subdev* src_sd; } ;


 int VAR_0 ;
 struct imx_media_video_dev* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 struct video_device VAR_2 ;
 struct capture_priv* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,char*,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 struct video_device* FUNC_7 () ;
 int FUNC_8 (struct video_device*,struct capture_priv*) ;

struct imx_media_video_dev *
FUNC_9(struct device *VAR_3, struct v4l2_subdev *VAR_4,
         int VAR_5)
{
 struct capture_priv *VAR_6;
 struct video_device *VAR_7;

 VAR_6 = FUNC_2(VAR_3, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->src_sd = VAR_4;
 VAR_6->src_sd_pad = VAR_5;
 VAR_6->dev = VAR_3;

 FUNC_3(&VAR_6->mutex);
 FUNC_5(&VAR_6->q_lock);

 FUNC_4(VAR_2.name, sizeof(VAR_2.name),
   "%s capture", VAR_4->name);

 VAR_7 = FUNC_7();
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 *VAR_7 = VAR_2;
 VAR_7->lock = &VAR_6->mutex;
 VAR_7->queue = &VAR_6->q;
 VAR_6->vdev.vfd = VAR_7;

 FUNC_1(&VAR_6->vdev.list);

 FUNC_8(VAR_7, VAR_6);

 FUNC_6(&VAR_6->ctrl_hdlr, 0);

 return &VAR_6->vdev;
}
