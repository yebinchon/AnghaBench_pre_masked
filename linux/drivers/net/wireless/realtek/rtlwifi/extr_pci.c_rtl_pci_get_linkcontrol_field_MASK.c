
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int pcibridge_pciehdr_offset; int pcibridge_linkctrlreg; } ;
struct rtl_pci_priv {TYPE_1__ ndis_adapter; } ;
struct rtl_pci {int pdev; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int ,int,int*) ;
 struct rtl_pci* FUNC_1 (struct rtl_pci_priv*) ;
 struct rtl_pci_priv* FUNC_2 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_3(struct ieee80211_hw *VAR_0)
{
 struct rtl_pci_priv *VAR_1 = FUNC_2(VAR_0);
 struct rtl_pci *VAR_2 = FUNC_1(VAR_1);
 u8 VAR_3 = VAR_1->ndis_adapter.pcibridge_pciehdr_offset;
 u8 VAR_4;
 u8 VAR_5;

 VAR_5 = (VAR_3 + 0x10) / 4;


 FUNC_0(VAR_2->pdev, (VAR_5 << 2), &VAR_4);

 VAR_1->ndis_adapter.pcibridge_linkctrlreg = VAR_4;
}
