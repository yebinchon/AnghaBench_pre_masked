
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ numerator; scalar_t__ denominator; } ;
struct v4l2_subdev_frame_interval {scalar_t__ pad; TYPE_1__ interval; } ;
struct v4l2_subdev {int dummy; } ;
struct prp_priv {int lock; TYPE_1__ frame_interval; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct prp_priv* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
    struct v4l2_subdev_frame_interval *VAR_3)
{
 struct prp_priv *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3->pad >= VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_4->lock);


 if (VAR_3->interval.numerator == 0 || VAR_3->interval.denominator == 0)
  VAR_3->interval = VAR_4->frame_interval;
 else
  VAR_4->frame_interval = VAR_3->interval;

 FUNC_1(&VAR_4->lock);

 return 0;
}
