
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ half_step; } ;
struct qm1d1b0004_state {int i2c; TYPE_1__ cfg; } ;
struct dvb_frontend {struct qm1d1b0004_state* tuner_priv; } ;


 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0)
{
 struct qm1d1b0004_state *VAR_1;
 u8 VAR_2[2] = {0xf8, 0x04};

 VAR_1 = VAR_0->tuner_priv;
 if (VAR_1->cfg.half_step)
  VAR_2[0] |= 0x01;

 return FUNC_0(VAR_1->i2c, VAR_2, 2);
}
