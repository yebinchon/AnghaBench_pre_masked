
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_7__ {int addr; int adap; } ;
struct TYPE_11__ {int switch_addr; int std_map; int config; } ;
struct tda8290_priv {int tda827x_addr; TYPE_1__ i2c_props; TYPE_5__ cfg; int ver; int tda18271_std_map; } ;
struct i2c_msg {int* buf; int len; int addr; int flags; } ;
struct TYPE_9__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct TYPE_8__ {int (* sleep ) (struct dvb_frontend*) ;int (* init ) (struct dvb_frontend*) ;} ;
struct TYPE_10__ {TYPE_3__ analog_ops; TYPE_2__ tuner_ops; } ;
struct dvb_frontend {TYPE_4__ ops; struct tda8290_priv* analog_demod_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct dvb_frontend*,int,int ,TYPE_5__*) ;
 int FUNC_1 (int ,struct i2c_msg*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*) ;
 int FUNC_7 (struct dvb_frontend*) ;
 int FUNC_8 (struct dvb_frontend*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_5__ VAR_7 ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_8)
{
 struct tda8290_priv *VAR_9 = VAR_8->analog_demod_priv;
 int VAR_10, VAR_11, VAR_12;
 u32 VAR_13;
 u8 VAR_14;
 struct i2c_msg VAR_15 = { .flags = VAR_1, .buf = &VAR_14, .len = 1 };

 if (VAR_8->ops.analog_ops.i2c_gate_ctrl)
  VAR_8->ops.analog_ops.i2c_gate_ctrl(VAR_8, 1);


 VAR_12 = 0;
 VAR_13 = 0;
 for (VAR_10 = 0x60; VAR_10 <= 0x63; VAR_10++) {
  VAR_15.addr = VAR_10;
  VAR_11 = FUNC_1(VAR_9->i2c_props.adap, &VAR_15, 1);
  if (VAR_11 == 1) {
   VAR_12++;
   VAR_13 = (VAR_13 << 8) + VAR_10;
  }
 }





 if (VAR_8->ops.analog_ops.i2c_gate_ctrl)
  VAR_8->ops.analog_ops.i2c_gate_ctrl(VAR_8, 0);

 if (VAR_12 > 1)
  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
   VAR_15.addr = VAR_13 & 0xff;
   VAR_11 = FUNC_1(VAR_9->i2c_props.adap, &VAR_15, 1);
   if (VAR_11 == 1)
    VAR_13 = VAR_13 >> 8;
   else
    break;
  }

 if (VAR_13 == 0) {
  VAR_13 = 0x60;
  FUNC_9("could not clearly identify tuner address, defaulting to %x\n",
      VAR_13);
 } else {
  VAR_13 = VAR_13 & 0xff;
  FUNC_9("setting tuner address to %x\n", VAR_13);
 }
 VAR_9->tda827x_addr = VAR_13;
 VAR_15.addr = VAR_13;

 if (VAR_8->ops.analog_ops.i2c_gate_ctrl)
  VAR_8->ops.analog_ops.i2c_gate_ctrl(VAR_8, 1);
 VAR_11 = FUNC_1(VAR_9->i2c_props.adap, &VAR_15, 1);

 if (VAR_11 != 1) {
  FUNC_10("tuner access failed!\n");
  if (VAR_8->ops.analog_ops.i2c_gate_ctrl)
   VAR_8->ops.analog_ops.i2c_gate_ctrl(VAR_8, 0);
  return -VAR_0;
 }

 if ((VAR_14 == 0x83) || (VAR_14 == 0x84)) {
  VAR_9->ver |= VAR_2;
  VAR_7.config = VAR_9->cfg.config;
  VAR_7.std_map = VAR_9->tda18271_std_map;
  FUNC_0(VAR_5, VAR_8, VAR_9->tda827x_addr,
      VAR_9->i2c_props.adap, &VAR_7);
 } else {
  if ((VAR_14 & 0x3c) == 0)
   VAR_9->ver |= VAR_3;
  else
   VAR_9->ver |= VAR_4;

  FUNC_0(VAR_6, VAR_8, VAR_9->tda827x_addr,
      VAR_9->i2c_props.adap, &VAR_9->cfg);
  VAR_9->cfg.switch_addr = VAR_9->i2c_props.addr;
 }
 if (VAR_8->ops.tuner_ops.init)
  VAR_8->ops.tuner_ops.init(VAR_8);

 if (VAR_8->ops.tuner_ops.sleep)
  VAR_8->ops.tuner_ops.sleep(VAR_8);

 if (VAR_8->ops.analog_ops.i2c_gate_ctrl)
  VAR_8->ops.analog_ops.i2c_gate_ctrl(VAR_8, 0);

 return 0;
}
