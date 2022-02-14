
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_pmic_dev {int dev; int regmap_pmic; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_2(struct sec_pmic_dev *VAR_1)
{
 unsigned int VAR_2;


 if (!FUNC_1(VAR_1->regmap_pmic, VAR_0, &VAR_2))
  FUNC_0(VAR_1->dev, "Revision: 0x%x\n", VAR_2);
}
