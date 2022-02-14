
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbb_charger {int dev; scalar_t__ addr; int regmap; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 struct smbb_charger* FUNC_1 (struct regulator_dev*) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_2)
{
 struct smbb_charger *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_3->regmap, VAR_3->addr + VAR_1,
    VAR_0, 0);
 if (VAR_4)
  FUNC_0(VAR_3->dev, "failed to update OTG_CTL\n");
 return VAR_4;
}
