
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_reg_value {scalar_t__ reg; int value; } ;


 int FUNC_0 (struct v4l2_subdev*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0,
     const struct i2c_reg_value *VAR_1)
{
 while (VAR_1->reg != 0) {
  FUNC_0(VAR_0, VAR_1->reg, VAR_1->value);
  VAR_1++;
 }
 return 0;
}
