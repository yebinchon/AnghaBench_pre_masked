
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct regulator_dev {TYPE_1__* desc; int dev; } ;
struct ab3100_regulator {int regreg; int dev; } ;
struct TYPE_2__ {int n_voltages; int* volt_table; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int*) ;
 int FUNC_1 (int *,char*,int ) ;
 int FUNC_2 (int *,char*,int ) ;
 struct ab3100_regulator* FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_1)
{
 struct ab3100_regulator *VAR_2 = FUNC_3(VAR_1);
 u8 VAR_3;
 int VAR_4;





 VAR_4 = FUNC_0(VAR_2->dev, 0,
      VAR_2->regreg, &VAR_3);
 if (VAR_4) {
  FUNC_2(&VAR_1->dev,
    "failed to get regulator value in register %02x\n",
    VAR_2->regreg);
  return VAR_4;
 }


 VAR_3 &= 0xE0;
 VAR_3 >>= 5;

 if (VAR_3 >= VAR_1->desc->n_voltages) {
  FUNC_1(&VAR_1->dev,
   "regulator register %02x contains an illegal voltage setting\n",
   VAR_2->regreg);
  return -VAR_0;
 }

 return VAR_1->desc->volt_table[VAR_3];
}
