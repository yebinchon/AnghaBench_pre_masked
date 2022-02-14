
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pn533_i2c_phy {int hard_fault; int priv; int aborted; struct i2c_client* i2c_dev; } ;
struct i2c_client {int irq; int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pn533_i2c_phy*,struct sk_buff**) ;
 int FUNC_3 (int ,struct sk_buff*,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 struct pn533_i2c_phy *VAR_8 = VAR_7;
 struct i2c_client *VAR_9;
 struct sk_buff *VAR_10 = ((void*)0);
 int VAR_11;

 if (!VAR_8 || VAR_6 != VAR_8->i2c_dev->irq) {
  FUNC_0(1);
  return VAR_5;
 }

 VAR_9 = VAR_8->i2c_dev;
 FUNC_1(&VAR_9->dev, "IRQ\n");

 if (VAR_8->hard_fault != 0)
  return VAR_4;

 VAR_11 = FUNC_2(VAR_8, &VAR_10);
 if (VAR_11 == -VAR_3) {
  VAR_8->hard_fault = VAR_11;

  FUNC_3(VAR_8->priv, ((void*)0), -VAR_3);

  return VAR_4;
 } else if ((VAR_11 == -VAR_2) || (VAR_11 == -VAR_0) || (VAR_11 == -VAR_1)) {
  return VAR_4;
 }

 if (!VAR_8->aborted)
  FUNC_3(VAR_8->priv, VAR_10, 0);

 return VAR_4;
}
