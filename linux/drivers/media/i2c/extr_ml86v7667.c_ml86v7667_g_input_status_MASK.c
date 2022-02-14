
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3, u32 *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_4 = VAR_6 & VAR_0 ? 0 : VAR_2;

 return 0;
}
