
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qt1010_priv {struct i2c_adapter* i2c; struct qt1010_config* cfg; } ;
struct qt1010_config {int dummy; } ;
struct i2c_adapter {int dev; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {struct qt1010_priv* tuner_priv; TYPE_1__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (struct qt1010_priv*) ;
 struct qt1010_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *,int) ;
 scalar_t__ FUNC_4 (struct qt1010_priv*,int,int*) ;
 int VAR_2 ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;

struct dvb_frontend * FUNC_7(struct dvb_frontend *VAR_3,
        struct i2c_adapter *VAR_4,
        struct qt1010_config *VAR_5)
{
 struct qt1010_priv *VAR_6 = ((void*)0);
 u8 VAR_7;

 VAR_6 = FUNC_2(sizeof(struct qt1010_priv), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_6->cfg = VAR_5;
 VAR_6->i2c = VAR_4;

 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 1);



 if (FUNC_4(VAR_6, 0x29, &VAR_7) != 0 || (VAR_7 != 0x39)) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }

 if (VAR_3->ops.i2c_gate_ctrl)
  VAR_3->ops.i2c_gate_ctrl(VAR_3, 0);

 FUNC_0(&VAR_6->i2c->dev,
   "%s: Quantek QT1010 successfully identified\n",
   VAR_1);

 FUNC_3(&VAR_3->ops.tuner_ops, &VAR_2,
        sizeof(struct dvb_tuner_ops));

 VAR_3->tuner_priv = VAR_6;
 return VAR_3;
}
