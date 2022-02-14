
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_pme_service_data {int work; } ;
struct pcie_device {int irq; int port; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct pcie_device*) ;
 struct pcie_pme_service_data* FUNC_2 (struct pcie_device*) ;
 int FUNC_3 (struct pcie_pme_service_data*) ;
 int FUNC_4 (int ,struct pcie_pme_service_data*) ;

__attribute__((used)) static void FUNC_5(struct pcie_device *VAR_0)
{
 struct pcie_pme_service_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_4(VAR_0->port, VAR_1);
 FUNC_1(VAR_0->irq, VAR_0);
 FUNC_0(&VAR_1->work);
 FUNC_3(VAR_1);
}
