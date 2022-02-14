
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {scalar_t__ pad; scalar_t__ code; int max_height; int min_height; int max_width; int min_width; scalar_t__ index; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_5,
    struct v4l2_subdev_pad_config *VAR_6,
    struct v4l2_subdev_frame_size_enum *VAR_7)
{
 struct v4l2_mbus_framefmt *VAR_8;

 VAR_8 = FUNC_0(VAR_5, VAR_6, VAR_7->pad);

 if (VAR_7->index || VAR_7->code != VAR_8->code)
  return -VAR_0;




 if (VAR_7->pad == 0) {
  VAR_7->min_width = VAR_4;
  VAR_7->max_width = VAR_2;
  VAR_7->min_height = VAR_3;
  VAR_7->max_height = VAR_1;
 } else {
  VAR_7->min_width = VAR_8->width;
  VAR_7->max_width = VAR_8->width;
  VAR_7->min_height = VAR_8->height;
  VAR_7->max_height = VAR_8->height;
 }

 return 0;
}
