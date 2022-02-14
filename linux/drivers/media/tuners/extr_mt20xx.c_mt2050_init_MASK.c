
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct microtune_priv {int i2c_props; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct microtune_priv* tuner_priv; } ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (char*,unsigned char) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int FUNC_3 (int *,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_1)
{
 struct microtune_priv *VAR_2 = VAR_1->tuner_priv;
 unsigned char VAR_3[2];

 VAR_3[0] = 6;
 VAR_3[1] = 0x10;
 FUNC_3(&VAR_2->i2c_props, VAR_3, 2);

 VAR_3[0] = 0x0f;
 VAR_3[1] = 0x0f;
 FUNC_3(&VAR_2->i2c_props, VAR_3, 2);

 VAR_3[0] = 0x0d;
 FUNC_3(&VAR_2->i2c_props, VAR_3, 1);
 FUNC_2(&VAR_2->i2c_props, VAR_3, 1);

 FUNC_1("mt2050: sro is %x\n", VAR_3[0]);

 FUNC_0(&VAR_1->ops.tuner_ops, &VAR_0, sizeof(struct dvb_tuner_ops));

 return 0;
}
