
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct altera_pcie {int irq; int irq_domain; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int *) ;

__attribute__((used)) static void FUNC_3(struct altera_pcie *VAR_0)
{
 FUNC_2(VAR_0->irq, ((void*)0), ((void*)0));
 FUNC_1(VAR_0->irq_domain);
 FUNC_0(VAR_0->irq);
}
