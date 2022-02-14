
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_fh {int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int code; int height; int width; } ;
struct TYPE_2__ {int height; int width; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3, struct v4l2_subdev_fh *VAR_4)
{
 struct v4l2_mbus_framefmt *VAR_5 =
  FUNC_0(VAR_3, VAR_4->pad, 0);


 VAR_5->width = VAR_2[0].width;
 VAR_5->height = VAR_2[0].height;
 VAR_5->code = VAR_0;
 VAR_5->field = VAR_1;

 return 0;
}
