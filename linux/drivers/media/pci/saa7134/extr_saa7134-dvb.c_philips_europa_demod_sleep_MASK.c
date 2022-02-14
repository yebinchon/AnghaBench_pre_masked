
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct saa7134_dev {int (* original_demod_sleep ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_2__ ops; TYPE_1__* dvb; } ;
struct TYPE_3__ {struct saa7134_dev* priv; } ;


 int FUNC_0 (struct dvb_frontend*) ;
 int FUNC_1 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct saa7134_dev *VAR_1 = VAR_0->dvb->priv;

 if (VAR_1->original_demod_sleep)
  VAR_1->original_demod_sleep(VAR_0);
 VAR_0->ops.i2c_gate_ctrl(VAR_0, 1);
 return 0;
}
