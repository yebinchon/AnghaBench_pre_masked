
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int * release; } ;
struct TYPE_4__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {int ber; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_1, u32 * VAR_2)
{
 struct af9005_fe_state *VAR_3 = VAR_1->demodulator_priv;
 if (VAR_1->ops.tuner_ops.release == ((void*)0))
  return -VAR_0;
 FUNC_0(VAR_1);
 *VAR_2 = VAR_3->ber;
 return 0;
}
