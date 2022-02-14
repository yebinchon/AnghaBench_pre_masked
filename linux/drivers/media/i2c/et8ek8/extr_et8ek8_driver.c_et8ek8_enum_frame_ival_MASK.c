
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_interval_enum {int index; scalar_t__ code; scalar_t__ width; scalar_t__ height; int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {scalar_t__ code; scalar_t__ width; scalar_t__ height; } ;
struct et8ek8_mode {int timeperframe; } ;
struct et8ek8_reglist {scalar_t__ type; struct et8ek8_mode mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct et8ek8_reglist** FUNC_0 (int *) ;
 int FUNC_1 (struct et8ek8_reglist*,struct v4l2_mbus_framefmt*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3,
      struct v4l2_subdev_pad_config *VAR_4,
      struct v4l2_subdev_frame_interval_enum *VAR_5)
{
 struct et8ek8_reglist **VAR_6 =
   FUNC_0(&VAR_2);
 struct v4l2_mbus_framefmt VAR_7;
 int VAR_8 = VAR_5->index;

 for (; *VAR_6; VAR_6++) {
  struct et8ek8_mode *VAR_9 = &(*VAR_6)->mode;

  if ((*VAR_6)->type != VAR_1)
   continue;

  FUNC_1(*VAR_6, &VAR_7);
  if (VAR_5->code != VAR_7.code)
   continue;

  if (VAR_5->width != VAR_7.width || VAR_5->height != VAR_7.height)
   continue;

  if (VAR_8-- == 0) {
   VAR_5->interval = VAR_9->timeperframe;
   return 0;
  }
 }

 return -VAR_0;
}
