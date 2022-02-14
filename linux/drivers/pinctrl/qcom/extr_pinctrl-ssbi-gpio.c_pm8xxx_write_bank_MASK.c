
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pm8xxx_pin_data {int reg; } ;
struct pm8xxx_gpio {int dev; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct pm8xxx_gpio *VAR_1,
        struct pm8xxx_pin_data *VAR_2,
        int VAR_3,
        u8 VAR_4)
{
 int VAR_5;

 VAR_4 |= VAR_0;
 VAR_4 |= VAR_3 << 4;

 VAR_5 = FUNC_1(VAR_1->regmap, VAR_2->reg, VAR_4);
 if (VAR_5)
  FUNC_0(VAR_1->dev, "failed to write register\n");

 return VAR_5;
}
