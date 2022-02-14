
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_frame_interval_enum {unsigned int index; scalar_t__ width; scalar_t__ height; int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ height; int timeperframe; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
      struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_frame_interval_enum *VAR_4)
{
 unsigned int VAR_5 = VAR_4->index;
 unsigned int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  if (VAR_4->width != VAR_1[VAR_6].width ||
      VAR_4->height != VAR_1[VAR_6].height)
   continue;

  if (VAR_5-- == 0) {
   VAR_4->interval = VAR_1[VAR_6].timeperframe;
   return 0;
  }
 }

 return -VAR_0;
}
