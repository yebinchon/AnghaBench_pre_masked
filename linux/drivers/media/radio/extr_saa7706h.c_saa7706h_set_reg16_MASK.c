
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int*,int) ;
 struct i2c_client* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, u16 VAR_1, u16 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_1(VAR_0);
 u8 VAR_4[4];
 int VAR_5 = 0;

 VAR_4[VAR_5++] = VAR_1 >> 8;
 VAR_4[VAR_5++] = VAR_1;
 VAR_4[VAR_5++] = VAR_2 >> 8;
 VAR_4[VAR_5++] = VAR_2;

 return FUNC_0(VAR_3, VAR_4, VAR_5);
}
