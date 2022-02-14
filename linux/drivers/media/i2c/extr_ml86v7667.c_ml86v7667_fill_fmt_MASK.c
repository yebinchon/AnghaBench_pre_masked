
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; int field; int colorspace; int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ml86v7667_priv {int std; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ml86v7667_priv* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_5,
  struct v4l2_subdev_pad_config *VAR_6,
  struct v4l2_subdev_format *VAR_7)
{
 struct ml86v7667_priv *VAR_8 = FUNC_0(VAR_5);
 struct v4l2_mbus_framefmt *VAR_9 = &VAR_7->format;

 if (VAR_7->pad)
  return -VAR_0;

 VAR_9->code = VAR_1;
 VAR_9->colorspace = VAR_2;

 VAR_9->field = VAR_3;
 VAR_9->width = 720;
 VAR_9->height = VAR_8->std & VAR_4 ? 480 : 576;

 return 0;
}
