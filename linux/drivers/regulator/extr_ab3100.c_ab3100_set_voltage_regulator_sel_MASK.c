
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct regulator_dev {int dev; } ;
struct ab3100_regulator {int regreg; int dev; } ;


 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int *,char*,int ) ;
 struct ab3100_regulator* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_0,
         unsigned VAR_1)
{
 struct ab3100_regulator *VAR_2 = FUNC_3(VAR_0);
 u8 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2->dev, 0,
      VAR_2->regreg, &VAR_3);
 if (VAR_4) {
  FUNC_2(&VAR_0->dev,
    "failed to get regulator register %02x\n",
    VAR_2->regreg);
  return VAR_4;
 }


 VAR_3 &= ~0xE0;
 VAR_3 |= (VAR_1 << 5);

 VAR_4 = FUNC_1(VAR_2->dev, 0,
      VAR_2->regreg, VAR_3);
 if (VAR_4)
  FUNC_2(&VAR_0->dev, "failed to set regulator register %02x\n",
   VAR_2->regreg);

 return VAR_4;
}
