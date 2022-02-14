
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;
struct tda1997x_state {int rgb_quantization_range; } ;


 int VAR_0 ;

 int FUNC_0 (struct tda1997x_state*) ;
 int FUNC_1 (struct v4l2_subdev*) ;
 struct v4l2_subdev* FUNC_2 (struct v4l2_ctrl*) ;
 struct tda1997x_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_ctrl *VAR_1)
{
 struct v4l2_subdev *VAR_2 = FUNC_2(VAR_1);
 struct tda1997x_state *VAR_3 = FUNC_3(VAR_2);

 switch (VAR_1->id) {

 case 128:
  VAR_3->rgb_quantization_range = VAR_1->val;
  FUNC_0(VAR_3);
  FUNC_1(VAR_2);
  return 0;
 }

 return -VAR_0;
}
