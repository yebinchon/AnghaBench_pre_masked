
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct v4l2_subdev_format {scalar_t__ pad; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct ov772x_priv {TYPE_3__* cfmt; TYPE_2__* win; } ;
struct TYPE_6__ {int colorspace; int code; } ;
struct TYPE_4__ {int height; int width; } ;
struct TYPE_5__ {TYPE_1__ rect; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ov772x_priv* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
     struct v4l2_subdev_pad_config *VAR_3,
     struct v4l2_subdev_format *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5 = &VAR_4->format;
 struct ov772x_priv *VAR_6 = FUNC_0(VAR_2);

 if (VAR_4->pad)
  return -VAR_0;

 VAR_5->width = VAR_6->win->rect.width;
 VAR_5->height = VAR_6->win->rect.height;
 VAR_5->code = VAR_6->cfmt->code;
 VAR_5->colorspace = VAR_6->cfmt->colorspace;
 VAR_5->field = VAR_1;

 return 0;
}
