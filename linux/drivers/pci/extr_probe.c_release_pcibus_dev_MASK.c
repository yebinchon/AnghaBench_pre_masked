
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int bridge; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct pci_bus*) ;
 int FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (struct pci_bus*) ;
 int FUNC_3 (int ) ;
 struct pci_bus* FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(struct device *VAR_0)
{
 struct pci_bus *VAR_1 = FUNC_4(VAR_0);

 FUNC_3(VAR_1->bridge);
 FUNC_1(VAR_1);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
}
