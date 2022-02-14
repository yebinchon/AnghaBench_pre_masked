
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tda18212_dev {struct i2c_client* client; int regmap; int cfg; } ;
struct tda18212_config {struct dvb_frontend* fe; } ;
struct regmap_config {int reg_bits; int val_bits; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {struct tda18212_config* platform_data; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct dvb_tuner_ops {int dummy; } ;
struct TYPE_5__ {int tuner_ops; int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;} ;
struct dvb_frontend {TYPE_1__ ops; struct tda18212_dev* tuner_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,char*,int) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*,char*,char*) ;
 int FUNC_5 (struct i2c_client*,struct regmap_config const*) ;
 int FUNC_6 (struct i2c_client*,struct tda18212_dev*) ;
 int FUNC_7 (struct tda18212_dev*) ;
 struct tda18212_dev* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,struct tda18212_config*,int) ;
 int FUNC_10 (int ,int,unsigned int*) ;
 int FUNC_11 (struct dvb_frontend*,int) ;
 int FUNC_12 (struct dvb_frontend*,int) ;
 struct tda18212_config VAR_3 ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_4,
  const struct i2c_device_id *VAR_5)
{
 struct tda18212_config *VAR_6 = VAR_4->dev.platform_data;
 struct dvb_frontend *VAR_7 = VAR_6->fe;
 struct tda18212_dev *VAR_8;
 int VAR_9;
 unsigned int VAR_10;
 char *VAR_11;
 static const struct regmap_config VAR_12 = {
  .reg_bits = 8,
  .val_bits = 8,
 };

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_9 = -VAR_1;
  FUNC_3(&VAR_4->dev, "kzalloc() failed\n");
  goto err;
 }

 FUNC_9(&VAR_8->cfg, VAR_6, sizeof(struct tda18212_config));
 VAR_8->client = VAR_4;
 VAR_8->regmap = FUNC_5(VAR_4, &VAR_12);
 if (FUNC_0(VAR_8->regmap)) {
  VAR_9 = FUNC_1(VAR_8->regmap);
  goto err;
 }


 if (VAR_7->ops.i2c_gate_ctrl)
  VAR_7->ops.i2c_gate_ctrl(VAR_7, 1);

 VAR_9 = FUNC_10(VAR_8->regmap, 0x00, &VAR_10);
 FUNC_2(&VAR_8->client->dev, "chip_id=%02x\n", VAR_10);

 if (VAR_7->ops.i2c_gate_ctrl)
  VAR_7->ops.i2c_gate_ctrl(VAR_7, 0);

 if (VAR_9)
  goto err;

 switch (VAR_10) {
 case 0xc7:
  VAR_11 = "M";
  break;
 case 0x47:
  VAR_11 = "S";
  break;
 default:
  VAR_9 = -VAR_0;
  goto err;
 }

 FUNC_4(&VAR_8->client->dev,
   "NXP TDA18212HN/%s successfully identified\n", VAR_11);

 VAR_7->tuner_priv = VAR_8;
 FUNC_9(&VAR_7->ops.tuner_ops, &VAR_3,
   sizeof(struct dvb_tuner_ops));
 FUNC_6(VAR_4, VAR_8);

 return 0;
err:
 FUNC_2(&VAR_4->dev, "failed=%d\n", VAR_9);
 FUNC_7(VAR_8);
 return VAR_9;
}
