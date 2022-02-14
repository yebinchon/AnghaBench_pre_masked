
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct microread_i2c_phy {int hard_fault; int hdev; TYPE_1__* i2c_dev; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct microread_i2c_phy*,struct sk_buff**) ;
 int FUNC_2 (int ,struct sk_buff*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct microread_i2c_phy *VAR_7 = VAR_6;
 struct sk_buff *VAR_8 = ((void*)0);
 int VAR_9;

 if (!VAR_7 || VAR_5 != VAR_7->i2c_dev->irq) {
  FUNC_0(1);
  return VAR_4;
 }

 if (VAR_7->hard_fault != 0)
  return VAR_3;

 VAR_9 = FUNC_1(VAR_7, &VAR_8);
 if (VAR_9 == -VAR_2) {
  VAR_7->hard_fault = VAR_9;

  FUNC_2(VAR_7->hdev, ((void*)0));

  return VAR_3;
 } else if ((VAR_9 == -VAR_1) || (VAR_9 == -VAR_0)) {
  return VAR_3;
 }

 FUNC_2(VAR_7->hdev, VAR_8);

 return VAR_3;
}
