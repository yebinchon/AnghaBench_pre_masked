
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pm_irq_chip {int regmap; } ;
struct irq_data {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 struct pm_irq_chip* FUNC_3 (struct irq_data*) ;
 unsigned int FUNC_4 (struct irq_data*) ;
 int FUNC_5 (char*,unsigned int,int) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct irq_data *VAR_1)
{
 struct pm_irq_chip *VAR_2 = FUNC_3(VAR_1);
 unsigned int VAR_3 = FUNC_4(VAR_1);
 u8 VAR_4, VAR_5;
 int VAR_6, VAR_7;

 VAR_4 = VAR_3 / 8;
 VAR_5 = VAR_4 / VAR_0;
 VAR_6 = VAR_3 % 8;
 VAR_4 %= VAR_0;

 VAR_7 = FUNC_6(VAR_2->regmap,
    FUNC_2(VAR_5, VAR_4),
    FUNC_0(VAR_6), FUNC_0(VAR_6));
 if (VAR_7) {
  FUNC_5("Failed to mask IRQ:%d rc=%d\n", VAR_3, VAR_7);
  return;
 }

 VAR_7 = FUNC_6(VAR_2->regmap,
    FUNC_1(VAR_5, VAR_4),
    FUNC_0(VAR_6), FUNC_0(VAR_6));
 if (VAR_7)
  FUNC_5("Failed to CLEAR IRQ:%d rc=%d\n", VAR_3, VAR_7);
}
