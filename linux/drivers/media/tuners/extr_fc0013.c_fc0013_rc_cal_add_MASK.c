
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fc0013_priv {int dummy; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct fc0013_priv* tuner_priv; } ;


 int FUNC_0 (struct fc0013_priv*,int,int*) ;
 int FUNC_1 (struct fc0013_priv*,int,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;

int FUNC_4(struct dvb_frontend *VAR_0, int VAR_1)
{
 struct fc0013_priv *VAR_2 = VAR_0->tuner_priv;
 int VAR_3;
 u8 VAR_4;
 int VAR_5;

 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);


 VAR_3 = FUNC_1(VAR_2, 0x10, 0x00);
 if (VAR_3)
  goto error_out;


 VAR_3 = FUNC_0(VAR_2, 0x10, &VAR_4);
 if (VAR_3)
  goto error_out;

 VAR_4 &= 0x0f;

 VAR_5 = (int)VAR_4 + VAR_1;


 VAR_3 = FUNC_1(VAR_2, 0x0d, 0x11);
 if (VAR_3)
  goto error_out;


 if (VAR_5 > 15)
  VAR_3 = FUNC_1(VAR_2, 0x10, 0x0f);
 else if (VAR_5 < 0)
  VAR_3 = FUNC_1(VAR_2, 0x10, 0x00);
 else
  VAR_3 = FUNC_1(VAR_2, 0x10, (u8)VAR_5);

error_out:
 if (VAR_0->ops.i2c_gate_ctrl)
  VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);

 return VAR_3;
}
