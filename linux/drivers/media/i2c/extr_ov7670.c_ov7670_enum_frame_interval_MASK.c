
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_4__ {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval_enum {size_t index; scalar_t__ width; scalar_t__ height; TYPE_2__ interval; scalar_t__ pad; } ;
struct v4l2_subdev {int dummy; } ;
struct ov7670_win_size {scalar_t__ width; scalar_t__ height; } ;
struct ov7670_info {scalar_t__ min_width; scalar_t__ min_height; TYPE_1__* devtype; } ;
struct TYPE_3__ {unsigned int n_win_sizes; struct ov7670_win_size* win_sizes; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 struct ov7670_info* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2,
          struct v4l2_subdev_pad_config *VAR_3,
          struct v4l2_subdev_frame_interval_enum *VAR_4)
{
 struct ov7670_info *VAR_5 = FUNC_1(VAR_2);
 unsigned int VAR_6 = VAR_5->devtype->n_win_sizes;
 int VAR_7;

 if (VAR_4->pad)
  return -VAR_0;
 if (VAR_4->index >= FUNC_0(VAR_1))
  return -VAR_0;







 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  struct ov7670_win_size *VAR_8 = &VAR_5->devtype->win_sizes[VAR_7];

  if (VAR_5->min_width && VAR_8->width < VAR_5->min_width)
   continue;
  if (VAR_5->min_height && VAR_8->height < VAR_5->min_height)
   continue;
  if (VAR_4->width == VAR_8->width && VAR_4->height == VAR_8->height)
   break;
 }
 if (VAR_7 == VAR_6)
  return -VAR_0;
 VAR_4->interval.numerator = 1;
 VAR_4->interval.denominator = VAR_1[VAR_4->index];
 return 0;
}
