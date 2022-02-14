
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct mt7621_pci_phy_instance {int dummy; } ;
struct mt7621_pci_phy {scalar_t__ bypass_pipe_rst; } ;


 struct mt7621_pci_phy* FUNC_0 (int ) ;
 int FUNC_1 (struct mt7621_pci_phy*,struct mt7621_pci_phy_instance*) ;
 int FUNC_2 (struct mt7621_pci_phy*,struct mt7621_pci_phy_instance*) ;
 struct mt7621_pci_phy_instance* FUNC_3 (struct phy*) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_0)
{
 struct mt7621_pci_phy_instance *VAR_1 = FUNC_3(VAR_0);
 struct mt7621_pci_phy *VAR_2 = FUNC_0(VAR_0->dev.parent);

 if (VAR_2->bypass_pipe_rst)
  FUNC_1(VAR_2, VAR_1);

 FUNC_2(VAR_2, VAR_1);

 return 0;
}
