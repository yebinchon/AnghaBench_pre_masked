
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_2__ {struct video_device* vfd; } ;
struct ipu_csc_scaler_priv {int mutex; TYPE_1__ vdev; } ;
struct imx_media_video_dev {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ipu_csc_scaler_priv* FUNC_2 (struct imx_media_video_dev*) ;
 int FUNC_3 (struct video_device*) ;

void FUNC_4(struct imx_media_video_dev *VAR_0)
{
 struct ipu_csc_scaler_priv *VAR_1 = FUNC_2(VAR_0);
 struct video_device *VAR_2 = VAR_1->vdev.vfd;

 FUNC_0(&VAR_1->mutex);

 FUNC_3(VAR_2);

 FUNC_1(&VAR_1->mutex);
}
