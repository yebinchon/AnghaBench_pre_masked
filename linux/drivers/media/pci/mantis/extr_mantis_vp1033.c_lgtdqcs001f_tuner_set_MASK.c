
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_adapter {int dummy; } ;
struct mantis_pci {struct i2c_adapter adapter; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int buf ;
struct TYPE_2__ {struct mantis_pci* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 scalar_t__ FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2)
{
 struct dtv_frontend_properties *VAR_3 = &VAR_2->dtv_property_cache;
 struct mantis_pci *VAR_4 = VAR_2->dvb->priv;
 struct i2c_adapter *VAR_5 = &VAR_4->adapter;

 u8 VAR_6[4];
 u32 VAR_7;


 struct i2c_msg VAR_8 = {.addr = 0x61, .flags = 0, .buf = VAR_6, .len = sizeof(VAR_6)};

 VAR_7 = VAR_3->frequency / 250;

 VAR_6[0] = (VAR_7 >> 8) & 0x7f;
 VAR_6[1] = VAR_7 & 0xff;
 VAR_6[2] = 0x83;
 VAR_6[3] = 0xc0;

 if (VAR_3->frequency < 1531000)
  VAR_6[3] |= 0x04;
 else
  VAR_6[3] &= ~0x04;
 if (FUNC_1(VAR_5, &VAR_8, 1) < 0) {
  FUNC_0(VAR_1, 1, "Write: I2C Transfer failed");
  return -VAR_0;
 }
 FUNC_2(100);

 return 0;
}
