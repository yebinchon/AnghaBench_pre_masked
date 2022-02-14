
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm8xxx_pin_data {int reg; } ;
struct pm8xxx_gpio {int dev; int regmap; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct pm8xxx_gpio *VAR_0,
       struct pm8xxx_pin_data *VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_2 << 4;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_0->regmap, VAR_1->reg, VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_0->dev, "failed to select bank %d\n", VAR_2);
  return VAR_4;
 }

 VAR_4 = FUNC_1(VAR_0->regmap, VAR_1->reg, &VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_0->dev, "failed to read register %d\n", VAR_2);
  return VAR_4;
 }

 return VAR_3;
}
