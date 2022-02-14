
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {void* height; void* width; int top; int left; } ;
struct v4l2_mbus_framefmt {int colorspace; int field; void* height; void* width; int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct v4l2_rect* FUNC_0 (struct v4l2_subdev*,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_7, struct v4l2_subdev_fh *VAR_8)
{
 struct v4l2_mbus_framefmt *VAR_9 =
    FUNC_1(VAR_7, VAR_8->pad, 0);
 struct v4l2_rect *VAR_10 =
    FUNC_0(VAR_7, VAR_8->pad, 0);

 VAR_10->left = VAR_1;
 VAR_10->top = VAR_2;
 VAR_10->width = VAR_4;
 VAR_10->height = VAR_3;

 VAR_9->code = VAR_0;

 VAR_9->width = VAR_4;
 VAR_9->height = VAR_3;
 VAR_9->field = VAR_6;
 VAR_9->colorspace = VAR_5;

 return 0;
}
