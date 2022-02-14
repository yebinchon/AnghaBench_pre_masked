
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ixgbe_adapter {TYPE_1__* vfinfo; } ;
struct TYPE_2__ {int vf_mac_addresses; } ;


 int FUNC_0 (int ) ;
 struct ixgbe_adapter* FUNC_1 (struct pci_dev*) ;

int FUNC_2(struct pci_dev *VAR_0, unsigned int VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3 = (VAR_1 & 0x3f);

 bool VAR_4 = ((VAR_1 & 0x10000000U) != 0);

 if (VAR_4)
  FUNC_0(VAR_2->vfinfo[VAR_3].vf_mac_addresses);

 return 0;
}
