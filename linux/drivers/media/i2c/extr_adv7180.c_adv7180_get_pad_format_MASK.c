
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_3__ {int field; } ;
struct v4l2_subdev_format {scalar_t__ which; TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct adv7180_state {int field; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,TYPE_1__*) ;
 struct adv7180_state* FUNC_1 (struct v4l2_subdev*) ;
 TYPE_1__* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1,
      struct v4l2_subdev_pad_config *VAR_2,
      struct v4l2_subdev_format *VAR_3)
{
 struct adv7180_state *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3->which == VAR_0) {
  VAR_3->format = *FUNC_2(VAR_1, VAR_2, 0);
 } else {
  FUNC_0(VAR_1, &VAR_3->format);
  VAR_3->format.field = VAR_4->field;
 }

 return 0;
}
