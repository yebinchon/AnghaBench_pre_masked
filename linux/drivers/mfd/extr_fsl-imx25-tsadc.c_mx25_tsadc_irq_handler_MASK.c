
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mx25_tsadc {int domain; int regs; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (int ) ;
 struct irq_chip* FUNC_3 (struct irq_desc*) ;
 struct mx25_tsadc* FUNC_4 (struct irq_desc*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_7(struct irq_desc *VAR_3)
{
 struct mx25_tsadc *VAR_4 = FUNC_4(VAR_3);
 struct irq_chip *VAR_5 = FUNC_3(VAR_3);
 u32 VAR_6;

 FUNC_0(VAR_5, VAR_3);

 FUNC_6(VAR_4->regs, VAR_2, &VAR_6);

 if (VAR_6 & VAR_0)
  FUNC_2(FUNC_5(VAR_4->domain, 1));

 if (VAR_6 & VAR_1)
  FUNC_2(FUNC_5(VAR_4->domain, 0));

 FUNC_1(VAR_5, VAR_3);
}
