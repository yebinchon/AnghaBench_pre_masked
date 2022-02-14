
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_mbus_framefmt {int code; int width; } ;
struct ov9640_reg_alt {int member_0; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ,struct ov9640_reg_alt*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int ,struct ov9640_reg_alt*) ;
 struct i2c_client* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_0,
   struct v4l2_mbus_framefmt *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_4(VAR_0);
 struct ov9640_reg_alt VAR_3 = {0};
 int VAR_4;

 FUNC_0(VAR_1->code, &VAR_3);

 FUNC_2(VAR_2);

 VAR_4 = FUNC_1(VAR_2);
 if (VAR_4)
  return VAR_4;

 return FUNC_3(VAR_2, VAR_1->width, VAR_1->code, &VAR_3);
}
