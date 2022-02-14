
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt6397_chip {int regmap; int irq_domain; int dev; } ;


 unsigned int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,unsigned int*) ;
 int FUNC_5 (int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_6(struct mt6397_chip *VAR_0, int VAR_1,
      int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_6 = FUNC_4(VAR_0->regmap, VAR_1, &VAR_3);
 if (VAR_6) {
  FUNC_1(VAR_0->dev, "Failed to read irq status: %d\n", VAR_6);
  return;
 }

 for (VAR_4 = 0; VAR_4 < 16; VAR_4++) {
  if (VAR_3 & FUNC_0(VAR_4)) {
   VAR_5 = FUNC_3(VAR_0->irq_domain, VAR_2 + VAR_4);
   if (VAR_5)
    FUNC_2(VAR_5);
  }
 }

 FUNC_5(VAR_0->regmap, VAR_1, VAR_3);
}
