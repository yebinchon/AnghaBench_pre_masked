
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tda18250_dev {int regmap; int loopthrough; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int *,char*,unsigned int) ;
 struct tda18250_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_5,
  unsigned int VAR_6)
{
 struct i2c_client *VAR_7 = VAR_5->tuner_priv;
 struct tda18250_dev *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;
 unsigned int VAR_10;

 FUNC_0(&VAR_7->dev, "power state: %d", VAR_6);

 switch (VAR_6) {
 case 129:
  VAR_9 = FUNC_3(VAR_8->regmap, VAR_1, 0x07, 0x00);
  if (VAR_9)
   goto err;
  VAR_9 = FUNC_3(VAR_8->regmap, VAR_4, 0xc0, 0xc0);
  if (VAR_9)
   goto err;
  break;
 case 128:
  if (VAR_8->loopthrough) {
   VAR_9 = FUNC_3(VAR_8->regmap,
     VAR_4, 0xc0, 0x80);
   if (VAR_9)
    goto err;
   VAR_9 = FUNC_3(VAR_8->regmap,
     VAR_1, 0x07, 0x02);
   if (VAR_9)
    goto err;
   VAR_9 = FUNC_3(VAR_8->regmap,
     VAR_3, 0x80, 0x00);
   if (VAR_9)
    goto err;
  } else {
   VAR_9 = FUNC_3(VAR_8->regmap,
     VAR_4, 0xc0, 0x80);
   if (VAR_9)
    goto err;
   VAR_9 = FUNC_3(VAR_8->regmap,
     VAR_1, 0x07, 0x01);
   if (VAR_9)
    goto err;
   VAR_9 = FUNC_2(VAR_8->regmap,
     VAR_2, &VAR_10);
   if (VAR_9)
    goto err;
   VAR_9 = FUNC_3(VAR_8->regmap,
     VAR_2, 0x03, 0x03);
   if (VAR_9)
    goto err;
   VAR_9 = FUNC_3(VAR_8->regmap,
     VAR_3, 0x80, 0x80);
   if (VAR_9)
    goto err;
   VAR_9 = FUNC_3(VAR_8->regmap,
     VAR_2, 0x03, VAR_10 & 0x03);
   if (VAR_9)
    goto err;
  }
  break;
 default:
  VAR_9 = -VAR_0;
  goto err;
 }

 return 0;
err:
 return VAR_9;
}
