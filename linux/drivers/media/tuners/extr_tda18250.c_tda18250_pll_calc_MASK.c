
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda18250_dev {int if_frequency; int xtal_freq; int regmap; } ;
struct i2c_client {int dev; } ;
struct dtv_frontend_properties {int frequency; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;





 int FUNC_0 (int *,char*,unsigned int,unsigned int,unsigned long,int,int,int) ;
 struct tda18250_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_2, u8 *VAR_3,
  u8 *VAR_4, u8 *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_2->tuner_priv;
 struct tda18250_dev *VAR_7 = FUNC_1(VAR_6);
 struct dtv_frontend_properties *VAR_8 = &VAR_2->dtv_property_cache;
 int VAR_9;
 unsigned int VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned long VAR_14;

 VAR_9 = FUNC_2(VAR_7->regmap, VAR_1, &VAR_10);
 if (VAR_9)
  goto err;

 VAR_11 = (VAR_10 & 0x70) >> 4;
 if (VAR_11 > 5)
  VAR_11 = 0;
 VAR_12 = 1 << (VAR_11 - 1);
 VAR_13 = VAR_10 & 0x0f;
 VAR_14 = VAR_12 * VAR_13 * ((VAR_8->frequency / 1000) + VAR_7->if_frequency);

 switch (VAR_7->xtal_freq) {
 case 132:
  *VAR_3 = 1;
  *VAR_4 = 0;
  *VAR_5 = (VAR_14 < 6622000) ? 0x05 : 0x02;
 break;
 case 131:
 case 130:
  *VAR_3 = 3;
  *VAR_4 = 1;
  *VAR_5 = (VAR_14 < 6622000) ? 0x05 : 0x02;
 break;
 case 129:
  if (VAR_14 < 6643000) {
   *VAR_3 = 2;
   *VAR_4 = 0;
   *VAR_5 = 0x05;
  } else if (VAR_14 < 6811000) {
   *VAR_3 = 2;
   *VAR_4 = 0;
   *VAR_5 = 0x06;
  } else {
   *VAR_3 = 3;
   *VAR_4 = 1;
   *VAR_5 = 0x02;
  }
 break;
 case 128:
  *VAR_3 = 2;
  *VAR_4 = 0;
  *VAR_5 = (VAR_14 < 6811000) ? 0x05 : 0x02;
 break;
 default:
  return -VAR_0;
 }

 FUNC_0(&VAR_6->dev,
   "lopd=%d scale=%u fvco=%lu, rdiv=%d ndiv=%d icp=%d",
   VAR_12, VAR_13, VAR_14, *VAR_3, *VAR_4, *VAR_5);
 return 0;
err:
 return VAR_9;
}
