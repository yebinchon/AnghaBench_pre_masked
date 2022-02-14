
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (struct pci_bus*) ;
 int FUNC_3 () ;
 struct pci_bus* FUNC_4 (struct platform_device*) ;

int FUNC_5(struct platform_device *VAR_0)
{
 struct pci_bus *VAR_1 = FUNC_4(VAR_0);

 FUNC_0();
 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
 FUNC_3();

 return 0;
}
