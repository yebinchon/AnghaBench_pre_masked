
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_3__ {int field; int colorspace; int height; int width; int code; } ;
struct v4l2_subdev_format {scalar_t__ which; TYPE_1__ format; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct tvp514x_decoder {size_t current_std; TYPE_1__ format; } ;
typedef scalar_t__ __u32 ;
struct TYPE_4__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 TYPE_2__* VAR_5 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_6,
      struct v4l2_subdev_pad_config *VAR_7,
      struct v4l2_subdev_format *VAR_8)
{
 struct tvp514x_decoder *VAR_9 = FUNC_0(VAR_6);
 __u32 VAR_10 = VAR_8->which;

 if (VAR_8->pad)
  return -VAR_0;

 if (VAR_10 == VAR_4) {
  VAR_8->format = VAR_9->format;
  return 0;
 }

 VAR_8->format.code = VAR_1;
 VAR_8->format.width = VAR_5[VAR_9->current_std].width;
 VAR_8->format.height = VAR_5[VAR_9->current_std].height;
 VAR_8->format.colorspace = VAR_2;
 VAR_8->format.field = VAR_3;

 return 0;
}
