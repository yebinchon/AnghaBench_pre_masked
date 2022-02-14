
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator_dev {TYPE_1__* desc; int dev; int regmap; } ;
struct TYPE_2__ {int enable_reg; int enable_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int ,...) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct regulator_dev*) ;

__attribute__((used)) static int FUNC_4(struct regulator_dev *VAR_2)
{
 int VAR_3, VAR_4;





 VAR_4 = 0;
 while (1) {
  VAR_3 = FUNC_3(VAR_2);
  if (!VAR_3)
   break;
  if (VAR_3 != -VAR_0 || VAR_4 == VAR_1)
   goto err;


  VAR_3 = FUNC_2(VAR_2->regmap, VAR_2->desc->enable_reg,
      VAR_2->desc->enable_mask, 0);
  if (VAR_3)
   goto err;

  VAR_4++;
 }

 if (VAR_4)
  FUNC_1(&VAR_2->dev, "reg %#x enable ok after %d tries\n",
    VAR_2->desc->enable_reg, VAR_4);

 return 0;
err:
 FUNC_1(&VAR_2->dev, "reg %#x enable failed\n", VAR_2->desc->enable_reg);
 FUNC_0(1);

 return VAR_3;
}
