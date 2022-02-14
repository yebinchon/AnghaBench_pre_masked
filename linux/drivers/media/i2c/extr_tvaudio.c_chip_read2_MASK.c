
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct i2c_msg {int len; unsigned char* buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct CHIPSTATE {struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,unsigned char) ;
 struct i2c_client* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct CHIPSTATE *VAR_3, int VAR_4)
{
 struct v4l2_subdev *VAR_5 = &VAR_3->sd;
 struct i2c_client *VAR_6 = FUNC_2(VAR_5);
 int VAR_7;
 unsigned char VAR_8[1];
 unsigned char VAR_9[1];
 struct i2c_msg VAR_10[2] = {
  {
   .addr = VAR_6->addr,
   .len = 1,
   .buf = VAR_8
  },
  {
   .addr = VAR_6->addr,
   .flags = VAR_1,
   .len = 1,
   .buf = VAR_9
  }
 };

 VAR_8[0] = VAR_4;

 VAR_7 = FUNC_0(VAR_6->adapter, VAR_10, 2);
 if (VAR_7 != 2) {
  FUNC_3(VAR_5, "I/O error (read2)\n");
  if (VAR_7 < 0)
   return VAR_7;
  return -VAR_0;
 }
 FUNC_1(1, VAR_2, VAR_5, "chip_read2: reg%d=0x%x\n",
  VAR_4, VAR_9[0]);
 return VAR_9[0];
}
