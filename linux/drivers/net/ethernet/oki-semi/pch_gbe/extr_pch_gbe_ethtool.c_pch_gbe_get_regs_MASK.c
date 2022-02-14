
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct pci_dev {int device; scalar_t__ revision; } ;
struct pch_gbe_hw {TYPE_1__* reg; } ;
struct pch_gbe_adapter {struct pch_gbe_hw hw; struct pci_dev* pdev; } ;
struct net_device {int dummy; } ;
struct ethtool_regs {int version; } ;
typedef int __u32 ;
struct TYPE_2__ {int INT_ST; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 struct pch_gbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct pch_gbe_hw*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_2,
    struct ethtool_regs *VAR_3, void *VAR_4)
{
 struct pch_gbe_adapter *VAR_5 = FUNC_1(VAR_2);
 struct pch_gbe_hw *VAR_6 = &VAR_5->hw;
 struct pci_dev *VAR_7 = VAR_5->pdev;
 u32 *VAR_8 = VAR_4;
 u16 VAR_9, VAR_10;

 VAR_3->version = 0x1000000 | (__u32)VAR_7->revision << 16 | VAR_7->device;
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
  *VAR_8++ = FUNC_0(&VAR_6->reg->INT_ST + VAR_9);

 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  FUNC_2(&VAR_5->hw, VAR_9, &VAR_10);
  *VAR_8++ = VAR_10;
 }
}
