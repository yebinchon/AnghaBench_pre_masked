
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {int no_ext_tags; int bus; } ;
struct pci_dev {int bus; } ;


 int VAR_0 ;
 struct pci_host_bridge* FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*,char*) ;
 int FUNC_2 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct pci_host_bridge *VAR_2 = FUNC_0(VAR_1->bus);

 if (!VAR_2)
  return;

 VAR_2->no_ext_tags = 1;
 FUNC_1(VAR_1, "disabling Extended Tags (this device can't handle them)\n");

 FUNC_2(VAR_2->bus, VAR_0, ((void*)0));
}
