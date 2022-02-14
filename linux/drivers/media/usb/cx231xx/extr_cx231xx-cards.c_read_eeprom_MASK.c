
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct i2c_client {int adapter; int addr; } ;
struct cx231xx {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct cx231xx *VAR_1, struct i2c_client *VAR_2,
         u8 *VAR_3, int VAR_4)
{
 int VAR_5;
 u8 VAR_6 = 0;
 int VAR_7 = VAR_4;
 u8 *VAR_8 = VAR_3;
 int VAR_9;
 struct i2c_msg VAR_10 = { .addr = VAR_2->addr, .flags = 0,
  .buf = &VAR_6, .len = 1 };
 struct i2c_msg VAR_11 = { .addr = VAR_2->addr, .flags = VAR_0 };


 VAR_5 = FUNC_2(VAR_2->adapter, &VAR_10, 1);
 if (VAR_5 < 0) {
  FUNC_1(VAR_1->dev, "Can't read eeprom\n");
  return VAR_5;
 }

 while (VAR_7 > 0) {
  VAR_11.len = (VAR_7 > 64) ? 64 : VAR_7;
  VAR_11.buf = VAR_8;

  VAR_5 = FUNC_2(VAR_2->adapter, &VAR_11, 1);
  if (VAR_5 < 0) {
   FUNC_1(VAR_1->dev, "Can't read eeprom\n");
   return VAR_5;
  }
  VAR_8 += VAR_11.len;
  VAR_7 -= VAR_11.len;
 }

 for (VAR_9 = 0; VAR_9 + 15 < VAR_4; VAR_9 += 16)
  FUNC_0(VAR_1->dev, "i2c eeprom %02x: %*ph\n",
   VAR_9, 16, &VAR_3[VAR_9]);

 return 0;
}
