
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; struct dtv_frontend_properties dtv_property_cache; } ;
struct budget {int i2c_adap; } ;
typedef int data ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct dtv_frontend_properties *VAR_2 = &VAR_1->dtv_property_cache;
 struct budget* VAR_3 = (struct budget*) VAR_1->dvb->priv;
 u32 VAR_4;
 u8 VAR_5[4];
 struct i2c_msg VAR_6 = { .addr = 0x61, .flags = 0, .buf = VAR_5, .len = sizeof(VAR_5) };

 VAR_4 = VAR_2->frequency / 125;
 VAR_5[0] = (VAR_4 >> 8) & 0x7f;
 VAR_5[1] = VAR_4 & 0xff;
 VAR_5[2] = 0x8e;
 VAR_5[3] = 0x00;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 if (FUNC_0 (&VAR_3->i2c_adap, &VAR_6, 1) != 1) return -VAR_0;
 return 0;
}
