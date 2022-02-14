
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct sr030pc30_info {TYPE_2__* curr_fmt; TYPE_1__* curr_win; } ;
struct TYPE_4__ {int colorspace; int code; } ;
struct TYPE_3__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sr030pc30_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
  struct v4l2_subdev_pad_config *VAR_3,
  struct v4l2_subdev_format *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5;
 struct sr030pc30_info *VAR_6 = FUNC_0(VAR_2);

 if (!VAR_4 || VAR_4->pad)
  return -VAR_0;

 VAR_5 = &VAR_4->format;

 if (!VAR_6->curr_win || !VAR_6->curr_fmt)
  return -VAR_0;

 VAR_5->width = VAR_6->curr_win->width;
 VAR_5->height = VAR_6->curr_win->height;
 VAR_5->code = VAR_6->curr_fmt->code;
 VAR_5->colorspace = VAR_6->curr_fmt->colorspace;
 VAR_5->field = VAR_1;

 return 0;
}
