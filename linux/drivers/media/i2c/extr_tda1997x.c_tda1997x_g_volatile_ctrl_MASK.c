
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {scalar_t__ id; int val; } ;
struct TYPE_2__ {int content_type; } ;
struct tda1997x_state {TYPE_1__ avi_infoframe; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 struct tda1997x_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl *VAR_2)
{
 struct v4l2_subdev *VAR_3 = FUNC_0(VAR_2);
 struct tda1997x_state *VAR_4 = FUNC_1(VAR_3);

 if (VAR_2->id == VAR_1) {
  VAR_2->val = VAR_4->avi_infoframe.content_type;
  return 0;
 }
 return -VAR_0;
}
