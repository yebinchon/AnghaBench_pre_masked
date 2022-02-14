
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_irq_chip {int regmap; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pm_irq_chip*,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct pm_irq_chip *VAR_1, int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4, VAR_5, VAR_6 = 0;

 VAR_6 = FUNC_2(VAR_1->regmap, VAR_0 + VAR_2,
     &VAR_3);
 if (VAR_6) {
  FUNC_1("Failed to read master %d ret=%d\n", VAR_2, VAR_6);
  return VAR_6;
 }
 if (!VAR_3) {
  FUNC_1("master bit set in root but no blocks: %d", VAR_2);
  return 0;
 }

 for (VAR_5 = 0; VAR_5 < 8; VAR_5++)
  if (VAR_3 & (1 << VAR_5)) {
   VAR_4 = VAR_2 * 8 + VAR_5;
   VAR_6 |= FUNC_0(VAR_1, VAR_4);
  }
 return VAR_6;
}
