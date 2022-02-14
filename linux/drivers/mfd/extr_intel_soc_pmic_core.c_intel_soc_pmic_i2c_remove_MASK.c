
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_soc_pmic {int irq_chip_data; int irq; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct intel_soc_pmic* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_2)
{
 struct intel_soc_pmic *VAR_3 = FUNC_1(&VAR_2->dev);

 FUNC_5(VAR_3->irq, VAR_3->irq_chip_data);


 FUNC_2(&VAR_1);


 FUNC_4(VAR_0, FUNC_0(VAR_0));

 FUNC_3(&VAR_2->dev);

 return 0;
}
