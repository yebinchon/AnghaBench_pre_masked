
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {char* buf; int len; int flags; int addr; } ;
struct au0828_rc {TYPE_2__* dev; int i2c_dev_addr; } ;
typedef int buf ;
struct TYPE_3__ {int adapter; } ;
struct TYPE_4__ {TYPE_1__ i2c_client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static int FUNC_1(struct au0828_rc *VAR_1, u16 VAR_2, u8 VAR_3)
{
 int VAR_4;
 char VAR_5[] = { (VAR_2 >> 8) | 0x80, VAR_2 & 0xff, VAR_3 };
 struct i2c_msg VAR_6 = { .addr = VAR_1->i2c_dev_addr, .flags = 0,
          .buf = VAR_5, .len = sizeof(VAR_5) };

 VAR_4 = FUNC_0(VAR_1->dev->i2c_client.adapter, &VAR_6, 1);

 if (VAR_4 < 0)
  return VAR_4;

 return (VAR_4 == 1) ? 0 : -VAR_0;
}
