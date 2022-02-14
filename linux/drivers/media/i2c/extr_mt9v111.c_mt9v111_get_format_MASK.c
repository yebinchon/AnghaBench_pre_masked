
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int which; int pad; int format; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9v111_dev {int stream_mutex; } ;


 int VAR_0 ;
 int * FUNC_0 (struct mt9v111_dev*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mt9v111_dev* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1,
         struct v4l2_subdev_pad_config *VAR_2,
         struct v4l2_subdev_format *VAR_3)
{
 struct mt9v111_dev *VAR_4 = FUNC_3(VAR_1);

 if (VAR_3->pad)
  return -VAR_0;

 FUNC_1(&VAR_4->stream_mutex);
 VAR_3->format = *FUNC_0(VAR_4, VAR_2, VAR_3->pad,
         VAR_3->which);
 FUNC_2(&VAR_4->stream_mutex);

 return 0;
}
