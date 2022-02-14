
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int field; int code; int colorspace; int height; int width; } ;
struct ov7670_info {TYPE_1__* fmt; TYPE_2__* devtype; } ;
struct TYPE_6__ {int height; int width; } ;
struct TYPE_5__ {TYPE_3__* win_sizes; } ;
struct TYPE_4__ {int mbus_code; int colorspace; } ;


 int VAR_0 ;
 struct ov7670_info* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_1(struct v4l2_subdev *VAR_1,
          struct v4l2_mbus_framefmt *VAR_2)
{
 struct ov7670_info *VAR_3 = FUNC_0(VAR_1);

 VAR_2->width = VAR_3->devtype->win_sizes[0].width;
 VAR_2->height = VAR_3->devtype->win_sizes[0].height;
 VAR_2->colorspace = VAR_3->fmt->colorspace;
 VAR_2->code = VAR_3->fmt->mbus_code;
 VAR_2->field = VAR_0;
}
