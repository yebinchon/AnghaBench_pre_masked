
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;
struct faraday_pci {int irqdomain; } ;


 unsigned int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_2 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_3 (struct faraday_pci*,int ,int ,int ,int,unsigned int*) ;
 int FUNC_4 (int ) ;
 struct irq_chip* FUNC_5 (struct irq_desc*) ;
 struct faraday_pci* FUNC_6 (struct irq_desc*) ;
 int FUNC_7 (int ,unsigned int) ;

__attribute__((used)) static void FUNC_8(struct irq_desc *VAR_2)
{
 struct faraday_pci *VAR_3 = FUNC_6(VAR_2);
 struct irq_chip *VAR_4 = FUNC_5(VAR_2);
 unsigned int VAR_5, VAR_6, VAR_7;

 FUNC_3(VAR_3, 0, 0, VAR_0, 4, &VAR_6);
 VAR_5 = VAR_6 >> VAR_1;

 FUNC_1(VAR_4, VAR_2);

 for (VAR_7 = 0; VAR_7 < 4; VAR_7++) {
  if ((VAR_5 & FUNC_0(VAR_7)) == 0)
   continue;
  FUNC_4(FUNC_7(VAR_3->irqdomain, VAR_7));
 }

 FUNC_2(VAR_4, VAR_2);
}
