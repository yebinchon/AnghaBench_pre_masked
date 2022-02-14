
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int is_hotplug_bridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int*) ;

void FUNC_1(struct pci_dev *VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_2, VAR_0, &VAR_3);
 if (VAR_3 & VAR_1)
  VAR_2->is_hotplug_bridge = 1;
}
