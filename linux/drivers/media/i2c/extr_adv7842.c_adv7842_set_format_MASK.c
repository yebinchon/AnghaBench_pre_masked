
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
struct adv7842_state {scalar_t__ mode; struct adv7842_format_info const* format; } ;
struct adv7842_format_info {int code; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct adv7842_state*,TYPE_1__*) ;
 struct adv7842_format_info* FUNC_1 (struct adv7842_state*,int ) ;
 int FUNC_2 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,struct v4l2_subdev_format*) ;
 int FUNC_3 (struct adv7842_state*) ;
 struct adv7842_state* FUNC_4 (struct v4l2_subdev*) ;
 struct v4l2_mbus_framefmt* FUNC_5 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_5,
         struct v4l2_subdev_pad_config *VAR_6,
         struct v4l2_subdev_format *VAR_7)
{
 struct adv7842_state *VAR_8 = FUNC_4(VAR_5);
 const struct adv7842_format_info *VAR_9;

 if (VAR_7->pad != VAR_1)
  return -VAR_2;

 if (VAR_8->mode == VAR_0)
  return FUNC_2(VAR_5, VAR_6, VAR_7);

 VAR_9 = FUNC_1(VAR_8, VAR_7->format.code);
 if (VAR_9 == ((void*)0))
  VAR_9 = FUNC_1(VAR_8, VAR_3);

 FUNC_0(VAR_8, &VAR_7->format);
 VAR_7->format.code = VAR_9->code;

 if (VAR_7->which == VAR_4) {
  struct v4l2_mbus_framefmt *VAR_10;

  VAR_10 = FUNC_5(VAR_5, VAR_6, VAR_7->pad);
  VAR_10->code = VAR_7->format.code;
 } else {
  VAR_8->format = VAR_9;
  FUNC_3(VAR_8);
 }

 return 0;
}
