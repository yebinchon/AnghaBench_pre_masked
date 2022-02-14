
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_4__ {int width; int height; int code; int colorspace; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; TYPE_2__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct adv7842_state {scalar_t__ mode; int norm; TYPE_1__* format; } ;
struct TYPE_3__ {int code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct adv7842_state*,TYPE_2__*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 struct adv7842_state* FUNC_2 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_3 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_7,
         struct v4l2_subdev_pad_config *VAR_8,
         struct v4l2_subdev_format *VAR_9)
{
 struct adv7842_state *VAR_10 = FUNC_2(VAR_7);

 if (VAR_9->pad != VAR_1)
  return -VAR_2;

 if (VAR_10->mode == VAR_0) {

  if (!(FUNC_1(VAR_7, 0x5a) & 0x01))
   return -VAR_2;
  VAR_9->format.code = VAR_3;
  VAR_9->format.width = 720;

  if (VAR_10->norm & VAR_5)
   VAR_9->format.height = 480;
  else
   VAR_9->format.height = 576;
  VAR_9->format.colorspace = VAR_4;
  return 0;
 }

 FUNC_0(VAR_10, &VAR_9->format);

 if (VAR_9->which == VAR_6) {
  struct v4l2_mbus_framefmt *VAR_11;

  VAR_11 = FUNC_3(VAR_7, VAR_8, VAR_9->pad);
  VAR_9->format.code = VAR_11->code;
 } else {
  VAR_9->format.code = VAR_10->format->code;
 }

 return 0;
}
