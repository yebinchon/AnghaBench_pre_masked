
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int dummy; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; int reserved; } ;
struct v4l2_subdev {int dummy; } ;
struct s5k6aa {int lock; TYPE_1__* preset; } ;
struct TYPE_2__ {struct v4l2_mbus_framefmt mbus_fmt; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct s5k6aa* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_1, struct v4l2_subdev_pad_config *VAR_2,
     struct v4l2_subdev_format *VAR_3)
{
 struct s5k6aa *VAR_4 = FUNC_3(VAR_1);
 struct v4l2_mbus_framefmt *VAR_5;

 FUNC_0(VAR_3->reserved, 0, sizeof(VAR_3->reserved));

 if (VAR_3->which == VAR_0) {
  VAR_5 = FUNC_4(VAR_1, VAR_2, 0);
  VAR_3->format = *VAR_5;
  return 0;
 }

 FUNC_1(&VAR_4->lock);
 VAR_3->format = VAR_4->preset->mbus_fmt;
 FUNC_2(&VAR_4->lock);

 return 0;
}
