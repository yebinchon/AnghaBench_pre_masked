
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int width; int height; int colorspace; int code; } ;
struct adv7180_state {int curr_norm; scalar_t__ field; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct adv7180_state* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_4,
       struct v4l2_mbus_framefmt *VAR_5)
{
 struct adv7180_state *VAR_6 = FUNC_0(VAR_4);

 VAR_5->code = VAR_0;
 VAR_5->colorspace = VAR_1;
 VAR_5->width = 720;
 VAR_5->height = VAR_6->curr_norm & VAR_3 ? 480 : 576;

 if (VAR_6->field == VAR_2)
  VAR_5->height /= 2;

 return 0;
}
