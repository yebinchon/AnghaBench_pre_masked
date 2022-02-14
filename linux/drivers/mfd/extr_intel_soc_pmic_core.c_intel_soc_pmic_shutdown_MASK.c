
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_soc_pmic {int irq; } ;
struct i2c_client {int dev; } ;


 struct intel_soc_pmic* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0)
{
 struct intel_soc_pmic *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_1(VAR_1->irq);

 return;
}
