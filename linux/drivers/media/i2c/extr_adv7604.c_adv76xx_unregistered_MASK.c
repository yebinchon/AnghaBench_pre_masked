
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv76xx_state {int cec_adap; } ;


 int FUNC_0 (int ) ;
 struct adv76xx_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct adv76xx_state *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->cec_adap);
}
