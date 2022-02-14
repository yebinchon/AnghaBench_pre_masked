
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_mbus_framefmt {int field; int colorspace; int height; int width; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; } ;
struct v4l2_subdev {int ctrl_handler; int grp_id; } ;
struct soc_camera_device {int field; int colorspace; int user_height; int user_width; int pdev; int ctrl_handler; TYPE_1__* vdev; } ;
struct TYPE_2__ {int tvnorms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct soc_camera_device*) ;
 int FUNC_2 (struct soc_camera_device*) ;
 int FUNC_3 (struct soc_camera_device*) ;
 int FUNC_4 (struct soc_camera_device*) ;
 int FUNC_5 (struct soc_camera_device*) ;
 struct v4l2_subdev* FUNC_6 (struct soc_camera_device*) ;
 int FUNC_7 (struct soc_camera_device*) ;
 int FUNC_8 (int *,int ,int *,int) ;
 int FUNC_9 (struct v4l2_subdev*,struct soc_camera_device*) ;
 int FUNC_10 (struct v4l2_subdev*,int ,int ,int *,...) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_11(struct soc_camera_device *VAR_6)
{
 struct v4l2_subdev *VAR_7 = FUNC_6(VAR_6);
 struct v4l2_subdev_format VAR_8 = {
  .which = VAR_1,
 };
 struct v4l2_mbus_framefmt *VAR_9 = &VAR_8.format;
 int VAR_10;

 VAR_7->grp_id = FUNC_3(VAR_6);
 FUNC_9(VAR_7, VAR_6);

 FUNC_10(VAR_7, VAR_5, VAR_2, &VAR_6->vdev->tvnorms);

 VAR_10 = FUNC_8(&VAR_6->ctrl_handler, VAR_7->ctrl_handler,
        ((void*)0), 1);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_1(VAR_6);
 if (VAR_10 < 0) {
  FUNC_0(VAR_6->pdev, "Couldn't activate the camera: %d\n", VAR_10);
  return VAR_10;
 }


 VAR_10 = FUNC_4(VAR_6);
 if (VAR_10 < 0)
  goto eusrfmt;

 VAR_6->field = VAR_0;

 VAR_10 = FUNC_7(VAR_6);
 if (VAR_10 < 0)
  goto evidstart;


 if (!FUNC_10(VAR_7, VAR_4, VAR_3, ((void*)0), &VAR_8)) {
  VAR_6->user_width = VAR_9->width;
  VAR_6->user_height = VAR_9->height;
  VAR_6->colorspace = VAR_9->colorspace;
  VAR_6->field = VAR_9->field;
 }
 FUNC_5(VAR_6);

 return 0;

evidstart:
 FUNC_2(VAR_6);
eusrfmt:
 FUNC_5(VAR_6);

 return VAR_10;
}
