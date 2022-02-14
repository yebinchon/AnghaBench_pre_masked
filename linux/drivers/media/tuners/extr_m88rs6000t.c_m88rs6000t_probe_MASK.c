
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct regmap_config {int reg_bits; int val_bits; } ;
struct m88rs6000t_reg_val {int member_0; int member_1; int reg; int val; } ;
struct m88rs6000t_dev {struct i2c_client* client; int regmap; int cfg; } ;
struct m88rs6000t_config {struct dvb_frontend* fe; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {struct m88rs6000t_config* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_5__ {int tuner_ops; } ;
struct dvb_frontend {TYPE_1__ ops; struct m88rs6000t_dev* tuner_priv; } ;


 int FUNC_0 (struct m88rs6000t_reg_val const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 int FUNC_5 (TYPE_2__*,char*,...) ;
 int FUNC_6 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_7 (struct i2c_client*,struct m88rs6000t_dev*) ;
 int FUNC_8 (struct m88rs6000t_dev*) ;
 struct m88rs6000t_dev* FUNC_9 (int,int ) ;
 struct m88rs6000t_config VAR_3 ;
 int FUNC_10 (int *,struct m88rs6000t_config*,int) ;
 int FUNC_11 (int ,int,unsigned int*) ;
 int FUNC_12 (int ,int,int,int) ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 (int,int) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_4,
  const struct i2c_device_id *VAR_5)
{
 struct m88rs6000t_config *VAR_6 = VAR_4->dev.platform_data;
 struct dvb_frontend *VAR_7 = VAR_6->fe;
 struct m88rs6000t_dev *VAR_8;
 int VAR_9, VAR_10;
 unsigned int VAR_11;
 static const struct regmap_config VAR_12 = {
  .reg_bits = 8,
  .val_bits = 8,
 };
 static const struct m88rs6000t_reg_val VAR_13[] = {
  {0x10, 0xfb},
  {0x24, 0x38},
  {0x11, 0x0a},
  {0x12, 0x00},
  {0x2b, 0x1c},
  {0x44, 0x48},
  {0x54, 0x24},
  {0x55, 0x06},
  {0x59, 0x00},
  {0x5b, 0x4c},
  {0x60, 0x8b},
  {0x61, 0xf4},
  {0x65, 0x07},
  {0x6d, 0x6f},
  {0x6e, 0x31},
  {0x3c, 0xf3},
  {0x37, 0x0f},
  {0x48, 0x28},
  {0x49, 0xd8},
  {0x70, 0x66},
  {0x71, 0xCF},
  {0x72, 0x81},
  {0x73, 0xA7},
  {0x74, 0x4F},
  {0x75, 0xFC},
 };

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_1;
  FUNC_4(&VAR_4->dev, "kzalloc() failed\n");
  goto err;
 }

 FUNC_10(&VAR_8->cfg, VAR_6, sizeof(struct m88rs6000t_config));
 VAR_8->client = VAR_4;
 VAR_8->regmap = FUNC_6(VAR_4, &VAR_12);
 if (FUNC_1(VAR_8->regmap)) {
  VAR_9 = FUNC_2(VAR_8->regmap);
  goto err;
 }

 VAR_9 = FUNC_12(VAR_8->regmap, 0x11, 0x08, 0x08);
 if (VAR_9)
  goto err;
 FUNC_14(5000, 50000);
 VAR_9 = FUNC_12(VAR_8->regmap, 0x10, 0x01, 0x01);
 if (VAR_9)
  goto err;
 FUNC_14(10000, 50000);
 VAR_9 = FUNC_13(VAR_8->regmap, 0x07, 0x7d);
 if (VAR_9)
  goto err;
 VAR_9 = FUNC_13(VAR_8->regmap, 0x04, 0x01);
 if (VAR_9)
  goto err;


 VAR_9 = FUNC_11(VAR_8->regmap, 0x01, &VAR_11);
 if (VAR_9)
  goto err;
 FUNC_5(&VAR_8->client->dev, "chip_id=%02x\n", VAR_11);
 if (VAR_11 != 0x64) {
  VAR_9 = -VAR_0;
  goto err;
 }


 VAR_9 = FUNC_13(VAR_8->regmap, 0x05, 0x40);
 if (VAR_9)
  goto err;
 VAR_9 = FUNC_13(VAR_8->regmap, 0x11, 0x08);
 if (VAR_9)
  goto err;
 VAR_9 = FUNC_13(VAR_8->regmap, 0x15, 0x6c);
 if (VAR_9)
  goto err;
 VAR_9 = FUNC_13(VAR_8->regmap, 0x17, 0xc1);
 if (VAR_9)
  goto err;
 VAR_9 = FUNC_13(VAR_8->regmap, 0x17, 0x81);
 if (VAR_9)
  goto err;
 FUNC_14(10000, 50000);
 VAR_9 = FUNC_13(VAR_8->regmap, 0x05, 0x00);
 if (VAR_9)
  goto err;
 VAR_9 = FUNC_13(VAR_8->regmap, 0x11, 0x0a);
 if (VAR_9)
  goto err;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_13); VAR_10++) {
  VAR_9 = FUNC_13(VAR_8->regmap,
    VAR_13[VAR_10].reg, VAR_13[VAR_10].val);
  if (VAR_9)
   goto err;
 }

 FUNC_5(&VAR_8->client->dev, "Montage M88RS6000 internal tuner successfully identified\n");

 VAR_7->tuner_priv = VAR_8;
 FUNC_10(&VAR_7->ops.tuner_ops, &VAR_3,
   sizeof(struct dvb_tuner_ops));
 FUNC_7(VAR_4, VAR_8);
 return 0;
err:
 FUNC_3(&VAR_4->dev, "failed=%d\n", VAR_9);
 FUNC_8(VAR_8);
 return VAR_9;
}
