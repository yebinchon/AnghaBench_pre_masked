
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mxl5007t_state {int dummy; } ;
struct TYPE_2__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct mxl5007t_state* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxl5007t_state*,int*,int*) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend *VAR_1, u32 *VAR_2)
{
 struct mxl5007t_state *VAR_3 = VAR_1->tuner_priv;
 int VAR_4, VAR_5, VAR_6;

 *VAR_2 = 0;

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);

 VAR_6 = FUNC_0(VAR_3, &VAR_4, &VAR_5);
 if (FUNC_2(VAR_6))
  goto fail;
 FUNC_1("%s%s", VAR_4 ? "rf locked " : "",
    VAR_5 ? "ref locked" : "");

 if ((VAR_4) || (VAR_5))
  *VAR_2 |= VAR_0;
fail:
 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);

 return VAR_6;
}
