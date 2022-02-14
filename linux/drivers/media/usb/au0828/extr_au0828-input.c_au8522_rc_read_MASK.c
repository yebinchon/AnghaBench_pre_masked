
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct i2c_msg {char* buf; int len; int flags; int addr; } ;
struct au0828_rc {TYPE_2__* dev; int i2c_dev_addr; } ;
struct TYPE_3__ {int adapter; } ;
struct TYPE_4__ {TYPE_1__ i2c_client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct au0828_rc *VAR_2, u16 VAR_3, int VAR_4,
     char *VAR_5, int VAR_6)
{
 int VAR_7;
 char VAR_8[3];
 struct i2c_msg VAR_9[2] = { { .addr = VAR_2->i2c_dev_addr, .flags = 0,
        .buf = VAR_8, .len = 2 },
      { .addr = VAR_2->i2c_dev_addr, .flags = VAR_1,
        .buf = VAR_5, .len = VAR_6 } };

 VAR_8[0] = 0x40 | VAR_3 >> 8;
 VAR_8[1] = VAR_3 & 0xff;
 if (VAR_4 >= 0) {
  VAR_8[2] = VAR_4;
  VAR_9[0].len++;
 }

 VAR_7 = FUNC_0(VAR_2->dev->i2c_client.adapter, VAR_9, 2);

 if (VAR_7 < 0)
  return VAR_7;

 return (VAR_7 == 2) ? 0 : -VAR_0;
}
