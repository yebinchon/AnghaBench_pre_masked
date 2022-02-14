
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_mbus_framefmt {scalar_t__ code; int width; int height; int colorspace; int field; } ;
struct v4l2_subdev_pad_config {struct v4l2_mbus_framefmt try_fmt; } ;
struct v4l2_subdev_format {scalar_t__ which; scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct saa6752hs_state {int video_format; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 struct saa6752hs_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_9,
  struct v4l2_subdev_pad_config *VAR_10,
  struct v4l2_subdev_format *VAR_11)
{
 struct v4l2_mbus_framefmt *VAR_12 = &VAR_11->format;
 struct saa6752hs_state *VAR_13 = FUNC_1(VAR_9);
 int VAR_14, VAR_15, VAR_16;

 if (VAR_11->pad)
  return -VAR_0;

 VAR_12->code = VAR_1;

 VAR_14 = FUNC_0(VAR_12->width - 352);
 VAR_15 = FUNC_0(VAR_12->width - 480);
 VAR_16 = FUNC_0(VAR_12->width - 720);
 if (VAR_16 < VAR_15) {
  VAR_12->width = 720;
  VAR_12->height = 576;
 } else if (VAR_15 < VAR_14) {
  VAR_12->width = 480;
  VAR_12->height = 576;
 } else {
  VAR_12->width = 352;
  if (FUNC_0(VAR_12->height - 576) < FUNC_0(VAR_12->height - 288))
   VAR_12->height = 576;
  else
   VAR_12->height = 288;
 }
 VAR_12->field = VAR_7;
 VAR_12->colorspace = VAR_6;

 if (VAR_11->which == VAR_8) {
  VAR_10->try_fmt = *VAR_12;
  return 0;
 }
 if (VAR_12->code != VAR_1)
  return -VAR_0;

 if (VAR_12->width == 720)
  VAR_13->video_format = VAR_4;
 else if (VAR_12->width == 480)
  VAR_13->video_format = VAR_3;
 else if (VAR_12->height == 576)
  VAR_13->video_format = VAR_2;
 else
  VAR_13->video_format = VAR_5;
 return 0;
}
