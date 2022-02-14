
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_3__ {scalar_t__ field; scalar_t__ code; scalar_t__ colorspace; scalar_t__ width; scalar_t__ height; } ;
struct v4l2_subdev_format {TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct tvp514x_decoder {size_t current_std; TYPE_1__ format; } ;
struct TYPE_4__ {scalar_t__ width; scalar_t__ height; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct tvp514x_decoder* FUNC_0 (struct v4l2_subdev*) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_5,
      struct v4l2_subdev_pad_config *VAR_6,
      struct v4l2_subdev_format *VAR_7)
{
 struct tvp514x_decoder *VAR_8 = FUNC_0(VAR_5);

 if (VAR_7->format.field != VAR_3 ||
     VAR_7->format.code != VAR_1 ||
     VAR_7->format.colorspace != VAR_2 ||
     VAR_7->format.width != VAR_4[VAR_8->current_std].width ||
     VAR_7->format.height != VAR_4[VAR_8->current_std].height)
  return -VAR_0;

 VAR_8->format = VAR_7->format;

 return 0;
}
