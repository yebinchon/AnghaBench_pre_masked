
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {int windows; int (* release_fn ) (struct pci_host_bridge*) ;} ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_host_bridge*) ;
 struct pci_host_bridge* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct pci_host_bridge *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->release_fn)
  VAR_1->release_fn(VAR_1);

 FUNC_0(&VAR_1->windows);
}
