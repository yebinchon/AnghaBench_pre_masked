
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_adapter {int dummy; } ;
struct fc0013_priv {int dual_master; int xtal_freq; int addr; struct i2c_adapter* i2c; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct fc0013_priv* tuner_priv; } ;
typedef enum fc001x_xtal_freq { ____Placeholder_fc001x_xtal_freq } fc001x_xtal_freq ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 struct fc0013_priv* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int) ;

struct dvb_frontend *FUNC_3(struct dvb_frontend *VAR_2,
 struct i2c_adapter *VAR_3, u8 VAR_4, int VAR_5,
 enum fc001x_xtal_freq VAR_6)
{
 struct fc0013_priv *VAR_7 = ((void*)0);

 VAR_7 = FUNC_1(sizeof(struct fc0013_priv), VAR_0);
 if (VAR_7 == ((void*)0))
  return ((void*)0);

 VAR_7->i2c = VAR_3;
 VAR_7->dual_master = VAR_5;
 VAR_7->addr = VAR_4;
 VAR_7->xtal_freq = VAR_6;

 FUNC_0("Fitipower FC0013 successfully attached.");

 VAR_2->tuner_priv = VAR_7;

 FUNC_2(&VAR_2->ops.tuner_ops, &VAR_1,
  sizeof(struct dvb_tuner_ops));

 return VAR_2;
}
