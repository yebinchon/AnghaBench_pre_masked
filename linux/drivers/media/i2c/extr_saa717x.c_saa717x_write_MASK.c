
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct i2c_msg {int len; unsigned char* buf; int addr; scalar_t__ flags; } ;
struct i2c_client {int addr; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,int) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_1);
 struct i2c_adapter *VAR_5 = VAR_4->adapter;
 int VAR_6 = VAR_2 == 0x454 || (VAR_2 >= 0x464 && VAR_2 <= 0x478) || VAR_2 == 0x480 || VAR_2 == 0x488;
 unsigned char VAR_7[6];
 struct i2c_msg VAR_8;

 VAR_8.flags = 0;
 VAR_8.addr = VAR_4->addr;
 VAR_7[0] = (VAR_2 >> 8) & 0xff;
 VAR_7[1] = VAR_2 & 0xff;

 if (VAR_6) {
  VAR_7[4] = (VAR_3 >> 16) & 0xff;
  VAR_7[3] = (VAR_3 >> 8) & 0xff;
  VAR_7[2] = VAR_3 & 0xff;
 } else {
  VAR_7[2] = VAR_3 & 0xff;
 }
 VAR_8.len = VAR_6 ? 5 : 3;
 VAR_8.buf = VAR_7;
 FUNC_1(2, VAR_0, VAR_1, "wrote:  reg 0x%03x=%08x\n", VAR_2, VAR_3);
 return FUNC_0(VAR_5, &VAR_8, 1) == 1;
}
