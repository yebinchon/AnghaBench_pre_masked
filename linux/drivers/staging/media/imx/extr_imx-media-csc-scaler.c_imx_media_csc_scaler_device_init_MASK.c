
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int * lock; } ;
struct imx_media_video_dev {int list; struct video_device* vfd; } ;
struct ipu_csc_scaler_priv {struct imx_media_video_dev vdev; int m2m_dev; int mutex; int dev; struct imx_media_dev* md; } ;
struct TYPE_2__ {int dev; } ;
struct imx_media_dev {int v4l2_dev; TYPE_1__ md; } ;


 int VAR_0 ;
 struct imx_media_video_dev* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct video_device VAR_2 ;
 int FUNC_4 (struct ipu_csc_scaler_priv*) ;
 struct ipu_csc_scaler_priv* FUNC_5 (int,int ) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int *) ;
 struct video_device* FUNC_9 () ;
 int FUNC_10 (struct video_device*,struct ipu_csc_scaler_priv*) ;

struct imx_media_video_dev *
FUNC_11(struct imx_media_dev *VAR_4)
{
 struct ipu_csc_scaler_priv *VAR_5;
 struct video_device *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return FUNC_0(-VAR_0);

 VAR_5->md = VAR_4;
 VAR_5->dev = VAR_4->md.dev;

 FUNC_6(&VAR_5->mutex);

 VAR_6 = FUNC_9();
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto err_vfd;
 }

 *VAR_6 = VAR_2;
 VAR_6->lock = &VAR_5->mutex;
 VAR_5->vdev.vfd = VAR_6;

 FUNC_1(&VAR_5->vdev.list);

 FUNC_10(VAR_6, VAR_5);

 VAR_5->m2m_dev = FUNC_8(&VAR_3);
 if (FUNC_2(VAR_5->m2m_dev)) {
  VAR_7 = FUNC_3(VAR_5->m2m_dev);
  FUNC_7(&VAR_4->v4l2_dev, "Failed to init mem2mem device: %d\n",
    VAR_7);
  goto err_m2m;
 }

 return &VAR_5->vdev;

err_m2m:
 FUNC_10(VAR_6, ((void*)0));
err_vfd:
 FUNC_4(VAR_5);
 return FUNC_0(VAR_7);
}
