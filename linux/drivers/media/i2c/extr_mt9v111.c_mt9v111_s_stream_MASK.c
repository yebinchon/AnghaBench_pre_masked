
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct mt9v111_dev {int streaming; int pending; int stream_mutex; } ;


 int FUNC_0 (struct mt9v111_dev*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct mt9v111_dev* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct mt9v111_dev *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 FUNC_2(&VAR_2->stream_mutex);

 if (VAR_2->streaming == VAR_1) {
  FUNC_3(&VAR_2->stream_mutex);
  return 0;
 }

 VAR_3 = FUNC_1(VAR_0, VAR_1);
 if (VAR_3)
  goto error_unlock;

 if (VAR_1 && VAR_2->pending) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3)
   goto error_unlock;






  VAR_2->pending = 0;
 }

 VAR_2->streaming = VAR_1 ? 1 : 0;
 FUNC_3(&VAR_2->stream_mutex);

 return 0;

error_unlock:
 FUNC_3(&VAR_2->stream_mutex);

 return VAR_3;
}
