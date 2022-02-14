
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_rect {scalar_t__ top; scalar_t__ left; int height; int width; } ;
struct v4l2_mbus_framefmt {int field; int height; int width; int code; int colorspace; } ;
struct TYPE_2__ {int code; int colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct v4l2_rect* FUNC_0 (struct v4l2_subdev*,int ,int ) ;
 struct v4l2_mbus_framefmt* FUNC_1 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_6, struct v4l2_subdev_fh *VAR_7)
{
 struct v4l2_mbus_framefmt *VAR_8 = FUNC_1(VAR_6, VAR_7->pad, 0);
 struct v4l2_rect *VAR_9 = FUNC_0(VAR_6, VAR_7->pad, 0);

 VAR_8->colorspace = VAR_5[0].colorspace;
 VAR_8->code = VAR_5[0].code;
 VAR_8->width = VAR_1;
 VAR_8->height = VAR_0;
 VAR_8->field = VAR_4;

 VAR_9->width = VAR_3;
 VAR_9->height = VAR_2;
 VAR_9->left = 0;
 VAR_9->top = 0;

 return 0;
}
