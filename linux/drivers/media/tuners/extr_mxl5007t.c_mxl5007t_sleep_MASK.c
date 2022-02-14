
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mxl5007t_state {int dummy; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct mxl5007t_state* tuner_priv; } ;


 int FUNC_0 (struct mxl5007t_state*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_0)
{
 struct mxl5007t_state *VAR_1 = VAR_0->tuner_priv;
 int VAR_2;

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);


 VAR_2 = FUNC_0(VAR_1, 0x01, 0x00);
 FUNC_1(VAR_2);
 VAR_2 = FUNC_0(VAR_1, 0x0f, 0x00);
 FUNC_1(VAR_2);

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);

 return VAR_2;
}
