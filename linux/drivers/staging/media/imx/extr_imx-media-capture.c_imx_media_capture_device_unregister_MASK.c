
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int entity; } ;
struct imx_media_video_dev {int dummy; } ;
struct TYPE_2__ {struct video_device* vfd; } ;
struct capture_priv {int mutex; TYPE_1__ vdev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct capture_priv* FUNC_3 (struct imx_media_video_dev*) ;
 scalar_t__ FUNC_4 (struct video_device*) ;
 int FUNC_5 (struct video_device*) ;

void FUNC_6(struct imx_media_video_dev *VAR_0)
{
 struct capture_priv *VAR_1 = FUNC_3(VAR_0);
 struct video_device *VAR_2 = VAR_1->vdev.vfd;

 FUNC_1(&VAR_1->mutex);

 if (FUNC_4(VAR_2)) {
  FUNC_5(VAR_2);
  FUNC_0(&VAR_2->entity);
 }

 FUNC_2(&VAR_1->mutex);
}
