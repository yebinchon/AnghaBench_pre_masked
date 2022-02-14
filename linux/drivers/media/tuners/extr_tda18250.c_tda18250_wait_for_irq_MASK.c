
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
struct tda18250_dev {int regmap; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned int,int,char*) ;
 struct tda18250_dev* FUNC_1 (struct i2c_client*) ;
 unsigned long VAR_2 ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_3,
  int VAR_4, int VAR_5, u8 VAR_6)
{
 struct i2c_client *VAR_7 = VAR_3->tuner_priv;
 struct tda18250_dev *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;
 unsigned long VAR_10;
 bool VAR_11;
 unsigned int VAR_12;

 VAR_11 = 0;
 VAR_10 = VAR_2 + FUNC_3(VAR_4);
 while (!FUNC_6(VAR_2, VAR_10)) {

  VAR_9 = FUNC_5(VAR_8->regmap, VAR_1, &VAR_12);
  if (VAR_9)
   goto err;
  if ((VAR_12 & VAR_6) == VAR_6) {
   VAR_11 = 1;
   break;
  }
  FUNC_4(VAR_5);
 }

 FUNC_0(&VAR_7->dev, "waited IRQ (0x%02x) %d ms, triggered: %s", VAR_6,
   FUNC_2(VAR_2) -
   (FUNC_2(VAR_10) - VAR_4),
   VAR_11 ? "true" : "false");

 if (!VAR_11)
  return -VAR_0;

 return 0;
err:
 return VAR_9;
}
