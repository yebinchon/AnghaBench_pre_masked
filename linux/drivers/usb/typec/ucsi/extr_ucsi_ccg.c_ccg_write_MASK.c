
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ucsi_ccg {int dev; struct i2c_client* client; } ;
struct i2c_msg {int flags; unsigned char* buf; scalar_t__ len; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
typedef int rab ;


 int FUNC_0 (struct i2c_msg*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct i2c_msg*,int ) ;
 int FUNC_3 (unsigned char*) ;
 unsigned char* FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned char*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,unsigned char*) ;

__attribute__((used)) static int FUNC_9(struct ucsi_ccg *VAR_2, u16 VAR_3, u8 *VAR_4, u32 VAR_5)
{
 struct i2c_client *VAR_6 = VAR_2->client;
 unsigned char *VAR_7;
 struct i2c_msg VAR_8[] = {
  {
   .addr = VAR_6->addr,
   .flags = 0x0,
  }
 };
 int VAR_9;

 VAR_7 = FUNC_4(VAR_5 + sizeof(VAR_3), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_8(VAR_3, VAR_7);
 FUNC_5(VAR_7 + sizeof(VAR_3), VAR_4, VAR_5);

 VAR_8[0].len = VAR_5 + sizeof(VAR_3);
 VAR_8[0].buf = VAR_7;

 FUNC_6(VAR_2->dev);
 VAR_9 = FUNC_2(VAR_6->adapter, VAR_8, FUNC_0(VAR_8));
 if (VAR_9 < 0) {
  FUNC_1(VAR_2->dev, "i2c_transfer failed %d\n", VAR_9);
  FUNC_7(VAR_2->dev);
  FUNC_3(VAR_7);
  return VAR_9;
 }

 FUNC_7(VAR_2->dev);
 FUNC_3(VAR_7);
 return 0;
}
