
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct da9150 {int dev; int regmap; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,int ,int *,int) ;

void FUNC_2(struct da9150 *VAR_0, u16 VAR_1, int VAR_2, u8 *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0->regmap, VAR_1, VAR_3, VAR_2);
 if (VAR_4)
  FUNC_0(VAR_0->dev, "Failed to bulk read from reg 0x%x: %d\n",
   VAR_1, VAR_4);
}
