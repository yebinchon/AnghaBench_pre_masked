
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int ,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int VAR_2 ;

int FUNC_3(struct i2c_client *VAR_3)
{

 static u8 VAR_4[3] = { 129, 0x80, 0x00 };
 static u8 VAR_5[3] = { 129, 0x00, 0x00 };
 static u8 VAR_6[3] = { 128 + 1, 0x00, 0x1e };
 u8 VAR_7[2];
 struct i2c_msg VAR_8[2] = {
  {
   .addr = VAR_3->addr,
   .flags = VAR_0,
   .len = 3,
   .buf = VAR_4
  },
  {
   .addr = VAR_3->addr,
   .flags = VAR_0,
   .len = 3,
   .buf = VAR_5
  },
 };
 struct i2c_msg VAR_9[2] = {
  {
   .addr = VAR_3->addr,
   .len = 3,
   .buf = VAR_6
  },
  {
   .addr = VAR_3->addr,
   .flags = VAR_1,
   .len = 2,
   .buf = VAR_7
  },
 };

 FUNC_0(&VAR_3->dev, 3, VAR_2, "msp_reset\n");
 if (FUNC_2(VAR_3->adapter, &VAR_8[0], 1) != 1 ||
     FUNC_2(VAR_3->adapter, &VAR_8[1], 1) != 1 ||
     FUNC_2(VAR_3->adapter, VAR_9, 2) != 2) {
  FUNC_1(&VAR_3->dev, "chip reset failed\n");
  return -1;
 }
 return 0;
}
