
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_adapter {int dummy; } ;
struct mantis_pci {struct i2c_adapter adapter; } ;
struct i2c_msg {int addr; int* buf; int len; scalar_t__ flags; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int buf ;
struct TYPE_3__ {struct mantis_pci* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_4)
{
 struct dtv_frontend_properties *VAR_5 = &VAR_4->dtv_property_cache;
 struct mantis_pci *VAR_6 = VAR_4->dvb->priv;
 struct i2c_adapter *VAR_7 = &VAR_6->adapter;

 u8 VAR_8[6];
 struct i2c_msg VAR_9 = {.addr = 0x60, .flags = 0, .buf = VAR_8, .len = sizeof(VAR_8)};
 int VAR_10;




 u32 VAR_11 = (VAR_5->frequency + 36125000 + 62500 / 2) / 62500;

 VAR_8[0] = (VAR_11 >> 8) & 0x7f;
 VAR_8[1] = VAR_11 & 0xff;
 VAR_8[2] = 0xce;
 VAR_8[3] = (VAR_5->frequency < 150000000 ? 0x01 :
    VAR_5->frequency < 445000000 ? 0x02 : 0x04);
 VAR_8[4] = 0xde;
 VAR_8[5] = 0x20;

 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);

 if (FUNC_0(VAR_7, &VAR_9, 1) != 1)
  return -VAR_1;


 VAR_9.flags = VAR_2;
 VAR_9.len = 1;
 for (VAR_10 = 0; VAR_10 < 20; VAR_10++) {
  if (VAR_4->ops.i2c_gate_ctrl)
   VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);

  if (FUNC_0(VAR_7, &VAR_9, 1) == 1 && (VAR_8[0] & 0x40))
   break;

  FUNC_1(10);
 }


 VAR_9.flags = 0;
 VAR_9.len = 2;
 VAR_9.buf = &VAR_8[2];
 VAR_8[2] &= ~0x40;
 if (VAR_4->ops.i2c_gate_ctrl)
  VAR_4->ops.i2c_gate_ctrl(VAR_4, 1);

 if (FUNC_0(VAR_7, &VAR_9, 1) != 1)
  return -VAR_1;

 return 0;
}
