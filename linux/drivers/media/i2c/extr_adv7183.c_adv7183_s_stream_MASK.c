
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct adv7183 {int oe_pin; } ;


 int FUNC_0 (int ,int) ;
 struct adv7183* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct adv7183 *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1)
  FUNC_0(VAR_2->oe_pin, 0);
 else
  FUNC_0(VAR_2->oe_pin, 1);
 FUNC_2(1);
 return 0;
}
