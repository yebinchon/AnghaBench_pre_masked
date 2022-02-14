
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; int pad; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k6a3 {int lock; } ;


 struct v4l2_mbus_framefmt* FUNC_0 (struct s5k6a3*,struct v4l2_subdev_pad_config*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct v4l2_mbus_framefmt*) ;
 struct s5k6a3* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0,
      struct v4l2_subdev_pad_config *VAR_1,
      struct v4l2_subdev_format *VAR_2)
{
 struct s5k6a3 *VAR_3 = FUNC_4(VAR_0);
 struct v4l2_mbus_framefmt *VAR_4;

 FUNC_3(&VAR_2->format);

 VAR_4 = FUNC_0(VAR_3, VAR_1, VAR_2->pad, VAR_2->which);
 if (VAR_4) {
  FUNC_1(&VAR_3->lock);
  *VAR_4 = VAR_2->format;
  FUNC_2(&VAR_3->lock);
 }
 return 0;
}
