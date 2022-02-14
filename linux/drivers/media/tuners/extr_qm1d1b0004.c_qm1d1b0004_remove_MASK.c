
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct dvb_frontend {int * tuner_priv; } ;


 struct dvb_frontend* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct dvb_frontend *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1->tuner_priv);
 VAR_1->tuner_priv = ((void*)0);
 return 0;
}
