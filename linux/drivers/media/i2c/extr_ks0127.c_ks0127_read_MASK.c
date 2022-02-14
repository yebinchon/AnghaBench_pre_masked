
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;
typedef char u8 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_msg {int len; char* buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int reg ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*) ;
 struct i2c_client* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static u8 FUNC_4(struct v4l2_subdev *VAR_3, u8 VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_3(VAR_3);
 char VAR_6 = 0;
 struct i2c_msg VAR_7[] = {
  {
   .addr = VAR_5->addr,
   .len = sizeof(VAR_4),
   .buf = &VAR_4
  },
  {
   .addr = VAR_5->addr,
   .flags = VAR_1 | VAR_0,
   .len = sizeof(VAR_6),
   .buf = &VAR_6
  }
 };
 int VAR_8;

 VAR_8 = FUNC_1(VAR_5->adapter, VAR_7, FUNC_0(VAR_7));
 if (VAR_8 != FUNC_0(VAR_7))
  FUNC_2(1, VAR_2, VAR_3, "read error\n");

 return VAR_6;
}
