
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct sr030pc30_info {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct sr030pc30_info*,struct i2c_client*,int) ;
 struct sr030pc30_info* FUNC_2 (struct v4l2_subdev*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_0, u32 VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_3(VAR_0);
 struct sr030pc30_info *VAR_3 = FUNC_2(VAR_0);

 int VAR_4 = FUNC_1(VAR_3, VAR_2, VAR_1);
 if (!VAR_4)
  VAR_4 = FUNC_0(VAR_2, VAR_1 & 0xFF);
 return VAR_4;
}
