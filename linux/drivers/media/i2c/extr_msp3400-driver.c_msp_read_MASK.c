
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,char*,int,int,int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;
 u8 VAR_7[3];
 u8 VAR_8[2];
 struct i2c_msg VAR_9[2] = {
  {
   .addr = VAR_2->addr,
   .len = 3,
   .buf = VAR_7
  },
  {
   .addr = VAR_2->addr,
   .flags = VAR_0,
   .len = 2,
   .buf = VAR_8
  }
 };

 VAR_7[0] = VAR_3 + 1;
 VAR_7[1] = VAR_4 >> 8;
 VAR_7[2] = VAR_4 & 0xff;

 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  if (FUNC_2(VAR_2->adapter, VAR_9, 2) == 2)
   break;
  FUNC_1(&VAR_2->dev, "I/O error #%d (read 0x%02x/0x%02x)\n", VAR_5,
         VAR_3, VAR_4);
  FUNC_5(FUNC_3(10));
 }
 if (VAR_5 == 3) {
  FUNC_1(&VAR_2->dev, "resetting chip, sound will go off.\n");
  FUNC_4(VAR_2);
  return -1;
 }
 VAR_6 = VAR_8[0] << 8 | VAR_8[1];
 FUNC_0(&VAR_2->dev, 3, VAR_1, "msp_read(0x%x, 0x%x): 0x%x\n",
   VAR_3, VAR_4, VAR_6);
 return VAR_6;
}
