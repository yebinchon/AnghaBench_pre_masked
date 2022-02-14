
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda827x_priv {int i2c_adap; } ;
struct i2c_msg {int dummy; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct tda827x_priv* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int const) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_1,
     struct i2c_msg *VAR_2,
     const int VAR_3)
{
 int VAR_4;
 struct tda827x_priv *VAR_5 = VAR_1->tuner_priv;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 VAR_4 = FUNC_0(VAR_5->i2c_adap, VAR_2, VAR_3);
 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);

 if (VAR_4 >= 0 && VAR_4 != VAR_3)
  return -VAR_0;

 return VAR_4;
}
