
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct microread_i2c_phy {int hdev; } ;
struct i2c_client {int irq; } ;


 int FUNC_0 (int ,struct microread_i2c_phy*) ;
 struct microread_i2c_phy* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct microread_i2c_phy *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->hdev);

 FUNC_0(VAR_0->irq, VAR_1);

 return 0;
}
