
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct pci_host_bridge {int bus; } ;
struct altera_pcie {int resources; } ;


 int FUNC_0 (struct altera_pcie*) ;
 int FUNC_1 (int *) ;
 struct pci_host_bridge* FUNC_2 (struct altera_pcie*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct altera_pcie* FUNC_5 (struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct altera_pcie *VAR_1 = FUNC_5(VAR_0);
 struct pci_host_bridge *VAR_2 = FUNC_2(VAR_1);

 FUNC_4(VAR_2->bus);
 FUNC_3(VAR_2->bus);
 FUNC_1(&VAR_1->resources);
 FUNC_0(VAR_1);

 return 0;
}
