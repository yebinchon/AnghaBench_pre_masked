
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_2, int VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_2);
 int VAR_5;

 if (VAR_3)

  VAR_5 = FUNC_1(VAR_4, VAR_1, 2);
 else

  VAR_5 = FUNC_0(VAR_4, VAR_1, 2);

 if (VAR_5 < 0)
  return -VAR_0;

 return 0;
}
