
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int denominator; } ;
struct v4l2_subdev_frame_interval {TYPE_1__ interval; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9m032 {int lock; TYPE_1__ frame_interval; scalar_t__ streaming; } ;


 int VAR_0 ;
 int FUNC_0 (struct mt9m032*,TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mt9m032* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1,
          struct v4l2_subdev_frame_interval *VAR_2)
{
 struct mt9m032 *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;

 FUNC_1(&VAR_3->lock);

 if (VAR_3->streaming) {
  VAR_4 = -VAR_0;
  goto done;
 }


 if (VAR_2->interval.denominator == 0)
  VAR_2->interval.denominator = 1;

 VAR_4 = FUNC_0(VAR_3, &VAR_2->interval);
 if (!VAR_4)
  VAR_3->frame_interval = VAR_2->interval;

done:
 FUNC_2(&VAR_3->lock);
 return VAR_4;
}
