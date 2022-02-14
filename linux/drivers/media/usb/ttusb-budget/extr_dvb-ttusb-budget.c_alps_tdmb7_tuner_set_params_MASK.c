
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ttusb {int i2c_adap; } ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
typedef int data ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct ttusb* VAR_3 = (struct ttusb*) VAR_1->dvb->priv;
 u8 VAR_4[4];
 struct i2c_msg VAR_5 = {.addr=0x61, .flags=0, .buf=VAR_4, .len=sizeof(VAR_4) };
 u32 VAR_6;

 VAR_6 = (VAR_2->frequency + 36166667) / 166667;

 VAR_4[0] = (VAR_6 >> 8) & 0x7f;
 VAR_4[1] = VAR_6 & 0xff;
 VAR_4[2] = ((VAR_6 >> 10) & 0x60) | 0x85;
 VAR_4[3] = VAR_2->frequency < 592000000 ? 0x40 : 0x80;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (FUNC_0(&VAR_3->i2c_adap, &VAR_5, 1) != 1) return -VAR_0;
 return 0;
}
