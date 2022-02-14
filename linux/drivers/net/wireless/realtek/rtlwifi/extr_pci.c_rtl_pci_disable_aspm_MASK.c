
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct rtl_ps_ctl {int reg_rfps_level; int support_aspm; } ;
struct rtl_priv {int dummy; } ;
struct TYPE_2__ {scalar_t__ pcibridge_vendor; scalar_t__ num4bytes; scalar_t__ linkctrl_reg; scalar_t__ pcibridge_linkctrlreg; } ;
struct rtl_pci_priv {TYPE_1__ ndis_adapter; } ;
struct rtl_pci {int pdev; } ;
struct ieee80211_hw {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct rtl_ps_ctl*,int) ;
 int VAR_3 ;
 int FUNC_2 (struct rtl_priv*,int ,int ,char*) ;
 int FUNC_3 (struct ieee80211_hw*,scalar_t__) ;
 int FUNC_4 (struct ieee80211_hw*,int) ;
 int FUNC_5 (int ,int,scalar_t__*) ;
 int FUNC_6 (int ,scalar_t__,scalar_t__) ;
 struct rtl_pci* FUNC_7 (struct rtl_pci_priv*) ;
 struct rtl_pci_priv* FUNC_8 (struct ieee80211_hw*) ;
 struct rtl_priv* FUNC_9 (struct ieee80211_hw*) ;
 struct rtl_ps_ctl* FUNC_10 (struct rtl_priv*) ;
 int FUNC_11 (int) ;

__attribute__((used)) static void FUNC_12(struct ieee80211_hw *VAR_4)
{
 struct rtl_priv *VAR_5 = FUNC_9(VAR_4);
 struct rtl_pci_priv *VAR_6 = FUNC_8(VAR_4);
 struct rtl_ps_ctl *VAR_7 = FUNC_10(FUNC_9(VAR_4));
 struct rtl_pci *VAR_8 = FUNC_7(FUNC_8(VAR_4));
 u8 VAR_9 = VAR_6->ndis_adapter.pcibridge_vendor;
 u8 VAR_10 = VAR_6->ndis_adapter.num4bytes;

 u8 VAR_11 = VAR_6->ndis_adapter.linkctrl_reg;
 u16 VAR_12 = VAR_6->ndis_adapter.
    pcibridge_linkctrlreg;
 u16 VAR_13 = 0;
 u8 VAR_14 = 0;

 if (!VAR_7->support_aspm)
  return;

 if (VAR_9 == VAR_2) {
  FUNC_2(VAR_5, VAR_0, VAR_1,
    "PCI(Bridge) UNKNOWN\n");

  return;
 }

 if (VAR_7->reg_rfps_level & VAR_3) {
  FUNC_1(VAR_7, VAR_3);
  FUNC_4(VAR_4, 0x0);
 }


 FUNC_5(VAR_8->pdev, 0x80, &VAR_14);


 VAR_13 |= FUNC_0(0) | FUNC_0(1);
 VAR_11 &= ~VAR_13;
 VAR_12 &= ~(FUNC_0(0) | FUNC_0(1));

 FUNC_3(VAR_4, VAR_11);
 FUNC_11(50);


 FUNC_6(VAR_8->pdev, (VAR_10 << 2),
         VAR_12);

 FUNC_11(50);
}
