
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct v4l2_subdev* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 int FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_2)
{
 struct v4l2_subdev *VAR_3 = FUNC_0(VAR_2);

 FUNC_2(VAR_3);
 FUNC_1(VAR_3, VAR_1, 0x20);
 FUNC_1(VAR_3, VAR_0, 0x2c | 0x80);
 return 0;
}
