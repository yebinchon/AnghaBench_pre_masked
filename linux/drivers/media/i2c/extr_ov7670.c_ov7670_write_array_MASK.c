
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct regval_list {int reg_num; int value; } ;


 int FUNC_0 (struct v4l2_subdev*,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, struct regval_list *VAR_1)
{
 while (VAR_1->reg_num != 0xff || VAR_1->value != 0xff) {
  int VAR_2 = FUNC_0(VAR_0, VAR_1->reg_num, VAR_1->value);
  if (VAR_2 < 0)
   return VAR_2;
  VAR_1++;
 }
 return 0;
}
