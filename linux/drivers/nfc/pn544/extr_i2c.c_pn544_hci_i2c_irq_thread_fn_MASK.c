
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pn544_i2c_phy {int hard_fault; scalar_t__ run_mode; int hdev; int fw_work; int fw_cmd_result; struct i2c_client* i2c_dev; } ;
struct i2c_client {int irq; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,struct sk_buff*) ;
 int FUNC_3 (struct pn544_i2c_phy*) ;
 int FUNC_4 (struct pn544_i2c_phy*,struct sk_buff**) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_6, void *VAR_7)
{
 struct pn544_i2c_phy *VAR_8 = VAR_7;
 struct i2c_client *VAR_9;
 struct sk_buff *VAR_10 = ((void*)0);
 int VAR_11;

 if (!VAR_8 || VAR_6 != VAR_8->i2c_dev->irq) {
  FUNC_0(1);
  return VAR_4;
 }

 VAR_9 = VAR_8->i2c_dev;
 FUNC_1(&VAR_9->dev, "IRQ\n");

 if (VAR_8->hard_fault != 0)
  return VAR_3;

 if (VAR_8->run_mode == VAR_5) {
  VAR_8->fw_cmd_result = FUNC_3(VAR_8);
  FUNC_5(&VAR_8->fw_work);
 } else {
  VAR_11 = FUNC_4(VAR_8, &VAR_10);
  if (VAR_11 == -VAR_2) {
   VAR_8->hard_fault = VAR_11;

   FUNC_2(VAR_8->hdev, ((void*)0));

   return VAR_3;
  } else if ((VAR_11 == -VAR_1) || (VAR_11 == -VAR_0)) {
   return VAR_3;
  }

  FUNC_2(VAR_8->hdev, VAR_10);
 }
 return VAR_3;
}
