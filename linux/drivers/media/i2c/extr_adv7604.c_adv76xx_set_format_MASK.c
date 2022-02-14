
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev_pad_config {int dummy; } ;
struct TYPE_2__ {int code; } ;
struct v4l2_subdev_format {scalar_t__ pad; scalar_t__ which; TYPE_1__ format; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; } ;
struct adv76xx_state {scalar_t__ source_pad; struct adv76xx_format_info const* format; } ;
struct adv76xx_format_info {int code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct adv76xx_state*,TYPE_1__*) ;
 struct adv76xx_format_info* FUNC_1 (struct adv76xx_state*,int ) ;
 int FUNC_2 (struct adv76xx_state*) ;
 struct adv76xx_state* FUNC_3 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_4 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_3,
         struct v4l2_subdev_pad_config *VAR_4,
         struct v4l2_subdev_format *VAR_5)
{
 struct adv76xx_state *VAR_6 = FUNC_3(VAR_3);
 const struct adv76xx_format_info *VAR_7;

 if (VAR_5->pad != VAR_6->source_pad)
  return -VAR_0;

 VAR_7 = FUNC_1(VAR_6, VAR_5->format.code);
 if (!VAR_7)
  VAR_7 = FUNC_1(VAR_6, VAR_1);

 FUNC_0(VAR_6, &VAR_5->format);
 VAR_5->format.code = VAR_7->code;

 if (VAR_5->which == VAR_2) {
  struct v4l2_mbus_framefmt *VAR_8;

  VAR_8 = FUNC_4(VAR_3, VAR_4, VAR_5->pad);
  VAR_8->code = VAR_5->format.code;
 } else {
  VAR_6->format = VAR_7;
  FUNC_2(VAR_6);
 }

 return 0;
}
