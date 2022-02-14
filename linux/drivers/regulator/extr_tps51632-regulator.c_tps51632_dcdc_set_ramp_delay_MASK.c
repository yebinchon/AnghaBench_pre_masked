
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tps51632_chip {int dev; int regmap; } ;
struct regulator_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int) ;
 struct tps51632_chip* FUNC_3 (struct regulator_dev*) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct regulator_dev *VAR_1,
  int VAR_2)
{
 struct tps51632_chip *VAR_3 = FUNC_3(VAR_1);
 int VAR_4;
 int VAR_5;

 if (VAR_2 == 0)
  VAR_4 = 0;
 else
  VAR_4 = FUNC_1(VAR_2, 6000) - 1;

 VAR_5 = FUNC_4(VAR_3->regmap, VAR_0, FUNC_0(VAR_4));
 if (VAR_5 < 0)
  FUNC_2(VAR_3->dev, "SLEW reg write failed, err %d\n", VAR_5);
 return VAR_5;
}
