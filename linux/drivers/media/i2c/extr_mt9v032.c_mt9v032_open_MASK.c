
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {void* height; void* width; int top; int left; } ;
struct v4l2_mbus_framefmt {int colorspace; int field; void* height; void* width; int code; } ;
struct mt9v032 {TYPE_1__* model; } ;
struct TYPE_2__ {scalar_t__ color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 struct mt9v032* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_rect* FUNC_2 (struct v4l2_subdev*,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_3 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_8, struct v4l2_subdev_fh *VAR_9)
{
 struct mt9v032 *VAR_10 = FUNC_1(VAR_8);
 struct v4l2_mbus_framefmt *VAR_11;
 struct v4l2_rect *VAR_12;

 VAR_12 = FUNC_2(VAR_8, VAR_9->pad, 0);
 VAR_12->left = VAR_2;
 VAR_12->top = VAR_3;
 VAR_12->width = VAR_5;
 VAR_12->height = VAR_4;

 VAR_11 = FUNC_3(VAR_8, VAR_9->pad, 0);

 if (VAR_10->model->color)
  VAR_11->code = VAR_0;
 else
  VAR_11->code = VAR_1;

 VAR_11->width = VAR_5;
 VAR_11->height = VAR_4;
 VAR_11->field = VAR_7;
 VAR_11->colorspace = VAR_6;

 return FUNC_0(VAR_8, 1);
}
