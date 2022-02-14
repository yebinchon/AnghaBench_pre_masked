
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int width; int height; int field; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; int which; TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {int width; int height; scalar_t__ top; scalar_t__ left; } ;
struct smiapp_subdev {scalar_t__ source_pad; size_t sink_pad; struct v4l2_rect sink_fmt; } ;
struct smiapp_sensor {int mutex; int * limits; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,scalar_t__) ;
 void* FUNC_1 (int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_rect**,int *,int ) ;
 int FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_6 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 struct smiapp_sensor* FUNC_7 (struct v4l2_subdev*) ;
 struct smiapp_subdev* FUNC_8 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_9(struct v4l2_subdev *VAR_8,
        struct v4l2_subdev_pad_config *VAR_9,
        struct v4l2_subdev_format *VAR_10)
{
 struct smiapp_sensor *VAR_11 = FUNC_7(VAR_8);
 struct smiapp_subdev *VAR_12 = FUNC_8(VAR_8);
 struct v4l2_rect *VAR_13[VAR_4];

 FUNC_2(&VAR_11->mutex);

 if (VAR_10->pad == VAR_12->source_pad) {
  int VAR_14;

  VAR_14 = FUNC_6(VAR_8, VAR_9, VAR_10);

  FUNC_3(&VAR_11->mutex);

  return VAR_14;
 }


 VAR_10->format.code = FUNC_0(VAR_8, VAR_10->pad);
 VAR_10->format.width &= ~1;
 VAR_10->format.height &= ~1;
 VAR_10->format.field = VAR_5;

 VAR_10->format.width =
  FUNC_1(VAR_10->format.width,
        VAR_11->limits[VAR_2],
        VAR_11->limits[VAR_0]);
 VAR_10->format.height =
  FUNC_1(VAR_10->format.height,
        VAR_11->limits[VAR_3],
        VAR_11->limits[VAR_1]);

 FUNC_4(VAR_8, VAR_9, VAR_13, ((void*)0), VAR_10->which);

 VAR_13[VAR_12->sink_pad]->left = 0;
 VAR_13[VAR_12->sink_pad]->top = 0;
 VAR_13[VAR_12->sink_pad]->width = VAR_10->format.width;
 VAR_13[VAR_12->sink_pad]->height = VAR_10->format.height;
 if (VAR_10->which == VAR_7)
  VAR_12->sink_fmt = *VAR_13[VAR_12->sink_pad];
 FUNC_5(VAR_8, VAR_9, VAR_10->which,
    VAR_6);

 FUNC_3(&VAR_11->mutex);

 return 0;
}
