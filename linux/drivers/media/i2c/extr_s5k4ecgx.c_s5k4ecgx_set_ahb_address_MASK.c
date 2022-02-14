
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int,int) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_0, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;





 VAR_4 = FUNC_0(VAR_3, 0x0010, 0x0001);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3, 0x1030, 0x0000);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_0(VAR_3, 0x0014, 0x0001);
}
