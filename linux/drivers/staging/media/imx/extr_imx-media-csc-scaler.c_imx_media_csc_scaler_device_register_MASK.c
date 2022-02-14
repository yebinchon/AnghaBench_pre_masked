
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int name; int * v4l2_dev; } ;
struct ipu_csc_scaler_priv {TYPE_1__* md; } ;
struct imx_media_video_dev {struct video_device* vfd; } ;
struct TYPE_2__ {int v4l2_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,int ) ;
 struct ipu_csc_scaler_priv* FUNC_2 (struct imx_media_video_dev*) ;
 int FUNC_3 (struct video_device*) ;
 int FUNC_4 (struct video_device*,int ,int) ;

int FUNC_5(struct imx_media_video_dev *VAR_1)
{
 struct ipu_csc_scaler_priv *VAR_2 = FUNC_2(VAR_1);
 struct video_device *VAR_3 = VAR_1->vfd;
 int VAR_4;

 VAR_3->v4l2_dev = &VAR_2->md->v4l2_dev;

 VAR_4 = FUNC_4(VAR_3, VAR_0, -1);
 if (VAR_4) {
  FUNC_0(VAR_3->v4l2_dev, "Failed to register video device\n");
  return VAR_4;
 }

 FUNC_1(VAR_3->v4l2_dev, "Registered %s as /dev/%s\n", VAR_3->name,
    FUNC_3(VAR_3));

 return 0;
}
