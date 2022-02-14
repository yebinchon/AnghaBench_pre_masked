
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mt2060_priv {scalar_t__ sleep; TYPE_1__* cfg; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; struct mt2060_priv* tuner_priv; } ;
struct TYPE_3__ {int clock_out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mt2060_priv*,int ,int) ;
 int FUNC_1 (struct dvb_frontend*,int) ;
 int FUNC_2 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2)
{
 struct mt2060_priv *VAR_3 = VAR_2->tuner_priv;
 int VAR_4;

 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 1);

 VAR_4 = FUNC_0(VAR_3, VAR_1,
         (VAR_3->cfg->clock_out << 6) | 0x30);
 if (VAR_4)
  goto err_i2c_gate_ctrl;

 if (VAR_3->sleep)
  VAR_4 = FUNC_0(VAR_3, VAR_0, 0xe8);

err_i2c_gate_ctrl:
 if (VAR_2->ops.i2c_gate_ctrl)
  VAR_2->ops.i2c_gate_ctrl(VAR_2, 0);

 return VAR_4;
}
