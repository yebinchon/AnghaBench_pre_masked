
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct ov6650 {int clk; } ;
struct i2c_client {int dummy; } ;


 struct ov6650* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, int VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_3(VAR_0);
 struct ov6650 *VAR_3 = FUNC_0(VAR_2);
 int VAR_4 = 0;

 if (VAR_1)
  VAR_4 = FUNC_2(VAR_3->clk);
 else
  FUNC_1(VAR_3->clk);

 return VAR_4;
}
