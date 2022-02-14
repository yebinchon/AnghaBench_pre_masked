
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_6__ {scalar_t__ width; scalar_t__ height; } ;
struct TYPE_5__ {int numerator; TYPE_2__ denominator; } ;
struct v4l2_subdev_frame_interval_enum {unsigned int index; scalar_t__ width; scalar_t__ height; TYPE_1__ interval; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;


 unsigned int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_3,
    struct v4l2_subdev_pad_config *VAR_4,
    struct v4l2_subdev_frame_interval_enum *VAR_5)
{
 unsigned int VAR_6;

 if (VAR_5->pad || VAR_5->index >= FUNC_0(VAR_1))
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++)
  if (VAR_5->width == VAR_2[VAR_6].width &&
      VAR_5->height == VAR_2[VAR_6].height)
   break;

 if (VAR_6 == FUNC_0(VAR_2))
  return -VAR_0;

 VAR_5->interval.numerator = 1;
 VAR_5->interval.denominator = VAR_1[VAR_5->index];

 return 0;
}
