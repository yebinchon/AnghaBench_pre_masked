
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int addr; } ;
typedef int regaddr ;
typedef int buf ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_client*,struct i2c_msg*,int ) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, u16 VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_1);
 u8 VAR_4[2];
 int VAR_5;
 u8 VAR_6[] = {VAR_2 >> 8, VAR_2};
 struct i2c_msg VAR_7[] = {
     {
      .addr = VAR_3->addr,
      .len = sizeof(VAR_6),
      .buf = VAR_6
     },
     {
      .addr = VAR_3->addr,
      .flags = VAR_0,
      .len = sizeof(VAR_4),
      .buf = VAR_4
     }
    };

 VAR_5 = FUNC_1(VAR_3, VAR_7, FUNC_0(VAR_7));
 if (VAR_5)
  return VAR_5;

 return VAR_4[0] << 8 | VAR_4[1];
}
