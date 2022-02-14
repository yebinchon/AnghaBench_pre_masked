
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_soc_pmic {int irq; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (int ) ;
 struct intel_soc_pmic* FUNC_1 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_2(struct i2c_client *VAR_0)
{
 struct intel_soc_pmic *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->irq);
}
