
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_irq_chip {int irqdomain; int regmap; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,int,int) ;
 int FUNC_5 (int ,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_6(struct pm_irq_chip *VAR_1,
         int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_5(VAR_1->regmap,
     FUNC_1(VAR_2, VAR_3), &VAR_8);
 if (VAR_7) {
  FUNC_4("Reading block %d failed ret=%d", VAR_3, VAR_7);
  return;
 }


 VAR_3 += (VAR_2 * VAR_0) - 1;


 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  if (VAR_8 & FUNC_0(VAR_6)) {
   VAR_4 = VAR_3 * 8 + VAR_6;
   VAR_5 = FUNC_3(VAR_1->irqdomain, VAR_4);
   FUNC_2(VAR_5);
  }
 }
}
