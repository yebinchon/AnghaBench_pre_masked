
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv76xx_state {int dummy; } ;


 int FUNC_0 (struct adv76xx_state*) ;
 int FUNC_1 (struct v4l2_subdev*,int) ;
 struct adv76xx_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static inline bool FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct adv76xx_state *VAR_1 = FUNC_2(VAR_0);

 if (!FUNC_0(VAR_1))
  return 0;



 return FUNC_1(VAR_0, 0x12) & 0x01;
}
