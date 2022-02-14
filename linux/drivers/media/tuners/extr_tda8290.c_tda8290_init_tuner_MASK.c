
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int adap; } ;
struct tda8290_priv {int ver; TYPE_1__ i2c_props; int tda827x_addr; } ;
struct i2c_msg {unsigned char* buf; int len; int flags; int addr; } ;
struct TYPE_5__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct TYPE_6__ {TYPE_2__ analog_ops; } ;
struct dvb_frontend {TYPE_3__ ops; struct tda8290_priv* analog_demod_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static void FUNC_3(struct dvb_frontend *VAR_1)
{
 struct tda8290_priv *VAR_2 = VAR_1->analog_demod_priv;
 static unsigned char VAR_3[] =
  { 0x00, 0x00, 0x00, 0x40, 0xdC, 0x04, 0xAf,
    0x3F, 0x2A, 0x04, 0xFF, 0x00, 0x00, 0x40 };
 static unsigned char VAR_4[] =
   { 0x00, 0x00, 0x00, 0x00, 0xdC, 0x05, 0x8b,
     0x0c, 0x04, 0x20, 0xFF, 0x00, 0x00, 0x4b };
 struct i2c_msg VAR_5 = {.addr = VAR_2->tda827x_addr, .flags=0,
         .buf=VAR_3, .len = 14};
 if (VAR_2->ver & VAR_0)
  VAR_5.buf = VAR_4;

 if (VAR_1->ops.analog_ops.i2c_gate_ctrl)
  VAR_1->ops.analog_ops.i2c_gate_ctrl(VAR_1, 1);
 FUNC_0(VAR_2->i2c_props.adap, &VAR_5, 1);
 if (VAR_1->ops.analog_ops.i2c_gate_ctrl)
  VAR_1->ops.analog_ops.i2c_gate_ctrl(VAR_1, 0);
}
