
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dev; } ;
struct ab3100_regulator {int regreg; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int *,char*,int ) ;
 struct ab3100_regulator* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1)
{
 struct ab3100_regulator *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;
 u8 VAR_4;

 VAR_3 = FUNC_0(VAR_2->dev, 0, VAR_2->regreg,
      &VAR_4);
 if (VAR_3) {
  FUNC_2(&VAR_1->dev, "failed to get regid %d value\n",
    VAR_2->regreg);
  return VAR_3;
 }


 if (VAR_4 & VAR_0)
  return 0;

 VAR_4 |= VAR_0;

 VAR_3 = FUNC_1(VAR_2->dev, 0, VAR_2->regreg,
      VAR_4);
 if (VAR_3) {
  FUNC_2(&VAR_1->dev, "failed to set regid %d value\n",
    VAR_2->regreg);
  return VAR_3;
 }

 return 0;
}
