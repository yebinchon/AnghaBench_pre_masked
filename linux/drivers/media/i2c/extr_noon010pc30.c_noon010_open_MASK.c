
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int colorspace; int code; int height; int width; } ;
struct TYPE_4__ {int code; } ;
struct TYPE_3__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4, struct v4l2_subdev_fh *VAR_5)
{
 struct v4l2_mbus_framefmt *VAR_6 = FUNC_0(VAR_4, VAR_5->pad, 0);

 VAR_6->width = VAR_3[0].width;
 VAR_6->height = VAR_3[0].height;
 VAR_6->code = VAR_2[0].code;
 VAR_6->colorspace = VAR_0;
 VAR_6->field = VAR_1;
 return 0;
}
