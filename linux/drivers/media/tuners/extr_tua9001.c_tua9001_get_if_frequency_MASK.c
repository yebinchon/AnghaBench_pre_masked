
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tua9001_dev {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct tua9001_dev* tuner_priv; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_0, u32 *VAR_1)
{
 struct tua9001_dev *VAR_2 = VAR_0->tuner_priv;
 struct i2c_client *VAR_3 = VAR_2->client;

 FUNC_0(&VAR_3->dev, "\n");

 *VAR_1 = 0;
 return 0;
}
