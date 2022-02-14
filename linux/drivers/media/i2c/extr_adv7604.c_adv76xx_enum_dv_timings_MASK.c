
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_enum_dv_timings {scalar_t__ pad; } ;
struct adv76xx_state {scalar_t__ source_pad; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,scalar_t__) ;
 struct adv76xx_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_enum_dv_timings*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2,
   struct v4l2_enum_dv_timings *VAR_3)
{
 struct adv76xx_state *VAR_4 = FUNC_1(VAR_2);

 if (VAR_3->pad >= VAR_4->source_pad)
  return -VAR_0;

 return FUNC_2(VAR_3,
  FUNC_0(VAR_2, VAR_3->pad),
  VAR_1, ((void*)0));
}
