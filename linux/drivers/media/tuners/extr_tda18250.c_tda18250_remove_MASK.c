
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tda18250_dev {struct dvb_frontend* fe; } ;
struct i2c_client {int dev; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_2__ {int tuner_ops; } ;
struct dvb_frontend {int * tuner_priv; TYPE_1__ ops; } ;


 int FUNC_0 (int *,char*) ;
 struct tda18250_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct tda18250_dev*) ;
 int FUNC_3 (int *,int ,int) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct tda18250_dev *VAR_1 = FUNC_1(VAR_0);
 struct dvb_frontend *VAR_2 = VAR_1->fe;

 FUNC_0(&VAR_0->dev, "\n");

 FUNC_3(&VAR_2->ops.tuner_ops, 0, sizeof(struct dvb_tuner_ops));
 VAR_2->tuner_priv = ((void*)0);
 FUNC_2(VAR_1);

 return 0;
}
