
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {struct v4l2_mbus_framefmt format; int which; } ;
struct v4l2_subdev {int dummy; } ;
struct csis_state {int lock; } ;


 int VAR_0 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct csis_state*,struct v4l2_subdev_pad_config*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct csis_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, struct v4l2_subdev_pad_config *VAR_2,
      struct v4l2_subdev_format *VAR_3)
{
 struct csis_state *VAR_4 = FUNC_3(VAR_1);
 struct v4l2_mbus_framefmt *VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_2, VAR_3->which);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_4->lock);
 VAR_3->format = *VAR_5;
 FUNC_2(&VAR_4->lock);
 return 0;
}
