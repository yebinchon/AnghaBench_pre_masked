
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_adapter {int dev; } ;
struct fc0011_priv {struct i2c_adapter* i2c; int addr; } ;
struct fc0011_config {int i2c_address; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct fc0011_priv* tuner_priv; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 struct fc0011_priv* FUNC_1 (int,int ) ;

struct dvb_frontend *FUNC_2(struct dvb_frontend *VAR_2,
       struct i2c_adapter *VAR_3,
       const struct fc0011_config *VAR_4)
{
 struct fc0011_priv *VAR_5;

 VAR_5 = FUNC_1(sizeof(struct fc0011_priv), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->i2c = VAR_3;
 VAR_5->addr = VAR_4->i2c_address;

 VAR_2->tuner_priv = VAR_5;
 VAR_2->ops.tuner_ops = VAR_1;

 FUNC_0(&VAR_5->i2c->dev, "Fitipower FC0011 tuner attached\n");

 return VAR_2;
}
