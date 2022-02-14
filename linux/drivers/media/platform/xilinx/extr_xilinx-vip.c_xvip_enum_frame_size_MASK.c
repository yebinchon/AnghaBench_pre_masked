
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ which; scalar_t__ pad; scalar_t__ code; int max_height; int min_height; int max_width; int min_width; scalar_t__ index; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

int FUNC_1(struct v4l2_subdev *VAR_7,
    struct v4l2_subdev_pad_config *VAR_8,
    struct v4l2_subdev_frame_size_enum *VAR_9)
{
 struct v4l2_mbus_framefmt *VAR_10;




 if (VAR_9->which == VAR_1)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_7, VAR_8, VAR_9->pad);

 if (VAR_9->index || VAR_9->code != VAR_10->code)
  return -VAR_0;

 if (VAR_9->pad == VAR_6) {
  VAR_9->min_width = VAR_5;
  VAR_9->max_width = VAR_3;
  VAR_9->min_height = VAR_4;
  VAR_9->max_height = VAR_2;
 } else {



  VAR_9->min_width = VAR_10->width;
  VAR_9->max_width = VAR_10->width;
  VAR_9->min_height = VAR_10->height;
  VAR_9->max_height = VAR_10->height;
 }

 return 0;
}
