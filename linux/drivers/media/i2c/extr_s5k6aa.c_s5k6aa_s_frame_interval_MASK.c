
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k6aa {int apply_cfg; int lock; } ;


 int FUNC_0 (struct s5k6aa*,struct v4l2_subdev_frame_interval*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s5k6aa* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int,int ,struct v4l2_subdev*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1,
       struct v4l2_subdev_frame_interval *VAR_2)
{
 struct s5k6aa *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 FUNC_4(1, VAR_0, VAR_1, "Setting %d/%d frame interval\n",
   VAR_2->interval.numerator, VAR_2->interval.denominator);

 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 VAR_3->apply_cfg = 1;

 FUNC_2(&VAR_3->lock);
 return VAR_4;
}
