
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_8__ {int clock_out; int i2c_address; } ;
struct mt2060_priv {int if1_freq; int sleep; scalar_t__ i2c_max_regs; struct i2c_client* client; int i2c; TYPE_1__ config; TYPE_1__* cfg; } ;
struct mt2060_platform_data {int if1; scalar_t__ i2c_write_max; int clock_out; struct dvb_frontend* dvb_frontend; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_11__ {struct mt2060_platform_data* platform_data; } ;
struct i2c_client {TYPE_4__ dev; int adapter; int addr; } ;
struct TYPE_10__ {int * release; } ;
struct TYPE_9__ {TYPE_3__ tuner_ops; } ;
struct dvb_frontend {struct mt2060_priv* tuner_priv; TYPE_2__ ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,char*,...) ;
 int FUNC_1 (TYPE_4__*,char*) ;
 int FUNC_2 (TYPE_4__*,char*) ;
 struct mt2060_priv* FUNC_3 (TYPE_4__*,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct mt2060_priv*) ;
 int FUNC_5 (TYPE_3__*,int *,int) ;
 int FUNC_6 (struct mt2060_priv*) ;
 int FUNC_7 (struct mt2060_priv*,int ,scalar_t__*) ;
 int VAR_7 ;
 int FUNC_8 (struct mt2060_priv*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct mt2060_platform_data *VAR_10 = VAR_8->dev.platform_data;
 struct dvb_frontend *VAR_11;
 struct mt2060_priv *VAR_12;
 int VAR_13;
 u8 VAR_14;

 FUNC_0(&VAR_8->dev, "\n");

 if (!VAR_10) {
  FUNC_1(&VAR_8->dev, "Cannot proceed without platform data\n");
  VAR_13 = -VAR_0;
  goto err;
 }

 VAR_12 = FUNC_3(&VAR_8->dev, sizeof(*VAR_12), VAR_3);
 if (!VAR_12) {
  VAR_13 = -VAR_2;
  goto err;
 }

 VAR_11 = VAR_10->dvb_frontend;
 VAR_12->config.i2c_address = VAR_8->addr;
 VAR_12->config.clock_out = VAR_10->clock_out;
 VAR_12->cfg = &VAR_12->config;
 VAR_12->i2c = VAR_8->adapter;
 VAR_12->if1_freq = VAR_10->if1 ? VAR_10->if1 : 1220;
 VAR_12->client = VAR_8;
 VAR_12->i2c_max_regs = VAR_10->i2c_write_max ? VAR_10->i2c_write_max - 1 : ~0;
 VAR_12->sleep = 1;

 VAR_13 = FUNC_7(VAR_12, VAR_6, &VAR_14);
 if (VAR_13) {
  VAR_13 = -VAR_1;
  goto err;
 }

 FUNC_0(&VAR_8->dev, "chip id=%02x\n", VAR_14);

 if (VAR_14 != VAR_4) {
  VAR_13 = -VAR_1;
  goto err;
 }


 VAR_13 = FUNC_8(VAR_12, VAR_5, 0x20);
 if (VAR_13)
  goto err;
 FUNC_6(VAR_12);
 VAR_13 = FUNC_8(VAR_12, VAR_5, 0xe8);
 if (VAR_13)
  goto err;

 FUNC_2(&VAR_8->dev, "Microtune MT2060 successfully identified\n");
 FUNC_5(&VAR_11->ops.tuner_ops, &VAR_7, sizeof(VAR_11->ops.tuner_ops));
 VAR_11->ops.tuner_ops.release = ((void*)0);
 VAR_11->tuner_priv = VAR_12;
 FUNC_4(VAR_8, VAR_12);

 return 0;
err:
 FUNC_0(&VAR_8->dev, "failed=%d\n", VAR_13);
 return VAR_13;
}
