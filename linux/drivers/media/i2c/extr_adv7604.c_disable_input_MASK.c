
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct adv76xx_state {TYPE_1__* info; } ;
struct TYPE_2__ {int (* set_termination ) (struct v4l2_subdev*,int) ;} ;


 int FUNC_0 (struct v4l2_subdev*,int,int,int) ;
 int FUNC_1 (struct v4l2_subdev*,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct v4l2_subdev*,int) ;
 struct adv76xx_state* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static void FUNC_5(struct v4l2_subdev *VAR_0)
{
 struct adv76xx_state *VAR_1 = FUNC_4(VAR_0);

 FUNC_0(VAR_0, 0x1a, 0x10, 0x10);
 FUNC_2(16);
 FUNC_1(VAR_0, 0x15, 0xbe);
 VAR_1->info->set_termination(VAR_0, 0);
}
