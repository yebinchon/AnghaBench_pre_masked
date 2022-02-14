
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct rtl_priv {int dummy; } ;
struct TYPE_2__ {int linkctrl_reg; } ;
struct rtl_pci_priv {TYPE_1__ ndis_adapter; } ;
struct pci_dev {int dummy; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rtl_priv*,int ,int ,char*,int) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 int FUNC_3 (struct pci_dev*,int,int) ;
 int FUNC_4 (struct pci_dev*,int ,scalar_t__*) ;
 struct rtl_pci_priv* FUNC_5 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_6 (struct ieee80211_hw*) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_3,
     struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_6(VAR_4);
 struct rtl_pci_priv *VAR_6 = FUNC_5(VAR_4);

 u8 VAR_7;
 u16 VAR_8;


 FUNC_4(VAR_3, VAR_2, &VAR_8);
 VAR_6->ndis_adapter.linkctrl_reg = (u8)VAR_8;

 FUNC_1(VAR_5, VAR_0, VAR_1, "Link Control Register =%x\n",
   VAR_6->ndis_adapter.linkctrl_reg);

 FUNC_2(VAR_3, 0x98, &VAR_7);
 VAR_7 |= FUNC_0(4);
 FUNC_3(VAR_3, 0x98, VAR_7);

 VAR_7 = 0x17;
 FUNC_3(VAR_3, 0x70f, VAR_7);
}
