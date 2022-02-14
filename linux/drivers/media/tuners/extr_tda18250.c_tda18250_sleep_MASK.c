
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18250_dev {scalar_t__ if_frequency; int regmap; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 struct tda18250_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_2)
{
 struct i2c_client *VAR_3 = VAR_2->tuner_priv;
 struct tda18250_dev *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;

 FUNC_0(&VAR_3->dev, "\n");


 VAR_5 = FUNC_2(VAR_4->regmap, VAR_0, 0x80, 0x00);
 if (VAR_5)
  return VAR_5;


 VAR_4->if_frequency = 0;

 VAR_5 = FUNC_3(VAR_2, VAR_1);
 return VAR_5;
}
