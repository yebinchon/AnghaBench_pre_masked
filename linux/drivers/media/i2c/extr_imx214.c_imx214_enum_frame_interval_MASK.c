
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval_enum {scalar_t__ index; TYPE_1__ interval; int height; int width; int code; } ;
struct v4l2_subdev {int dummy; } ;
struct imx214_mode {int height; int width; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct imx214_mode* FUNC_1 (int ,int ,int ,int ,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_6,
    struct v4l2_subdev_pad_config *VAR_7,
    struct v4l2_subdev_frame_interval_enum *VAR_8)
{
 const struct imx214_mode *VAR_9;

 if (VAR_8->index != 0)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_4,
    FUNC_0(VAR_4), VAR_5, VAR_3,
    VAR_8->width, VAR_8->height);

 VAR_8->code = VAR_2;
 VAR_8->width = VAR_9->width;
 VAR_8->height = VAR_9->height;
 VAR_8->interval.numerator = 1;
 VAR_8->interval.denominator = VAR_1;

 return 0;
}
