
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda18250_dev {int regmap; } ;
struct i2c_client {int dev; } ;
struct dtv_frontend_properties {int frequency; int delivery_system; int bandwidth_hz; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;


 int FUNC_0 (int *,char*,...) ;
 struct tda18250_dev* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_frontend *VAR_13)
{
 struct i2c_client *VAR_14 = VAR_13->tuner_priv;
 struct tda18250_dev *VAR_15 = FUNC_1(VAR_14);
 struct dtv_frontend_properties *VAR_16 = &VAR_13->dtv_property_cache;
 int VAR_17;
 u8 VAR_18, VAR_19;

 FUNC_0(&VAR_14->dev, "\n");

 VAR_17 = FUNC_3(VAR_15->regmap, VAR_7, 0x87, 0x06);
 if (VAR_17)
  goto err;

 VAR_18 = ((VAR_16->frequency < 100000000) &&
   ((VAR_16->delivery_system == VAR_11) ||
   (VAR_16->delivery_system == VAR_12)) &&
   (VAR_16->bandwidth_hz == 6000000)) ? 0x80 : 0x00;
 VAR_17 = FUNC_2(VAR_15->regmap, VAR_10, VAR_18);
 if (VAR_17)
  goto err;


 switch (VAR_16->delivery_system) {
 case 130:
 case 129:
 case 128:
  VAR_18 = 4;
  break;
 default:
  switch (VAR_16->bandwidth_hz) {
  case 6000000:
   VAR_18 = (VAR_16->frequency < 800000000) ? 6 : 4;
   break;
  default:
   VAR_18 = (VAR_16->frequency < 100000000) ? 2 : 3;
   break;
  }
  break;
 }

 VAR_17 = FUNC_3(VAR_15->regmap, VAR_0, 0x07, VAR_18);
 if (VAR_17)
  goto err;


 switch (VAR_16->delivery_system) {
 case 130:
 case 129:
 case 128:
  VAR_18 = (VAR_16->frequency < 320000000) ? 20 : 16;
  VAR_19 = (VAR_16->frequency < 320000000) ? 22 : 18;
  break;
 default:
  switch (VAR_16->bandwidth_hz) {
  case 6000000:
   if (VAR_16->frequency < 600000000) {
    VAR_18 = 18;
    VAR_19 = 22;
   } else if (VAR_16->frequency < 800000000) {
    VAR_18 = 16;
    VAR_19 = 20;
   } else {
    VAR_18 = 14;
    VAR_19 = 16;
   }
   break;
  default:
   VAR_18 = (VAR_16->frequency < 320000000) ? 16 : 18;
   VAR_19 = (VAR_16->frequency < 320000000) ? 18 : 20;
   break;
  }
  break;
 }
 VAR_17 = FUNC_3(VAR_15->regmap, VAR_9, 0x1f, VAR_19+8);
 if (VAR_17)
  goto err;
 VAR_17 = FUNC_3(VAR_15->regmap, VAR_3, 0x1f, VAR_18);
 if (VAR_17)
  goto err;
 VAR_17 = FUNC_3(VAR_15->regmap, VAR_4, 0x1f, VAR_19);
 if (VAR_17)
  goto err;

 switch (VAR_16->delivery_system) {
 case 130:
 case 129:
 case 128:
  VAR_18 = 98;
  break;
 default:
  VAR_18 = 90;
  break;
 }
 VAR_17 = FUNC_3(VAR_15->regmap, VAR_5, 0xf8, VAR_18);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_3(VAR_15->regmap, VAR_2, 0x60,
   (VAR_16->frequency > 800000000) ? 0x40 : 0x20);
 if (VAR_17)
  goto err;


 switch (VAR_16->delivery_system) {
 case 130:
 case 129:
 case 128:
  VAR_18 = (VAR_16->frequency < 320000000) ? 5 : 7;
  VAR_19 = (VAR_16->frequency < 320000000) ? 10 : 12;
  break;
 default:
  VAR_18 = 7;
  VAR_19 = 12;
  break;
 }
 VAR_17 = FUNC_2(VAR_15->regmap, VAR_6, (VAR_18 << 4) | VAR_19);
 if (VAR_17)
  goto err;


 switch (VAR_16->delivery_system) {
 case 130:
 case 129:
 case 128:
  if (VAR_16->bandwidth_hz == 8000000)
   VAR_18 = 0x04;
  else
   VAR_18 = (VAR_16->frequency < 320000000) ? 0x04 : 0x02;
  break;
 default:
  if (VAR_16->bandwidth_hz == 6000000)
   VAR_18 = ((VAR_16->frequency > 172544000) &&
    (VAR_16->frequency < 320000000)) ? 0x04 : 0x02;
  else
   VAR_18 = ((VAR_16->frequency > 320000000) &&
    (VAR_16->frequency < 600000000)) ? 0x02 : 0x04;
  break;
 }
 VAR_17 = FUNC_3(VAR_15->regmap, VAR_8, 0x06, VAR_18);
 if (VAR_17)
  goto err;

 switch (VAR_16->delivery_system) {
 case 130:
 case 129:
 case 128:
  VAR_18 = 0;
  break;
 default:
  VAR_18 = (VAR_16->frequency < 600000000) ? 0 : 3;
  break;
 }
 VAR_17 = FUNC_3(VAR_15->regmap, VAR_5, 0x03, VAR_18);
 if (VAR_17)
  goto err;

 VAR_18 = 0x09;
 switch (VAR_16->delivery_system) {
 case 130:
 case 129:
 case 128:
  if (VAR_16->bandwidth_hz == 8000000)
   VAR_18 = 0x0c;
  break;
 default:
  VAR_18 = 0x0c;
  break;
 }
 VAR_17 = FUNC_3(VAR_15->regmap, VAR_1, 0x3f, VAR_18);
 if (VAR_17)
  goto err;

 return 0;
err:
 FUNC_0(&VAR_14->dev, "failed=%d", VAR_17);
 return VAR_17;
}
