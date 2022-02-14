
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int denominator; scalar_t__ numerator; } ;
struct v4l2_subdev_frame_interval_enum {scalar_t__ index; scalar_t__ pad; TYPE_1__ interval; int height; int width; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,int,int *,int ,int ,int,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_8,
         struct v4l2_subdev_pad_config *VAR_9,
         struct v4l2_subdev_frame_interval_enum *VAR_10)
{
 if (VAR_10->index > VAR_4 - VAR_5 ||
     VAR_10->pad != VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_10->width, VAR_7,
         VAR_3, 1,
         &VAR_10->height, VAR_6,
         VAR_2, 1, 0);

 VAR_10->interval.numerator = VAR_5 + VAR_10->index;
 VAR_10->interval.denominator = 10000;

 return 0;
}
