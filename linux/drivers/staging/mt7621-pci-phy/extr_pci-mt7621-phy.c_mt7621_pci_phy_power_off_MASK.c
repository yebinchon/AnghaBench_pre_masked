
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int parent; } ;
struct phy {TYPE_1__ dev; } ;
struct mt7621_pci_phy_instance {int index; } ;
struct mt7621_pci_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mt7621_pci_phy* FUNC_0 (int ) ;
 struct mt7621_pci_phy_instance* FUNC_1 (struct phy*) ;
 int FUNC_2 (struct mt7621_pci_phy*,int) ;
 int FUNC_3 (struct mt7621_pci_phy*,int,int) ;

__attribute__((used)) static int FUNC_4(struct phy *VAR_4)
{
 struct mt7621_pci_phy_instance *VAR_5 = FUNC_1(VAR_4);
 struct mt7621_pci_phy *VAR_6 = FUNC_0(VAR_4->dev.parent);
 u32 VAR_7 = (VAR_5->index != 1) ?
  VAR_2 : VAR_2 + VAR_0;
 u32 VAR_8;


 VAR_8 = FUNC_2(VAR_6, VAR_7);
 VAR_8 &= ~(VAR_1 | VAR_3);
 VAR_8 |= VAR_1;
 FUNC_3(VAR_6, VAR_8, VAR_7);

 return 0;
}
