
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_fract {int numerator; int denominator; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9v111_dev {int stream_mutex; int fps; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct mt9v111_dev* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
        struct v4l2_subdev_frame_interval *VAR_1)
{
 struct mt9v111_dev *VAR_2 = FUNC_2(VAR_0);
 struct v4l2_fract *VAR_3 = &VAR_1->interval;

 FUNC_0(&VAR_2->stream_mutex);

 VAR_3->numerator = 1;
 VAR_3->denominator = VAR_2->fps;

 FUNC_1(&VAR_2->stream_mutex);

 return 0;
}
