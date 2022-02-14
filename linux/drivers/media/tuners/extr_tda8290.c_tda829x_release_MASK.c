
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tda8290_priv {int ver; } ;
struct TYPE_3__ {int (* release ) (struct dvb_frontend*) ;} ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {struct tda8290_priv* analog_demod_priv; TYPE_2__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tda8290_priv*) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static void FUNC_2(struct dvb_frontend *VAR_3)
{
 struct tda8290_priv *VAR_4 = VAR_3->analog_demod_priv;



 if (VAR_4->ver & (VAR_0 | VAR_1 | VAR_2))
  if (VAR_3->ops.tuner_ops.release)
   VAR_3->ops.tuner_ops.release(VAR_3);

 FUNC_0(VAR_3->analog_demod_priv);
 VAR_3->analog_demod_priv = ((void*)0);
}
