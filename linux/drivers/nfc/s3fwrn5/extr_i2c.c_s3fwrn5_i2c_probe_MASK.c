
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3fwrn5_i2c_phy {int irq_skip; int ndev; struct i2c_client* i2c_dev; int gpio_fw_wake; int gpio_en; int mode; int mutex; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int ,int ,char*) ;
 struct s3fwrn5_i2c_phy* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,int ,int *,int ,int,int ,struct s3fwrn5_i2c_phy*) ;
 int VAR_9 ;
 int FUNC_3 (struct i2c_client*,struct s3fwrn5_i2c_phy*) ;
 int FUNC_4 (int *) ;
 int VAR_10 ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *,struct s3fwrn5_i2c_phy*,int *,int *,int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_11,
      const struct i2c_device_id *VAR_12)
{
 struct s3fwrn5_i2c_phy *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_1(&VAR_11->dev, sizeof(*VAR_13), VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_4(&VAR_13->mutex);
 VAR_13->mode = VAR_8;
 VAR_13->irq_skip = 1;

 VAR_13->i2c_dev = VAR_11;
 FUNC_3(VAR_11, VAR_13);

 VAR_14 = FUNC_5(VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_0(&VAR_13->i2c_dev->dev, VAR_13->gpio_en,
  VAR_2, "s3fwrn5_en");
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_0(&VAR_13->i2c_dev->dev, VAR_13->gpio_fw_wake,
  VAR_3, "s3fwrn5_fw_wake");
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_6(&VAR_13->ndev, VAR_13, &VAR_13->i2c_dev->dev, &VAR_9,
  VAR_7);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_14 = FUNC_2(&VAR_11->dev, VAR_13->i2c_dev->irq, ((void*)0),
  VAR_10, VAR_5 | VAR_4,
  VAR_6, VAR_13);
 if (VAR_14)
  FUNC_7(VAR_13->ndev);

 return VAR_14;
}
