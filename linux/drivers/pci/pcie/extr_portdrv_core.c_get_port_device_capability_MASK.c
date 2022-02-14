
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_host_bridge {scalar_t__ native_pme; scalar_t__ native_aer; scalar_t__ native_pcie_hotplug; } ;
struct pci_dev {scalar_t__ aer_cap; scalar_t__ is_hotplug_bridge; int bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*,int ) ;
 struct pci_host_bridge* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_12)
{
 struct pci_host_bridge *VAR_13 = FUNC_3(VAR_12->bus);
 int VAR_14 = 0;

 if (VAR_12->is_hotplug_bridge &&
     (VAR_11 || VAR_13->native_pcie_hotplug)) {
  VAR_14 |= VAR_3;





  FUNC_5(VAR_12, VAR_5,
     VAR_6 | VAR_7);
 }
 if (FUNC_4(VAR_12) == VAR_9 &&
     (VAR_11 || VAR_13->native_pme)) {
  VAR_14 |= VAR_4;






  FUNC_6(VAR_12, 0);
 }

 if (FUNC_2(VAR_12, VAR_10) &&
     FUNC_0() && VAR_14 & VAR_0)
  VAR_14 |= VAR_2;

 if (FUNC_4(VAR_12) == VAR_8 ||
     FUNC_4(VAR_12) == VAR_9)
  VAR_14 |= VAR_1;

 return VAR_14;
}
