
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_frame_interval {int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct ov2680_dev {int lock; int frame_interval; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct ov2680_dev* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
         struct v4l2_subdev_frame_interval *VAR_1)
{
 struct ov2680_dev *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(&VAR_2->lock);
 VAR_1->interval = VAR_2->frame_interval;
 FUNC_1(&VAR_2->lock);

 return 0;
}
