
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef unsigned char u32 ;
struct i2c_msg {int addr; unsigned char* buf; int len; int flags; } ;
struct IR_i2c {TYPE_2__* c; TYPE_1__* rc; } ;
typedef enum rc_proto { ____Placeholder_rc_proto } rc_proto ;
struct TYPE_4__ {int addr; int adapter; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,unsigned char,unsigned char) ;
 int FUNC_2 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_3(struct IR_i2c *VAR_3, enum rc_proto *VAR_4,
         u32 *VAR_5, u8 *VAR_6)
{
 unsigned char VAR_7, VAR_8, VAR_9;
 struct i2c_msg VAR_10[] = { { .addr = VAR_3->c->addr, .flags = 0,
       .buf = &VAR_7, .len = 1},
     { .addr = VAR_3->c->addr, .flags = VAR_1,
      .buf = &VAR_8, .len = 1} };
 VAR_7 = 0x0d;
 if (2 != FUNC_2(VAR_3->c->adapter, VAR_10, 2)) {
  FUNC_0(&VAR_3->rc->dev, "read error\n");
  return -VAR_0;
 }

 if (VAR_8 == 0xff)
  return 0;

 VAR_7 = 0x0b;
 VAR_10[1].buf = &VAR_9;
 if (2 != FUNC_2(VAR_3->c->adapter, VAR_10, 2)) {
  FUNC_0(&VAR_3->rc->dev, "read error\n");
  return -VAR_0;
 }

 if (VAR_9 == 0xff)
  return 0;

 FUNC_0(&VAR_3->rc->dev, "read key 0x%02x/0x%02x\n", VAR_8, VAR_9);
 if (VAR_9 < 2 || VAR_9 > 4) {
  FUNC_1(&VAR_3->rc->dev, "warning: invalid key group 0x%02x for key 0x%02x\n",
    VAR_9, VAR_8);
 }
 VAR_8 |= (VAR_9 & 1) << 6;

 *VAR_4 = VAR_2;
 *VAR_5 = VAR_8;
 if (VAR_3->c->addr == 0x41)
  *VAR_5 |= VAR_9 << 8;
 *VAR_6 = 0;
 return 1;
}
