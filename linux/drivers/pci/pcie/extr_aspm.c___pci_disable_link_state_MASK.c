
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcie_link_state {scalar_t__ clkpm_capable; int aspm_disable; } ;
struct pci_dev {struct pcie_link_state* link_state; TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_9 ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,char*) ;
 int FUNC_5 (struct pcie_link_state*,int ) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pcie_link_state*,int ) ;
 int FUNC_8 (struct pcie_link_state*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_10, int VAR_11, bool VAR_12)
{
 struct pci_dev *VAR_13 = VAR_10->bus->self;
 struct pcie_link_state *VAR_14;

 if (!FUNC_3(VAR_10))
  return 0;

 if (FUNC_6(VAR_10))
  VAR_13 = VAR_10;
 if (!VAR_13 || !VAR_13->link_state)
  return -VAR_2;
 if (VAR_7) {
  FUNC_4(VAR_10, "can't disable ASPM; OS doesn't have ASPM control\n");
  return -VAR_3;
 }

 if (VAR_12)
  FUNC_0(&VAR_9);
 FUNC_1(&VAR_8);
 VAR_14 = VAR_13->link_state;
 if (VAR_11 & VAR_5)
  VAR_14->aspm_disable |= VAR_0;
 if (VAR_11 & VAR_6)
  VAR_14->aspm_disable |= VAR_1;
 FUNC_5(VAR_14, FUNC_8(VAR_14));

 if (VAR_11 & VAR_4) {
  VAR_14->clkpm_capable = 0;
  FUNC_7(VAR_14, 0);
 }
 FUNC_2(&VAR_8);
 if (VAR_12)
  FUNC_9(&VAR_9);

 return 0;
}
