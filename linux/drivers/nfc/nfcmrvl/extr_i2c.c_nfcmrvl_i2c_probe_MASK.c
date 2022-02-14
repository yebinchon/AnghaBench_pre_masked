
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct nfcmrvl_platform_data {int irq_polarity; int irq; } ;
struct nfcmrvl_i2c_drv_data {TYPE_1__* priv; struct i2c_client* i2c; TYPE_2__* dev; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_9__ {scalar_t__ of_node; struct nfcmrvl_platform_data* platform_data; } ;
struct i2c_client {TYPE_2__ dev; int adapter; } ;
struct TYPE_8__ {int support_fw_dnld; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_1__*) ;
 struct nfcmrvl_i2c_drv_data* FUNC_2 (TYPE_2__*,int,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int *,int ,int,char*,struct nfcmrvl_i2c_drv_data*) ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int FUNC_5 (struct i2c_client*,struct nfcmrvl_i2c_drv_data*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (scalar_t__,struct nfcmrvl_platform_data*) ;
 TYPE_1__* FUNC_8 (int ,struct nfcmrvl_i2c_drv_data*,int *,TYPE_2__*,struct nfcmrvl_platform_data*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_9,
        const struct i2c_device_id *VAR_10)
{
 struct nfcmrvl_i2c_drv_data *VAR_11;
 struct nfcmrvl_platform_data *VAR_12;
 struct nfcmrvl_platform_data VAR_13;
 int VAR_14;

 if (!FUNC_4(VAR_9->adapter, VAR_4)) {
  FUNC_6(&VAR_9->dev, "Need I2C_FUNC_I2C\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_2(&VAR_9->dev, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->i2c = VAR_9;
 VAR_11->dev = &VAR_9->dev;
 VAR_11->priv = ((void*)0);

 FUNC_5(VAR_9, VAR_11);

 VAR_12 = VAR_9->dev.platform_data;

 if (!VAR_12 && VAR_9->dev.of_node)
  if (FUNC_7(VAR_9->dev.of_node, &VAR_13) == 0)
   VAR_12 = &VAR_13;

 if (!VAR_12)
  return -VAR_0;


 VAR_14 = FUNC_3(&VAR_11->i2c->dev, VAR_12->irq,
     ((void*)0), VAR_8,
     VAR_12->irq_polarity | VAR_5,
     "nfcmrvl_i2c_int", VAR_11);
 if (VAR_14 < 0) {
  FUNC_6(&VAR_11->i2c->dev,
   "Unable to register IRQ handler\n");
  return VAR_14;
 }

 VAR_11->priv = FUNC_8(VAR_6,
        VAR_11, &VAR_7,
        &VAR_11->i2c->dev, VAR_12);

 if (FUNC_0(VAR_11->priv))
  return FUNC_1(VAR_11->priv);

 VAR_11->priv->support_fw_dnld = 1;

 return 0;
}
