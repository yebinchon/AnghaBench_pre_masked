
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_frame_interval {int interval; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9m032 {int lock; int frame_interval; } ;


 int FUNC_0 (struct v4l2_subdev_frame_interval*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mt9m032* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0,
          struct v4l2_subdev_frame_interval *VAR_1)
{
 struct mt9m032 *VAR_2 = FUNC_3(VAR_0);

 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->interval = VAR_2->frame_interval;
 FUNC_2(&VAR_2->lock);

 return 0;
}
