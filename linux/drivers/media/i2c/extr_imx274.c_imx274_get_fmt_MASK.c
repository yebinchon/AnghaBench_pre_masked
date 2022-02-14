
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_subdev_format {int format; } ;
struct v4l2_subdev {int dummy; } ;
struct stimx274 {int lock; int format; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct stimx274* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0,
     struct v4l2_subdev_pad_config *VAR_1,
     struct v4l2_subdev_format *VAR_2)
{
 struct stimx274 *VAR_3 = FUNC_2(VAR_0);

 FUNC_0(&VAR_3->lock);
 VAR_2->format = VAR_3->format;
 FUNC_1(&VAR_3->lock);
 return 0;
}
