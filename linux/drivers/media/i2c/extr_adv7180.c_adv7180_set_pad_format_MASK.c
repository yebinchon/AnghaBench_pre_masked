
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int field; } ;
struct v4l2_subdev_format {scalar_t__ which; struct v4l2_mbus_framefmt format; } ;
struct v4l2_subdev {int dummy; } ;
struct adv7180_state {int field; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ VAR_2 ;
 int FUNC_0 (struct v4l2_subdev*,struct v4l2_mbus_framefmt*) ;
 int FUNC_1 (struct adv7180_state*) ;
 int FUNC_2 (struct adv7180_state*,int) ;
 struct adv7180_state* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3,
      struct v4l2_subdev_pad_config *VAR_4,
      struct v4l2_subdev_format *VAR_5)
{
 struct adv7180_state *VAR_6 = FUNC_3(VAR_3);
 struct v4l2_mbus_framefmt *VAR_7;
 int VAR_8;

 switch (VAR_5->format.field) {
 case 128:
  if (VAR_6->chip_info->flags & VAR_0)
   break;

 default:
  VAR_5->format.field = VAR_1;
  break;
 }

 VAR_8 = FUNC_0(VAR_3, &VAR_5->format);

 if (VAR_5->which == VAR_2) {
  if (VAR_6->field != VAR_5->format.field) {
   VAR_6->field = VAR_5->format.field;
   FUNC_2(VAR_6, 0);
   FUNC_1(VAR_6);
   FUNC_2(VAR_6, 1);
  }
 } else {
  VAR_7 = FUNC_4(VAR_3, VAR_4, 0);
  *VAR_7 = VAR_5->format;
 }

 return VAR_8;
}
