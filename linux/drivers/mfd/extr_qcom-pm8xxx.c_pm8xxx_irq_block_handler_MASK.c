
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_irq_chip {int irqdomain; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct pm_irq_chip*,int,unsigned int*) ;
 int FUNC_3 (char*,int,...) ;

__attribute__((used)) static int FUNC_4(struct pm_irq_chip *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5 = 0;
 unsigned int VAR_6;

 VAR_5 = FUNC_2(VAR_0, VAR_1, &VAR_6);
 if (VAR_5) {
  FUNC_3("Failed reading %d block ret=%d", VAR_1, VAR_5);
  return VAR_5;
 }
 if (!VAR_6) {
  FUNC_3("block bit set in master but no irqs: %d", VAR_1);
  return 0;
 }


 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  if (VAR_6 & (1 << VAR_4)) {
   VAR_2 = VAR_1 * 8 + VAR_4;
   VAR_3 = FUNC_1(VAR_0->irqdomain, VAR_2);
   FUNC_0(VAR_3);
  }
 }
 return 0;
}
