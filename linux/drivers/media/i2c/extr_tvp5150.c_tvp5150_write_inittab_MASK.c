
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct tvp5150 {int regmap; } ;
struct i2c_reg_value {int reg; int value; } ;


 int FUNC_0 (int ,int,int ) ;
 struct tvp5150* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0,
    const struct i2c_reg_value *VAR_1)
{
 struct tvp5150 *VAR_2 = FUNC_1(VAR_0);

 while (VAR_1->reg != 0xff) {
  FUNC_0(VAR_2->regmap, VAR_1->reg, VAR_1->value);
  VAR_1++;
 }
 return 0;
}
