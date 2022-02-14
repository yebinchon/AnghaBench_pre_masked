
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv76xx_reg_seq {scalar_t__ reg; int val; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct v4l2_subdev *VAR_1,
      const struct adv76xx_reg_seq *VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_2[VAR_3].reg != VAR_0; VAR_3++)
  FUNC_0(VAR_1, VAR_2[VAR_3].reg, VAR_2[VAR_3].val);
}
