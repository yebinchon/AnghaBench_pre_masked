
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct tda18250_dev {scalar_t__ if_atsc; scalar_t__ if_dvbt_6; scalar_t__ if_dvbt_7; scalar_t__ if_dvbt_8; scalar_t__ if_dvbc_6; scalar_t__ if_dvbc_8; scalar_t__ if_frequency; int regmap; } ;
struct i2c_client {int dev; } ;
struct dtv_frontend_properties {int delivery_system; int frequency; int bandwidth_hz; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; struct i2c_client* tuner_priv; } ;



 size_t FUNC_0 (scalar_t__,int) ;





 int VAR_0 ;

 size_t const VAR_1 ;
 size_t const VAR_2 ;
 size_t const VAR_3 ;
 size_t const VAR_4 ;
 int VAR_5 ;
 size_t const VAR_6 ;
 size_t const VAR_7 ;
 size_t const VAR_8 ;
 size_t const VAR_9 ;
 size_t const VAR_10 ;






 int VAR_11 ;
 int FUNC_1 (int *,char*,scalar_t__,...) ;
 int FUNC_2 (int *,char*,int) ;
 struct tda18250_dev* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int ,size_t*,int) ;
 int FUNC_6 (int ,size_t const,int) ;
 int FUNC_7 (int ,size_t const,size_t const,size_t const) ;
 int FUNC_8 (struct dvb_frontend*,size_t*,size_t*,size_t*) ;
 int FUNC_9 (struct dvb_frontend*) ;
 int FUNC_10 (struct dvb_frontend*,int,int,int) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_12)
{
 struct i2c_client *VAR_13 = VAR_12->tuner_priv;
 struct tda18250_dev *VAR_14 = FUNC_3(VAR_13);
 struct dtv_frontend_properties *VAR_15 = &VAR_12->dtv_property_cache;
 u32 VAR_16;
 int VAR_17;
 unsigned int VAR_18, VAR_19;
 u8 VAR_20;
 u8 VAR_21[3];
 static const u8 VAR_22[][16] = {
  [0] = { 0x22, 0x23, 0x24, 0x21, 0x0d, 0x0c, 0x0f, 0x14,
        0x0e, 0x12, 0x58, 0x59, 0x1a, 0x19, 0x1e, 0x30 },
  [1] = { 0x77, 0xff, 0xff, 0x87, 0xf0, 0x78, 0x07, 0xe0,
        0x60, 0x0f, 0x60, 0x0f, 0x33, 0x30, 0x80, 0x06 },
  [2] = { 0x51, 0x03, 0x83, 0x82, 0x40, 0x48, 0x01, 0xe0,
        0x60, 0x0f, 0x60, 0x05, 0x03, 0x10, 0x00, 0x04 },
  [3] = { 0x52, 0x03, 0x85, 0x82, 0x40, 0x48, 0x01, 0xe0,
        0x60, 0x0f, 0x60, 0x05, 0x03, 0x10, 0x00, 0x04 },
  [4] = { 0x53, 0x03, 0x87, 0x82, 0x40, 0x48, 0x06, 0xe0,
        0x60, 0x07, 0x60, 0x05, 0x03, 0x10, 0x00, 0x04 },
  [5] = { 0x32, 0x05, 0x86, 0x82, 0x50, 0x00, 0x06, 0x60,
        0x40, 0x0e, 0x60, 0x05, 0x33, 0x10, 0x00, 0x04 },
  [6] = { 0x53, 0x03, 0x88, 0x82, 0x50, 0x00, 0x06, 0x60,
        0x40, 0x0e, 0x60, 0x05, 0x33, 0x10, 0x00, 0x04 },
  [7] = { 0x51, 0x03, 0x83, 0x82, 0x40, 0x48, 0x01, 0xe0,
        0x40, 0x0e, 0x60, 0x05, 0x03, 0x00, 0x80, 0x04 },
 };

 FUNC_1(&VAR_13->dev,
   "delivery_system=%d frequency=%u bandwidth_hz=%u",
   VAR_15->delivery_system, VAR_15->frequency, VAR_15->bandwidth_hz);


 switch (VAR_15->delivery_system) {
 case 132:
  VAR_19 = 7;
  VAR_16 = VAR_14->if_atsc;
  break;
 case 129:
 case 128:
  if (VAR_15->bandwidth_hz == 0) {
   VAR_17 = -VAR_0;
   goto err;
  } else if (VAR_15->bandwidth_hz <= 6000000) {
   VAR_19 = 2;
   VAR_16 = VAR_14->if_dvbt_6;
  } else if (VAR_15->bandwidth_hz <= 7000000) {
   VAR_19 = 3;
   VAR_16 = VAR_14->if_dvbt_7;
  } else if (VAR_15->bandwidth_hz <= 8000000) {
   VAR_19 = 4;
   VAR_16 = VAR_14->if_dvbt_8;
  } else {
   VAR_17 = -VAR_0;
   goto err;
  }
  break;
 case 131:
 case 130:
  if (VAR_15->bandwidth_hz == 0) {
   VAR_17 = -VAR_0;
   goto err;
  } else if (VAR_15->bandwidth_hz <= 6000000) {
   VAR_19 = 5;
   VAR_16 = VAR_14->if_dvbc_6;
  } else if (VAR_15->bandwidth_hz <= 8000000) {
   VAR_19 = 6;
   VAR_16 = VAR_14->if_dvbc_8;
  } else {
   VAR_17 = -VAR_0;
   goto err;
  }
  break;
 default:
  VAR_17 = -VAR_0;
  FUNC_2(&VAR_13->dev, "unsupported delivery system=%d",
    VAR_15->delivery_system);
  goto err;
 }


 for (VAR_18 = 0; VAR_18 < 16; VAR_18++) {
  VAR_17 = FUNC_7(VAR_14->regmap, VAR_22[0][VAR_18],
    VAR_22[1][VAR_18], VAR_22[VAR_19][VAR_18]);
  if (VAR_17)
   goto err;
 }


 if (VAR_14->if_frequency != VAR_16) {
  VAR_20 = FUNC_0(VAR_16, 50);
  VAR_17 = FUNC_6(VAR_14->regmap, VAR_4, VAR_20);
  if (VAR_17)
   goto err;
  VAR_14->if_frequency = VAR_16;
  FUNC_1(&VAR_13->dev, "set IF=%u kHz", VAR_16);

 }

 VAR_17 = FUNC_9(VAR_12);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_7(VAR_14->regmap, VAR_3, 0x03, 0x01);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_7(VAR_14->regmap, VAR_2, 0x40, 0x00);
 if (VAR_17)
  goto err;


 VAR_21[0] = ((VAR_15->frequency / 1000) >> 16) & 0xff;
 VAR_21[1] = ((VAR_15->frequency / 1000) >> 8) & 0xff;
 VAR_21[2] = ((VAR_15->frequency / 1000) >> 0) & 0xff;
 VAR_17 = FUNC_5(VAR_14->regmap, VAR_5, VAR_21, 3);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_6(VAR_14->regmap, VAR_1, VAR_11);
 if (VAR_17)
  goto err;


 VAR_17 = FUNC_6(VAR_14->regmap, VAR_6, 0x01);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_6(VAR_14->regmap, VAR_7, 0x01);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_10(VAR_12, 500, 10, VAR_11);
 if (VAR_17)
  goto err;


 VAR_17 = FUNC_8(VAR_12, &VAR_21[0], &VAR_21[1], &VAR_21[2]);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_7(VAR_14->regmap, VAR_10, 0xe0,
   (VAR_21[0] << 6) | (VAR_21[1] << 5));
 if (VAR_17)
  goto err;


 VAR_17 = FUNC_6(VAR_14->regmap, VAR_1, VAR_11);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_7(VAR_14->regmap, VAR_9, 0x07, 0x00);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_7(VAR_14->regmap, VAR_8, 0x03, 0x00);
 if (VAR_17)
  goto err;


 VAR_17 = FUNC_6(VAR_14->regmap, VAR_6, 0x01);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_6(VAR_14->regmap, VAR_7, 0x01);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_10(VAR_12, 500, 10, VAR_11);
 if (VAR_17)
  goto err;


 FUNC_4(20);

 VAR_17 = FUNC_7(VAR_14->regmap, VAR_7, 0x04, 0x04);
 if (VAR_17)
  goto err;

 FUNC_4(20);


 VAR_17 = FUNC_7(VAR_14->regmap, VAR_3, 0x03, 0x03);
 if (VAR_17)
  goto err;

 VAR_17 = FUNC_7(VAR_14->regmap, VAR_2, 0x40, 0x40);
 if (VAR_17)
  goto err;


 VAR_17 = FUNC_7(VAR_14->regmap, VAR_9, 0x07, VAR_21[2]);

 return 0;
err:
 return VAR_17;
}
