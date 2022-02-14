
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mt7621_pci_phy_instance {int index; } ;
struct mt7621_pci_phy {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mt7621_pci_phy*,int) ;
 int FUNC_1 (struct mt7621_pci_phy*,int,int) ;

__attribute__((used)) static void FUNC_2(struct mt7621_pci_phy *VAR_4,
       struct mt7621_pci_phy_instance *VAR_5)
{
 u32 VAR_6 = (VAR_5->index != 1) ?
  VAR_2 : VAR_2 + VAR_0;
 u32 VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_6);
 VAR_7 &= ~(VAR_3 | VAR_1);
 VAR_7 |= (VAR_3 | VAR_1);
 FUNC_1(VAR_4, VAR_7, VAR_6);
}
