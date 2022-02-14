
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tda18250_dev {int warm; size_t xtal_freq; int regmap; scalar_t__ loopthrough; } ;
struct i2c_client {int dev; } ;
struct dvb_frontend {struct i2c_client* tuner_priv; } ;


 int FUNC_0 (int const**) ;
 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_1 (int *,char*,...) ;
 struct tda18250_dev* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int const*,int) ;
 int FUNC_5 (int ,int const,int const) ;
 int FUNC_6 (int ,int const,int,int) ;
 int FUNC_7 (struct dvb_frontend*,int ) ;
 int FUNC_8 (struct dvb_frontend*,int,int,int) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend *VAR_7)
{
 struct i2c_client *VAR_8 = VAR_7->tuner_priv;
 struct tda18250_dev *VAR_9 = FUNC_2(VAR_8);
 int VAR_10, VAR_11;


 static const u8 VAR_12[][2] = {
  { 166, 0xc7 },
  { 165, 0x5d },
  { 164, 0x40 },
  { 163, 0x0e },
  { 162, 0x47 },
  { 161, 0x4e },
  { 160, 0x26 },
  { 159, 0x60 },
  { 158, 0x37 },
  { 157, 0x09 },
  { 156, 0x00 },
  { 155, 0x29 },
  { 154, 0x06 },
  { 153, 0xc6 },
  { 152, 0x00 },
  { 151, 0x75 },
  { 150, 0x06 },
  { 149, 0x07 },
  { 148, 0x0e },
  { 147, 0x00 },
  { 146, 0x00 },
  { 145, 0x55 },
  { 144, 0xa7 },
  { 143, 0x85 },
  { 142, 0x87 },
  { 141, 0xc0 },
  { 140, 0x40 },
  { 139, 0xc0 },
  { 138, 0x0c },
  { 137, 0x64 },
  { 136, 0x30 },
  { 135, 0x05 },
  { 134, 0x07 },
  { 133, 0x00 },
 };


 static const u8 VAR_13[][5] = {

  [132] = { 0x3e, 0x80, 0x50, 0x00, 0x20 },
  [131] = { 0x5d, 0xc0, 0xec, 0x00, 0x18 },
  [130] = { 0x61, 0xa8, 0xec, 0x80, 0x19 },
  [129] = { 0x69, 0x78, 0x8d, 0x80, 0x1b },
  [128] = { 0x75, 0x30, 0x8f, 0x00, 0x1e },
 };

 FUNC_1(&VAR_8->dev, "\n");

 VAR_10 = FUNC_7(VAR_7, VAR_6);
 if (VAR_10)
  goto err;

 FUNC_3(20);

 if (VAR_9->warm)
  goto warm;


 for (VAR_11 = 0; VAR_11 < FUNC_0(VAR_12); VAR_11++) {
  VAR_10 = FUNC_5(VAR_9->regmap, VAR_12[VAR_11][0],
    VAR_12[VAR_11][1]);
  if (VAR_10)
   goto err;
 }


 VAR_10 = FUNC_4(VAR_9->regmap, VAR_3,
   VAR_13[VAR_9->xtal_freq], 5);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_6(VAR_9->regmap, 162, 0x80,
   VAR_9->loopthrough ? 0x00 : 0x80);
 if (VAR_10)
  goto err;


 VAR_10 = FUNC_5(VAR_9->regmap, VAR_0, VAR_5);
 if (VAR_10)
  goto err;


 VAR_10 = FUNC_5(VAR_9->regmap, VAR_1, 0x70);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_9->regmap, VAR_2, 0x01);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_8(VAR_7, 500, 10, VAR_5);
 if (VAR_10)
  goto err;


 VAR_10 = FUNC_5(VAR_9->regmap, VAR_1, 0x02);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_5(VAR_9->regmap, VAR_2, 0x01);
 if (VAR_10)
  goto err;

 VAR_10 = FUNC_8(VAR_7, 500, 10, VAR_4);
 if (VAR_10)
  goto err;

 VAR_9->warm = 1;

warm:

 VAR_10 = FUNC_6(VAR_9->regmap, 166, 0x80, 0x00);
 if (VAR_10)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_8->dev, "failed=%d", VAR_10);
 return VAR_10;
}
