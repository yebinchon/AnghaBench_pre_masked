
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dev; } ;
struct ab3100_regulator {scalar_t__ regreg; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__,int*) ;
 int FUNC_1 (int ,int ,scalar_t__,int) ;
 int FUNC_2 (int *,char*,scalar_t__) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 struct ab3100_regulator* FUNC_5 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_6(struct regulator_dev *VAR_2)
{
 struct ab3100_regulator *VAR_3 = FUNC_5(VAR_2);
 int VAR_4;
 u8 VAR_5;





 FUNC_4("Called ab3100_disable_regulator\n");
 if (VAR_3->regreg == VAR_0) {
  FUNC_3(&VAR_2->dev, "disabling LDO D - shut down system\n");

  return FUNC_1(VAR_3->dev, 0,
        VAR_0, 0x00U);
 }




 VAR_4 = FUNC_0(VAR_3->dev, 0, VAR_3->regreg,
      &VAR_5);
 if (VAR_4) {
  FUNC_2(&VAR_2->dev, "unable to get register 0x%x\n",
   VAR_3->regreg);
  return VAR_4;
 }
 VAR_5 &= ~VAR_1;
 return FUNC_1(VAR_3->dev, 0, VAR_3->regreg,
       VAR_5);
}
