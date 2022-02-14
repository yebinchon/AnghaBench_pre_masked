
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microread_i2c_phy {int hdev; struct i2c_client* i2c_dev; } ;
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
 int FUNC_0 (int *,char*,struct i2c_client*) ;
 struct microread_i2c_phy* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int ,struct microread_i2c_phy*) ;
 int VAR_9 ;
 int FUNC_3 (struct i2c_client*,struct microread_i2c_phy*) ;
 int VAR_10 ;
 int FUNC_4 (struct microread_i2c_phy*,int *,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,char*) ;
 int FUNC_7 (int ,int *,int ,int,int ,struct microread_i2c_phy*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_11,
          const struct i2c_device_id *VAR_12)
{
 struct microread_i2c_phy *VAR_13;
 int VAR_14;

 FUNC_0(&VAR_11->dev, "client %p\n", VAR_11);

 VAR_13 = FUNC_1(&VAR_11->dev, sizeof(struct microread_i2c_phy),
      VAR_1);
 if (!VAR_13)
  return -VAR_0;

 FUNC_3(VAR_11, VAR_13);
 VAR_13->i2c_dev = VAR_11;

 VAR_14 = FUNC_7(VAR_11->irq, ((void*)0), VAR_10,
     VAR_3 | VAR_2,
     VAR_5, VAR_13);
 if (VAR_14) {
  FUNC_5(&VAR_11->dev, "Unable to register IRQ handler\n");
  return VAR_14;
 }

 VAR_14 = FUNC_4(VAR_13, &VAR_9, VAR_4,
       VAR_6,
       VAR_7,
       VAR_8, &VAR_13->hdev);
 if (VAR_14 < 0)
  goto err_irq;

 FUNC_6(&VAR_11->dev, "Probed\n");

 return 0;

err_irq:
 FUNC_2(VAR_11->irq, VAR_13);

 return VAR_14;
}
