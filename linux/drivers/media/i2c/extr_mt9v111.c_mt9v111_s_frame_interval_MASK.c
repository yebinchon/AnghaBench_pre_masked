
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fract {int numerator; unsigned int denominator; } ;
struct v4l2_subdev_frame_interval {struct v4l2_fract interval; } ;
struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ width; scalar_t__ height; } ;
struct mt9v111_dev {unsigned int fps; scalar_t__ sysclk; int pending; int stream_mutex; TYPE_1__ fmt; scalar_t__ streaming; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct mt9v111_dev*,struct v4l2_fract*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mt9v111_dev* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_7,
        struct v4l2_subdev_frame_interval *VAR_8)
{
 struct mt9v111_dev *VAR_9 = FUNC_4(VAR_7);
 struct v4l2_fract *VAR_10 = &VAR_8->interval;
 unsigned int VAR_11 = VAR_10->numerator ?
      VAR_10->denominator / VAR_10->numerator :
      VAR_10->denominator;
 unsigned int VAR_12;

 if (!VAR_10->numerator)
  VAR_10->numerator = 1;

 FUNC_2(&VAR_9->stream_mutex);

 if (VAR_9->streaming) {
  FUNC_3(&VAR_9->stream_mutex);
  return -VAR_2;
 }

 if (VAR_9->fps == VAR_11) {
  FUNC_3(&VAR_9->stream_mutex);
  return 0;
 }


 if (VAR_9->fmt.width < VAR_6 &&
     VAR_9->fmt.height < VAR_5)
  VAR_12 = 90;
 else if (VAR_9->fmt.width < VAR_1 &&
   VAR_9->fmt.height < VAR_0)
  VAR_12 = 60;
 else
  VAR_12 = VAR_9->sysclk <
    FUNC_0(VAR_4, 2) ? 15 :
           30;

 if (VAR_11 > VAR_12) {
  FUNC_3(&VAR_9->stream_mutex);
  return -VAR_3;
 }

 FUNC_1(VAR_9, VAR_10);

 VAR_9->fps = VAR_11;
 VAR_9->pending = 1;

 FUNC_3(&VAR_9->stream_mutex);

 return 0;
}
