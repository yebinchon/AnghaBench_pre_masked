
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nwl_pcie {int dummy; } ;
struct irq_desc {int dummy; } ;
struct irq_chip {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct irq_chip*,struct irq_desc*) ;
 int FUNC_1 (struct irq_chip*,struct irq_desc*) ;
 struct irq_chip* FUNC_2 (struct irq_desc*) ;
 struct nwl_pcie* FUNC_3 (struct irq_desc*) ;
 int FUNC_4 (struct nwl_pcie*,int ) ;

__attribute__((used)) static void FUNC_5(struct irq_desc *VAR_1)
{
 struct irq_chip *VAR_2 = FUNC_2(VAR_1);
 struct nwl_pcie *VAR_3 = FUNC_3(VAR_1);

 FUNC_0(VAR_2, VAR_1);
 FUNC_4(VAR_3, VAR_0);
 FUNC_1(VAR_2, VAR_1);
}
