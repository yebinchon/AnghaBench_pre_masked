
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_size_enum {int index; scalar_t__ code; int min_width; int min_height; int max_width; int max_height; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; int width; int height; } ;
struct et8ek8_reglist {scalar_t__ type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct et8ek8_reglist** FUNC_0 (int *) ;
 int FUNC_1 (struct et8ek8_reglist*,struct v4l2_mbus_framefmt*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_4,
      struct v4l2_subdev_pad_config *VAR_5,
      struct v4l2_subdev_frame_size_enum *VAR_6)
{
 struct et8ek8_reglist **VAR_7 =
   FUNC_0(&VAR_3);
 struct v4l2_mbus_framefmt VAR_8;
 int VAR_9 = VAR_2;
 int VAR_10 = VAR_2;
 int VAR_11 = VAR_6->index;

 for (; *VAR_7; VAR_7++) {
  if ((*VAR_7)->type != VAR_1)
   continue;

  FUNC_1(*VAR_7, &VAR_8);
  if (VAR_6->code != VAR_8.code)
   continue;


  if (VAR_8.width == VAR_9 && VAR_8.height == VAR_10)
   continue;

  VAR_9 = VAR_8.width;
  VAR_10 = VAR_8.height;

  if (VAR_11-- == 0) {
   VAR_6->min_width = VAR_8.width;
   VAR_6->min_height = VAR_8.height;
   VAR_6->max_width = VAR_8.width;
   VAR_6->max_height = VAR_8.height;
   return 0;
  }
 }

 return -VAR_0;
}
