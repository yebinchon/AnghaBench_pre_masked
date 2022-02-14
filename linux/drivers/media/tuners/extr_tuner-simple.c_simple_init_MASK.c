
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int * adap; } ;
struct tuner_simple_priv {TYPE_2__* tun; TYPE_3__ i2c_props; } ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct tuner_simple_priv* tuner_priv; } ;
struct TYPE_5__ {int* initdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,int) ;
 int FUNC_1 (TYPE_3__*,int*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_1)
{
 struct tuner_simple_priv *VAR_2 = VAR_1->tuner_priv;

 if (VAR_2->i2c_props.adap == ((void*)0))
  return -VAR_0;

 if (VAR_2->tun->initdata) {
  int VAR_3;

  if (VAR_1->ops.i2c_gate_ctrl)
   VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);

  VAR_3 = FUNC_1(&VAR_2->i2c_props,
       VAR_2->tun->initdata + 1,
       VAR_2->tun->initdata[0]);
  if (VAR_3 != VAR_2->tun->initdata[0])
   return VAR_3;
 }

 return 0;
}
