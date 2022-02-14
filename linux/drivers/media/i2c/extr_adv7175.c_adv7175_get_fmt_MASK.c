
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; scalar_t__ height; scalar_t__ width; int colorspace; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_5,
  struct v4l2_subdev_pad_config *VAR_6,
  struct v4l2_subdev_format *VAR_7)
{
 struct v4l2_mbus_framefmt *VAR_8 = &VAR_7->format;
 u8 VAR_9 = FUNC_0(VAR_5, 0x7);

 if (VAR_7->pad)
  return -VAR_0;

 if ((VAR_9 & 0x40) == (1 << 6))
  VAR_8->code = VAR_1;
 else
  VAR_8->code = VAR_2;

 VAR_8->colorspace = VAR_3;
 VAR_8->width = 0;
 VAR_8->height = 0;
 VAR_8->field = VAR_4;

 return 0;
}
