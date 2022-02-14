
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max77693_charger {TYPE_1__* max77693; int dev; } ;
struct TYPE_2__ {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct max77693_charger *VAR_4,
  unsigned int VAR_5)
{
 unsigned int VAR_6;

 if (VAR_5 < 3000000 || VAR_5 > 3700000) {
  FUNC_1(VAR_4->dev, "Wrong value for minimum system regulation voltage\n");
  return -VAR_2;
 }

 VAR_6 = (VAR_5 - 3000000) / 100000;

 VAR_6 <<= VAR_1;

 FUNC_0(VAR_4->dev, "Minimum system regulation voltage: %u (0x%x)\n",
   VAR_5, VAR_6);

 return FUNC_2(VAR_4->max77693->regmap,
   VAR_3,
   VAR_0, VAR_6);
}
