
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm_irq_chip {int regmap; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (struct irq_chip*,struct irq_desc*) ;
 struct irq_chip* FUNC_4 (struct irq_desc*) ;
 struct pm_irq_chip* FUNC_5 (struct irq_desc*) ;
 int FUNC_6 (struct pm_irq_chip*,int,unsigned int) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (int ,int ,unsigned int*) ;

__attribute__((used)) static void FUNC_9(struct irq_desc *VAR_2)
{
 struct pm_irq_chip *VAR_3 = FUNC_5(VAR_2);
 struct irq_chip *VAR_4 = FUNC_4(VAR_2);
 unsigned int VAR_5;
 int VAR_6;

 FUNC_2(VAR_4, VAR_2);
 VAR_6 = FUNC_8(VAR_3->regmap,
     VAR_0, &VAR_5);
 if (VAR_6) {
  FUNC_7("Failed to read master 0 ret=%d\n", VAR_6);
  goto done;
 }


 if (VAR_5 & FUNC_1(7, 1))
  FUNC_6(VAR_3, 0, VAR_5);


 if (!(VAR_5 & FUNC_0(0)))
  goto done;

 VAR_6 = FUNC_8(VAR_3->regmap,
     VAR_1, &VAR_5);
 if (VAR_6) {
  FUNC_7("Failed to read master 1 ret=%d\n", VAR_6);
  goto done;
 }

 FUNC_6(VAR_3, 1, VAR_5);

done:
 FUNC_3(VAR_4, VAR_2);
}
