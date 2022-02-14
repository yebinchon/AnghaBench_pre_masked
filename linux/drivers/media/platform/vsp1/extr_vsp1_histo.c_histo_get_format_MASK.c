
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int colorspace; int field; scalar_t__ height; scalar_t__ width; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4,
       struct v4l2_subdev_pad_config *VAR_5,
       struct v4l2_subdev_format *VAR_6)
{
 if (VAR_6->pad == VAR_0) {
  VAR_6->format.code = VAR_1;
  VAR_6->format.width = 0;
  VAR_6->format.height = 0;
  VAR_6->format.field = VAR_3;
  VAR_6->format.colorspace = VAR_2;
  return 0;
 }

 return FUNC_0(VAR_4, VAR_5, VAR_6);
}
