
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nxp_nci_i2c_phy {int ndev; void* gpiod_fw; void* gpiod_en; struct i2c_client* i2c_dev; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; int irq; int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (void*) ;
 int VAR_9 ;
 int FUNC_2 (struct device*,int ) ;
 void* FUNC_3 (struct device*,char*,int ) ;
 struct nxp_nci_i2c_phy* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_10 ;
 int FUNC_6 (struct i2c_client*,struct nxp_nci_i2c_phy*) ;
 int FUNC_7 (struct device*,char*) ;
 int VAR_11 ;
 int FUNC_8 (struct nxp_nci_i2c_phy*,struct device*,int *,int ,int *) ;
 int FUNC_9 (int ,int *,int ,int,int ,struct nxp_nci_i2c_phy*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_12,
       const struct i2c_device_id *VAR_13)
{
 struct device *VAR_14 = &VAR_12->dev;
 struct nxp_nci_i2c_phy *VAR_15;
 int VAR_16;

 if (!FUNC_5(VAR_12->adapter, VAR_4)) {
  FUNC_7(&VAR_12->dev, "Need I2C_FUNC_I2C\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_4(&VAR_12->dev, sizeof(struct nxp_nci_i2c_phy),
      VAR_2);
 if (!VAR_15)
  return -VAR_1;

 VAR_15->i2c_dev = VAR_12;
 FUNC_6(VAR_12, VAR_15);

 VAR_16 = FUNC_2(VAR_14, VAR_9);
 if (VAR_16)
  return VAR_16;

 VAR_15->gpiod_en = FUNC_3(VAR_14, "enable", VAR_3);
 if (FUNC_0(VAR_15->gpiod_en)) {
  FUNC_7(VAR_14, "Failed to get EN gpio\n");
  return FUNC_1(VAR_15->gpiod_en);
 }

 VAR_15->gpiod_fw = FUNC_3(VAR_14, "firmware", VAR_3);
 if (FUNC_0(VAR_15->gpiod_fw)) {
  FUNC_7(VAR_14, "Failed to get FW gpio\n");
  return FUNC_1(VAR_15->gpiod_fw);
 }

 VAR_16 = FUNC_8(VAR_15, &VAR_12->dev, &VAR_10,
     VAR_8, &VAR_15->ndev);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_16 = FUNC_9(VAR_12->irq, ((void*)0),
     VAR_11,
     VAR_6 | VAR_5,
     VAR_7, VAR_15);
 if (VAR_16 < 0)
  FUNC_7(&VAR_12->dev, "Unable to register IRQ handler\n");

 return VAR_16;
}
