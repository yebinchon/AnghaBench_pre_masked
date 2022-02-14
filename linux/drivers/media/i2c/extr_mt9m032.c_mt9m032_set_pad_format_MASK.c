
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int which; int format; } ;
struct v4l2_subdev {int dummy; } ;
struct mt9m032 {int lock; scalar_t__ streaming; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct mt9m032*,struct v4l2_subdev_pad_config*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct mt9m032* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2,
      struct v4l2_subdev_pad_config *VAR_3,
      struct v4l2_subdev_format *VAR_4)
{
 struct mt9m032 *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;

 FUNC_1(&VAR_5->lock);

 if (VAR_5->streaming && VAR_4->which == VAR_1) {
  VAR_6 = -VAR_0;
  goto done;
 }


 VAR_4->format = *FUNC_0(VAR_5, VAR_3, VAR_4->which);
 VAR_6 = 0;

done:
 FUNC_2(&VAR_5->lock);
 return VAR_6;
}
