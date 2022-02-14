
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ index; scalar_t__ code; int min_width; int min_height; int max_width; int max_height; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int width; int height; } ;
struct isp_csi2_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct isp_csi2_device*,struct v4l2_subdev_pad_config*,int ,struct v4l2_mbus_framefmt*,int ) ;
 struct isp_csi2_device* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1,
    struct v4l2_subdev_pad_config *VAR_2,
    struct v4l2_subdev_frame_size_enum *VAR_3)
{
 struct isp_csi2_device *VAR_4 = FUNC_1(VAR_1);
 struct v4l2_mbus_framefmt VAR_5;

 if (VAR_3->index != 0)
  return -VAR_0;

 VAR_5.code = VAR_3->code;
 VAR_5.width = 1;
 VAR_5.height = 1;
 FUNC_0(VAR_4, VAR_2, VAR_3->pad, &VAR_5, VAR_3->which);
 VAR_3->min_width = VAR_5.width;
 VAR_3->min_height = VAR_5.height;

 if (VAR_5.code != VAR_3->code)
  return -VAR_0;

 VAR_5.code = VAR_3->code;
 VAR_5.width = -1;
 VAR_5.height = -1;
 FUNC_0(VAR_4, VAR_2, VAR_3->pad, &VAR_5, VAR_3->which);
 VAR_3->max_width = VAR_5.width;
 VAR_3->max_height = VAR_5.height;

 return 0;
}
