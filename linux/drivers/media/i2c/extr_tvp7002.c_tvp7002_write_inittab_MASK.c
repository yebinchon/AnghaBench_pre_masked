
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_reg_value {scalar_t__ reg; scalar_t__ type; int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,scalar_t__,int ,int*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2,
     const struct i2c_reg_value *VAR_3)
{
 int VAR_4 = 0;


 while (VAR_0 != VAR_3->reg) {
  if (VAR_1 == VAR_3->type)
   FUNC_0(VAR_2, VAR_3->reg, VAR_3->value, &VAR_4);
  VAR_3++;
 }

 return VAR_4;
}
