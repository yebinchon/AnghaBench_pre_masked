
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k5baf {int lock; int fiv; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct s5k5baf* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
       struct v4l2_subdev_frame_interval *VAR_1)
{
 struct s5k5baf *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->lock);
 VAR_1->interval.numerator = VAR_2->fiv;
 VAR_1->interval.denominator = 10000;
 FUNC_1(&VAR_2->lock);

 return 0;
}
