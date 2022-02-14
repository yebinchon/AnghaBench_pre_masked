
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_irq_chip {int pm_irq_lock; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct pm_irq_chip *VAR_2, unsigned int VAR_3,
     unsigned int *VAR_4)
{
 int VAR_5;

 FUNC_3(&VAR_2->pm_irq_lock);
 VAR_5 = FUNC_2(VAR_2->regmap, VAR_0, VAR_3);
 if (VAR_5) {
  FUNC_0("Failed Selecting Block %d rc=%d\n", VAR_3, VAR_5);
  goto bail;
 }

 VAR_5 = FUNC_1(VAR_2->regmap, VAR_1, VAR_4);
 if (VAR_5)
  FUNC_0("Failed Reading Status rc=%d\n", VAR_5);
bail:
 FUNC_4(&VAR_2->pm_irq_lock);
 return VAR_5;
}
