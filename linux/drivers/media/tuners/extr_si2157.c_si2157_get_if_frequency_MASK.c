
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct si2157_dev {int if_frequency; } ;
struct i2c_client {int dummy; } ;
struct dvb_frontend {struct i2c_client* tuner_priv; } ;


 struct si2157_dev* FUNC_0 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct i2c_client *VAR_2 = VAR_0->tuner_priv;
 struct si2157_dev *VAR_3 = FUNC_0(VAR_2);

 *VAR_1 = VAR_3->if_frequency;
 return 0;
}
