
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_frame_interval {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k5baf {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct s5k5baf*,struct v4l2_subdev_frame_interval*) ;
 struct s5k5baf* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0,
       struct v4l2_subdev_frame_interval *VAR_1)
{
 struct s5k5baf *VAR_2 = FUNC_3(VAR_0);

 FUNC_0(&VAR_2->lock);
 FUNC_2(VAR_2, VAR_1);
 FUNC_1(&VAR_2->lock);
 return 0;
}
