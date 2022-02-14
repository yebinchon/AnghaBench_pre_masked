
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_8__ {int colorspace; int field; int height; int width; int code; } ;
struct v4l2_subdev_format {TYPE_4__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct tvp7002 {TYPE_3__* current_timings; } ;
struct TYPE_5__ {int height; int width; } ;
struct TYPE_6__ {TYPE_1__ bt; } ;
struct TYPE_7__ {int color_space; int scanmode; TYPE_2__ timings; } ;


 int VAR_0 ;
 struct tvp7002* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int
FUNC_1(struct v4l2_subdev *VAR_1, struct v4l2_subdev_pad_config *VAR_2,
         struct v4l2_subdev_format *VAR_3)
{
 struct tvp7002 *VAR_4 = FUNC_0(VAR_1);

 VAR_3->format.code = VAR_0;
 VAR_3->format.width = VAR_4->current_timings->timings.bt.width;
 VAR_3->format.height = VAR_4->current_timings->timings.bt.height;
 VAR_3->format.field = VAR_4->current_timings->scanmode;
 VAR_3->format.colorspace = VAR_4->current_timings->color_space;

 return 0;
}
