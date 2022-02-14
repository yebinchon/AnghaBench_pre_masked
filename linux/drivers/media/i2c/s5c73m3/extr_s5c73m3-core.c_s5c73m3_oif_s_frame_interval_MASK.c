
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int denominator; int numerator; } ;
struct v4l2_subdev_frame_interval {scalar_t__ pad; TYPE_1__ interval; } ;
struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {int apply_fiv; int lock; scalar_t__ streaming; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct s5c73m3*,struct v4l2_subdev_frame_interval*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s5c73m3* FUNC_3 (struct v4l2_subdev*) ;
 int VAR_2 ;
 int FUNC_4 (struct s5c73m3*) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_3,
       struct v4l2_subdev_frame_interval *VAR_4)
{
 struct s5c73m3 *VAR_5 = FUNC_3(VAR_3);
 int VAR_6;

 if (VAR_4->pad != VAR_1)
  return -VAR_0;

 FUNC_5(1, VAR_2, VAR_3, "Setting %d/%d frame interval\n",
   VAR_4->interval.numerator, VAR_4->interval.denominator);

 FUNC_1(&VAR_5->lock);

 VAR_6 = FUNC_0(VAR_5, VAR_4);
 if (!VAR_6) {
  if (VAR_5->streaming)
   VAR_6 = FUNC_4(VAR_5);
  else
   VAR_5->apply_fiv = 1;
 }
 FUNC_2(&VAR_5->lock);
 return VAR_6;
}
