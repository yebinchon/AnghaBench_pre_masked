
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_frame_interval {scalar_t__ pad; int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct s5c73m3 {int lock; TYPE_1__* fiv; } ;
struct TYPE_2__ {int interval; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct s5c73m3* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
       struct v4l2_subdev_frame_interval *VAR_3)
{
 struct s5c73m3 *VAR_4 = FUNC_2(VAR_2);

 if (VAR_3->pad != VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_4->lock);
 VAR_3->interval = VAR_4->fiv->interval;
 FUNC_1(&VAR_4->lock);

 return 0;
}
