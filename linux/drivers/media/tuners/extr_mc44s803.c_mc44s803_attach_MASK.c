
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct mc44s803_priv {struct dvb_frontend* fe; struct i2c_adapter* i2c; struct mc44s803_config* cfg; } ;
struct mc44s803_config {int dummy; } ;
struct i2c_adapter {int dummy; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;int tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct mc44s803_priv* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct mc44s803_priv*) ;
 struct mc44s803_priv* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mc44s803_priv*,int ,scalar_t__*) ;
 int VAR_5 ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;
 int FUNC_7 (struct dvb_frontend*,int) ;
 int FUNC_8 (struct dvb_frontend*,int) ;

struct dvb_frontend *FUNC_9(struct dvb_frontend *VAR_6,
  struct i2c_adapter *VAR_7, struct mc44s803_config *VAR_8)
{
 struct mc44s803_priv *VAR_9;
 u32 VAR_10;
 u8 VAR_11;
 int VAR_12;

 VAR_10 = 0;

 VAR_9 = FUNC_2(sizeof(struct mc44s803_priv), VAR_0);
 if (VAR_9 == ((void*)0))
  return ((void*)0);

 VAR_9->cfg = VAR_8;
 VAR_9->i2c = VAR_7;
 VAR_9->fe = VAR_6;

 if (VAR_6->ops.i2c_gate_ctrl)
  VAR_6->ops.i2c_gate_ctrl(VAR_6, 1);

 VAR_12 = FUNC_3(VAR_9, VAR_4, &VAR_10);
 if (VAR_12)
  goto error;

 VAR_11 = FUNC_0(VAR_10, VAR_3);

 if (VAR_11 != 0x14) {
  FUNC_4(VAR_1, "unsupported ID (%x should be 0x14)\n",
     VAR_11);
  goto error;
 }

 FUNC_4(VAR_2, "successfully identified (ID = %x)\n", VAR_11);
 FUNC_5(&VAR_6->ops.tuner_ops, &VAR_5,
        sizeof(struct dvb_tuner_ops));

 VAR_6->tuner_priv = VAR_9;

 if (VAR_6->ops.i2c_gate_ctrl)
  VAR_6->ops.i2c_gate_ctrl(VAR_6, 0);

 return VAR_6;

error:
 if (VAR_6->ops.i2c_gate_ctrl)
  VAR_6->ops.i2c_gate_ctrl(VAR_6, 0);

 FUNC_1(VAR_9);
 return ((void*)0);
}
