
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rs5c372 {int * regs; scalar_t__ buf; scalar_t__ smbus; struct i2c_client* client; } ;
struct i2c_msg {int len; scalar_t__ buf; int flags; int addr; } ;
struct i2c_client {int dev; int adapter; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int ,int *,int ,int *,int *,int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct i2c_client*,int,int,scalar_t__) ;
 int FUNC_4 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_5(struct rs5c372 *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->client;
 struct i2c_msg VAR_5[] = {
  {
   .addr = VAR_4->addr,
   .flags = VAR_1,
   .len = sizeof(VAR_3->buf),
   .buf = VAR_3->buf
  },
 };
 if (VAR_3->smbus) {
  int VAR_6 = FUNC_0(VAR_2);
  int VAR_7 = sizeof(VAR_3->buf) - 1;

  if (FUNC_3(VAR_4, VAR_6, VAR_7,
        VAR_3->buf + 1) != VAR_7) {
   FUNC_2(&VAR_4->dev, "can't read registers\n");
   return -VAR_0;
  }
 } else {
  if ((FUNC_4(VAR_4->adapter, VAR_5, 1)) != 1) {
   FUNC_2(&VAR_4->dev, "can't read registers\n");
   return -VAR_0;
  }
 }

 FUNC_1(&VAR_4->dev,
  "%3ph (%02x) %3ph (%02x), %3ph, %3ph; %02x %02x\n",
  VAR_3->regs + 0, VAR_3->regs[3],
  VAR_3->regs + 4, VAR_3->regs[7],
  VAR_3->regs + 8, VAR_3->regs + 11,
  VAR_3->regs[14], VAR_3->regs[15]);

 return 0;
}
