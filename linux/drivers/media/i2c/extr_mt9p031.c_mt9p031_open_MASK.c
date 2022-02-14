
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {void* height; void* width; int top; int left; } ;
struct v4l2_mbus_framefmt {int colorspace; int field; void* height; void* width; int code; } ;
struct mt9p031 {scalar_t__ model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct v4l2_subdev*,int) ;
 struct mt9p031* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_rect* FUNC_2 (struct v4l2_subdev*,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_3 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_9, struct v4l2_subdev_fh *VAR_10)
{
 struct mt9p031 *VAR_11 = FUNC_1(VAR_9);
 struct v4l2_mbus_framefmt *VAR_12;
 struct v4l2_rect *VAR_13;

 VAR_13 = FUNC_2(VAR_9, VAR_10->pad, 0);
 VAR_13->left = VAR_2;
 VAR_13->top = VAR_4;
 VAR_13->width = VAR_6;
 VAR_13->height = VAR_5;

 VAR_12 = FUNC_3(VAR_9, VAR_10->pad, 0);

 if (VAR_11->model == VAR_3)
  VAR_12->code = VAR_1;
 else
  VAR_12->code = VAR_0;

 VAR_12->width = VAR_6;
 VAR_12->height = VAR_5;
 VAR_12->field = VAR_8;
 VAR_12->colorspace = VAR_7;

 return FUNC_0(VAR_9, 1);
}
