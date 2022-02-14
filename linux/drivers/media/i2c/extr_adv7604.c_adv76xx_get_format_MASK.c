
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_4__ {int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; TYPE_2__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct adv76xx_state {scalar_t__ source_pad; TYPE_1__* format; } ;
struct TYPE_3__ {int code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct adv76xx_state*,TYPE_2__*) ;
 struct adv76xx_state* FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
         struct v4l2_subdev_pad_config *VAR_3,
         struct v4l2_subdev_format *VAR_4)
{
 struct adv76xx_state *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->pad != VAR_5->source_pad)
  return -VAR_0;

 FUNC_0(VAR_5, &VAR_4->format);

 if (VAR_4->which == VAR_1) {
  struct v4l2_mbus_framefmt *VAR_6;

  VAR_6 = FUNC_2(VAR_2, VAR_3, VAR_4->pad);
  VAR_4->format.code = VAR_6->code;
 } else {
  VAR_4->format.code = VAR_5->format->code;
 }

 return 0;
}
