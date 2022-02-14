
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct noon010_info {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int,int) ;
 int FUNC_1 (struct noon010_info*,struct i2c_client*,int) ;
 struct noon010_info* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_3(VAR_0);
 struct noon010_info *VAR_4 = FUNC_2(VAR_0);
 int VAR_5 = FUNC_1(VAR_4, VAR_3, VAR_1);

 if (VAR_5)
  return VAR_5;
 return FUNC_0(VAR_3, VAR_1 & 0xFF, VAR_2);
}
