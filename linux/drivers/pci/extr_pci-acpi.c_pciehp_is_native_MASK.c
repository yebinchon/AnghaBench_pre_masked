
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_host_bridge {int native_pcie_hotplug; } ;
struct pci_dev {int bus; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_host_bridge* FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 scalar_t__ VAR_3 ;

bool FUNC_3(struct pci_dev *VAR_4)
{
 const struct pci_host_bridge *VAR_5;
 u32 VAR_6;

 if (!FUNC_0(VAR_0))
  return 0;

 FUNC_2(VAR_4, VAR_1, &VAR_6);
 if (!(VAR_6 & VAR_2))
  return 0;

 if (VAR_3)
  return 1;

 VAR_5 = FUNC_1(VAR_4->bus);
 return VAR_5->native_pcie_hotplug;
}
