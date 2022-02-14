
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int field; int height; int width; int code; } ;
struct v4l2_subdev_format {scalar_t__ which; size_t pad; TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int height; int width; } ;
struct smiapp_subdev {size_t source_pad; struct v4l2_rect sink_fmt; struct v4l2_rect* crop; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,size_t) ;
 struct smiapp_subdev* FUNC_1 (struct v4l2_subdev*) ;
 TYPE_1__* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,size_t) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
          struct v4l2_subdev_pad_config *VAR_3,
          struct v4l2_subdev_format *VAR_4)
{
 struct smiapp_subdev *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->which == VAR_1) {
  VAR_4->format = *FUNC_2(VAR_2, VAR_3,
         VAR_4->pad);
 } else {
  struct v4l2_rect *VAR_6;

  if (VAR_4->pad == VAR_5->source_pad)
   VAR_6 = &VAR_5->crop[VAR_5->source_pad];
  else
   VAR_6 = &VAR_5->sink_fmt;

  VAR_4->format.code = FUNC_0(VAR_2, VAR_4->pad);
  VAR_4->format.width = VAR_6->width;
  VAR_4->format.height = VAR_6->height;
  VAR_4->format.field = VAR_0;
 }

 return 0;
}
