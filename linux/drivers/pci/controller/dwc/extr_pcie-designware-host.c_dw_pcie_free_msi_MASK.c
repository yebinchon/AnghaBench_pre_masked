
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_port {scalar_t__ msi_page; int irq_domain; int msi_domain; scalar_t__ msi_irq; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (scalar_t__,int *) ;

void FUNC_4(struct pcie_port *VAR_0)
{
 if (VAR_0->msi_irq) {
  FUNC_2(VAR_0->msi_irq, ((void*)0));
  FUNC_3(VAR_0->msi_irq, ((void*)0));
 }

 FUNC_1(VAR_0->msi_domain);
 FUNC_1(VAR_0->irq_domain);

 if (VAR_0->msi_page)
  FUNC_0(VAR_0->msi_page);
}
